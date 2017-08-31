#ifndef _LLRP2XML_H
#define _LLRP2XML_H

#include "ltkc.h"

extern int Element2xmlstr(LLRP_tSElement *pMessage, char *aXMLTextBuf, int nXMLTextBuf);
extern int xmlStr2xmlFile(char *xmlStr, int xmlStrLen, char *xmlFileName);
extern int Element2XmlFile(LLRP_tSMessage *pMessage, char *xmlFileName);




#endif

