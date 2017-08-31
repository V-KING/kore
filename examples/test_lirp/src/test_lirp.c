#include <kore/kore.h>
#include <kore/http.h>
#include <openssl/sha.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <memory.h>
#include "assets.h"
// #include "../../includes/lirp/ltkc.h"
// #include "../../includes/lirp/xml2llrp.h"
// #include "../../includes/lirp/llrp2xml.h"
#include "kore/lirp/ltkc.h"
#include "kore/lirp/ltkc.h"
#include "kore/lirp/llrp2xml.h"
#include "vk_string.h"

#if 0
#define print_dbg(fmt, arg...)
#define print_info(fmt, arg...)
#define print_err(fmt, arg...)
#else
#define print_dbg(fmt, arg...)      printf("[DBG][%s:%d %s]"fmt, __FILE__, __LINE__, __FUNCTION__, ##arg)
#define print_info(fmt, arg...)     printf("[INFO][%s:%d %s]"fmt, __FILE__, __LINE__, __FUNCTION__, ##arg)
#define print_err(fmt, arg...)      printf("[ERR][%s:%d %s]"fmt, __FILE__, __LINE__, __FUNCTION__, ##arg)
#define print_pAddr(p1, p2)         printf("[Addr compare][0x%x :: 0x%x]",p1,p2)

#define print_buf(buf, len)     do{         \
    int i = 0;                              \
    print_info("");                     \
    printf("buf data = {");                 \
    for(i = 0; i < len; i++)                \
        printf("0x%02x, ", *(buf+i));           \
    printf("}\n");                          \
}while(0)


#define print_buf_char(buf, len)     do{         \
    int i = 0;                              \
    print_info("");                     \
    printf("buf data = {");                 \
    for(i = 0; i < len; i++)                \
        printf("%c, ", *(buf+i));           \
    printf("}\n");                          \
}while(0)
#endif

#ifdef RELEASE
#define print_dbg(fmt, arg...)
#define print_info(fmt, arg...)
#define print_err(fmt, arg...)
#define print_pAddr(p1, p2)
#endif

void
printXMLMessage (
    LLRP_tSMessage *              pMessage)
{
    if(NULL == pMessage) {
        print_err("XML Message is null\n");
        return;
    }
    char                        aBuf[100 * 1024];
    LLRP_toXMLString(&pMessage->elementHdr, aBuf, sizeof aBuf);
    printf("===================================\n");
    printf("%s", aBuf);
}

int connect_to_server(char* ip, int port){
	int sock = 0;
	struct sockaddr_in server;
    bzero(&server,sizeof(server));
	server.sin_addr.s_addr = inet_addr(ip);
	server.sin_family = AF_INET;
	server.sin_port = htons( port );
	//Create socket
	if ((sock = socket(AF_INET , SOCK_STREAM , 0)) == -1){
		print_err("Could not create socket\n");
		return -1;
	}
	int opt = 1;
    if(setsockopt(sock,SOL_SOCKET,SO_REUSEADDR,&opt,sizeof(opt)) < 0){
		print_err("setsockopt err\n");
		return -1;
	}
	struct sockaddr_in client;
    bzero(&client,sizeof(client));
	client.sin_family = AF_INET;
	client.sin_addr.s_addr = htonl(INADDR_ANY);
	client.sin_port = htons(12345);
	if (bind(sock,(struct sockaddr *)&client, sizeof(client)) ){
		print_err("err\n");
		return -1;
	}
	//Connect to remote server
	if (connect(sock , (struct sockaddr *)&server , sizeof(server)) < 0) {
		print_err("connect failed. Error\n");
		return -1;
	}
// 	g_state.connected = 1;
	print_info("Connected\n");
	return sock;
}
llrp_u32_t Write_socket(llrp_u32_t sockid, llrp_u8_t *send_buf, llrp_u32_t data_len)
{
    llrp_s32_t  nwrite   = 0;
    llrp_u32_t  index = 0;
    llrp_u32_t  retry = 0;
    llrp_s32_t  totalWrite = 0;
    //printf("data length is %d\n", data_len);
    while(data_len > 0) {
        //nwrite = send(index, send_buf + index, data_len, 0);
        nwrite = write(sockid, send_buf + index, data_len);
        if(nwrite < 0) {
            print_info("%s", strerror(errno));
            print_info("the socket pipe break\n");
            if(retry < 5) {
                retry++;
                usleep(5000);
                continue;
            } else {
                return errno;
            }
        }
        //data_len -= nwrite;
        index += nwrite;
        data_len -= nwrite;
        totalWrite += nwrite;
        //printf("date_len is %d\n", data_len);
    }
    return totalWrite;
}

int LLRP_Sock_sendMessage(int sockid, LLRP_tSMessage *pMessage)
{
    llrp_u32_t rtn;
    llrp_u32_t data_len;


    LLRP_tSFrameEncoder *   pEncoder;
    LLRP_tSErrorDetails     Errors;
    unsigned char           send_buf[1024*8];
    memset(send_buf, 0, 1024*8);

    pEncoder = LLRP_FrameEncoder_construct(send_buf, sizeof send_buf);
    if(NULL == pEncoder) {
        print_err("Failed to construct FrameEncoder\n");
        return -1;
    }
    LLRP_Encoder_encodeElement(&pEncoder->encoderHdr, &pMessage->elementHdr);

    Errors = pEncoder->encoderHdr.ErrorDetails;

    if(LLRP_RC_OK == Errors.eResultCode) {
        data_len = pEncoder->iNext;
        rtn = Write_socket(sockid, send_buf, data_len);
    } else {
        print_err("Error: %s \n", Errors.pWhatStr);
        rtn = -1;
    }

    LLRP_Encoder_destruct(&pEncoder->encoderHdr);
    return rtn;

}
/*
 * @brief: 0x00 ==> char c
 * @c: the char to replese
 */
void repleseNULL2Eq(uint8_t *str, int len, char c){
	print_info("111\n");
	uint8_t *p = str;
	int i;
	for(i = 0; i<len; i++,p++){
		if(*p==0x00){
			*p = c;
		}
// 		print_info("p=0x%02x\n", *p);
	}
}

#if 0
int test(struct http_request *);
int test(struct http_request *req)
{

	
	char *str = malloc_str("dddd");
	print_info("%s\n",str);
	free(str);
	hello();
	print_info("222222222\n");
	http_response(req, 200, NULL, 0);
	char *name = "<xml><name>liubaolong</name></xml>";
	xmlStr2xmlFile(name, strlen(name), "/home/vk/1.xml");
	LLRP_AccessCommand_construct();
	return (KORE_RESULT_OK);
}
#endif
// LLRP_tSTypeRegistry *pTypeRegistry;
// void lirpInit()
// {
//     pTypeRegistry = LLRP_getTheTypeRegistry();
// }

extern int		serve_index(struct http_request *);
int		serve_index(struct http_request *req)
{
	/* registe lirp*/
	//lirpInit();

	/* process HTTP get or post*/
	if (req->method == HTTP_METHOD_GET){
		http_populate_get(req);
	}
	else if (req->method == HTTP_METHOD_POST){
		http_populate_post(req);
		//start debug
		print_dbg(" req->host        =%s\n",req->host);
		print_dbg(" req->path        =%s\n",req->path);
		print_dbg(" req->agent       =%s\n",req->agent);
		print_dbg(" req->query_string=%s\n",req->query_string);
		print_dbg(" req->http_body_path=%s\n",req->http_body_path);
		print_dbg(" req->http_body->data=%s\n",req->http_body->data);
		print_dbg(" req->http_body_length=%d\n",req->http_body_length);
		print_buf(req->http_body->data, req->http_body_length);
		print_buf_char(req->http_body->data, req->http_body_length);
		//end debug
		
		/* get Agent name*/
		char *srcStr = (char *)malloc(strlen(req->agent)+1);
		memcpy(srcStr, req->agent, strlen(req->agent)+1);
		print_dbg(" req->agent       =%s\n",req->agent);
		char *q = srcStr;
		char *tmp;
		char agent[20]={0};
		while (tmp = strsep(&q, " ")){ //will change str1 adddress's content,so u should memory cpy
			fprintf(stderr, "strsep return                 : %s\n", tmp);
			fprintf(stderr, "strsep's first arg is remained: %s\n", q);
			/*if is browser,get name*/
			if(strstr(tmp,"Firefox")){
				memcpy(agent, tmp, strlen(tmp)+1);
				printf("Agent==>:%s\n",agent);
				break;
			}
		}
		free(srcStr);
		
		/* get LLRP_tSElement*/
		char *postStr = (char *)req->http_body->data;
		size_t postLen = req->http_body_length;
// 		LLRP_tSElement *pElement = xmlFile2Element("XML_for_Spec/AddSelectSpec.xml");
		repleseNULL2Eq(req->http_body->data, req->http_body_length, '=');
// 		xmlStr2xmlFile(req->http_body->data,req->http_body_length,"1.xml");
// 		LLRP_tSElement *pElement = xmlFile2Element("1.xml");
		LLRP_tSElement *pElement;
		print_info("---\n");
		printXMLMessage(pElement);
		print_info("---\n");
		
		if(NULL == pElement){
			print_info("return_index2_err\n");
			goto return_index2_err;
		}

		
		int sockid;
		if(&LLRP_tdAddSelectSpec == pElement->pType 
			|| &LLRP_tdDeleteSelectSpec== pElement->pType
			|| &LLRP_tdEnableSelectSpec== pElement->pType
			|| &LLRP_tdStartSelectSpec== pElement->pType
			|| &LLRP_tdDisableSelectSpec== pElement->pType
			|| &LLRP_tdStopSelectSpec== pElement->pType
		){
			print_dbg("begin to connect\n");
			sockid = connect_to_server("192.168.1.108",5084);
			if(sockid < 0){
				print_err("Connect_to_server err\n");
				goto return_index2_err;
			}
			LLRP_Sock_sendMessage(sockid, pElement);
			print_info("=============send:::::");
			printXMLMessage(pElement);
			LLRP_Element_destruct(pElement);
			close(sockid);
		}
		print_info("---\n");
		goto return_index2_ok;
		
	
return_index2_err:
		print_info("---\n");
		http_response_header(req, "content-type", "text/xml");
		http_response(req, 404, asset_index2_xml, asset_len_index2_xml);
		return (KORE_RESULT_ERROR);
return_index2_ok:
		print_info("---\n");
		http_response_header(req, "content-type", "text/xml");
		http_response(req, 200, asset_index2_xml, asset_len_index2_xml);
		return (KORE_RESULT_OK);
	}
	
return_index_ok:
	http_response_header(req, "content-type", "text/html");
	http_response(req, 200, asset_index_html, asset_len_index_html);
	return (KORE_RESULT_OK);
}