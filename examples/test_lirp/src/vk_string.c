#include <memory.h>
#include "vk_string.h"

unsigned char *malloc_str(const unsigned char * const pValue){
	int len = strlen(pValue)+1;
	unsigned char *p = (unsigned char *)malloc(len);
	memcpy(p, pValue, len);
	return p;
}

void hello(){
	printf("hello\n");
}