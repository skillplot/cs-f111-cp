; Credit: Dr Meetha V. Shenoy
		AREA RESET, CODE, READONLY
		THUMB
in  	DCD 0x20000100,MAIN+1 ;0x80000009
		ENTRY
		LDR R4,=SRC ; Load address of A to R4
		LDR R5,=DST ; Load address of DST to R5

MAIN    BL SUB1

STOP    B STOP

SUB1    LDR R0,[R4],#4
        LDR R1,[R4],#4
        LDR R2,[R4],#4
        LDR R3,[R4],#4
        SUBS R6, R0,R1;
        BEQ  L2
        BHI L1
        B L3

L1      SUB R0,R2,R3
        STR R0,[R5,#4]           
        B L3

L2      ADD R0,R2,R3
        STR R0,[R5,#4];

L3      MOV R2,#5                            
        STR R2,[R5]    

AFT     MOV PC,LR

SRC     DCD 0X10 ,0X10,0X30,0X20

        AREA RES ,DATA, READWRITE

DST     DCD 0,0
        END