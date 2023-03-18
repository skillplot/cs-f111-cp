; Credit: Dr Meetha V. Shenoy
		AREA RESET, CODE, READONLY
in      DCD 0x20000100,MAIN+1, 0,0,0,0,0,0,0,0,0,SVC_handler+1,0,0,0,0,0,0,0,0,0,0,0
		ENTRY
        
MAIN 	LDR R1,=0X20000200
		MSR PSP,R1 
	
		MOV R0,#3
		MSR CONTROL,R0
		
		LDR R7,=SRC
		LDR R1,[R7],#4
		LDR R2,[R7]
		LDR R8,=DST
		SVC 0x10
        

STOP    B STOP


SVC_handler push {lr}
			push {r5,r6}
			MOV R3,#0x10
			MOV R4,#0x11
			TST LR,#4 ; Test bit number 2
			ITE EQ
			MRSEQ R0,MSP
			MRSNE R0,PSP	
			LDR R0,[R0,#24]
			LDRB R0,[R0,#-2]
			SUBS R5,R0, R3
			ADDEQ R1,R1,R2
			STREQ R1,[R8]
			SUBS R5,R0, R4
			SUBEQ R6,R0,R4
			STREQ R1,[R8]
L2 	     		pop{r5,r6}
			pop {pc}
SRC     DCD 0X10 ,0X20
        AREA RES ,DATA, READWRITE
DST     DCD 0,0
        END