  #define FALSE 0
  #define TRUE 1
  #define LCD P2
  UINT8* commands[]={"AT+CMGF=1\r","AT+CMGS=9915990657"};
  UINT8 ENTER = 0x0D;
  UINT8 DATA_SEND = 0x1A;
  UINT8 PARK_MODE = 0;
  UINT8 response[30];
  UINT8 OK_FLAG=FALSE;
	unsigned char x=0;