# Edit by liubaolong @invengo -- 20170705


# PLATFORM        = ARM
ifeq ($(PLATFORM) , PC)
AR              = ar
CC              = gcc
else ifeq ($(PLATFORM) , ARM)
AR              = /home/fangy/arm-linux-gcc-3.4.1/usr/local/arm/3.4.1/bin/arm-linux-ar
CC              = /home/fangy/arm-linux-gcc-3.4.1/usr/local/arm/3.4.1/bin/arm-linux-gcc
endif

CINCLUDES	= -I /usr/include/libxml2


	
	

XML_LIRP_LIB = libxmlllrp.a
LTKC_LIB_DIR = ../../Library

XML_LIRP_HDRS = \
	xml2llrp.h \
	llrp2xml.h \

XML_LIRP_OBJS = \
	xml2llrp.o \
	llrp2xml.o \
	
CFLAGS          = -g -Wall -I$(LTKC_LIB_DIR) -L$(LTKC_LIB_DIR) -lltkc -lxml2


ltkc_arm:

all:    $(XML_LIRP_LIB)

everything:
	make all

$(XML_LIRP_LIB) : $(XML_LIRP_OBJS) 
	$(AR) crv $(XML_LIRP_LIB) $(XML_LIRP_OBJS)

# needed head all file. include XML_LIRP_HDRS included
$(XML_LIRP_OBJS) : $(XML_LIRP_HDRS)


xml2llrp.o: xml2llrp.c
	$(CC) -c $(CFLAGS) $(CINCLUDES) xml2llrp.c -o xml2llrp.o 

llrp2xml.o: llrp2xml.c
	$(CC) -c $(CFLAGS) $(CINCLUDES) llrp2xml.c -o llrp2xml.o 

clean:
	rm -f *.o
	rm -f *.a

ltkc_pc:
	make all PLATFORM=PC

ltkc_arm:
	make all PLATFORM=ARM