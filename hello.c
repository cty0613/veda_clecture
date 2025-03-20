#include <stdio.h>
// macro functions
#define d(n,v) printf("\t %d. 0d %08d\n", (n), (v)); // decimal
#define x(n,v) printf("\t %d. 0x %08X\n", (n), (v)); // hex
#define c(n,v) printf("\t %d. 0c %c\n", (n), (v));   // char
#define s(n,v) printf("\t %d. 0s %s\n", (n), (v));   // string

int gi = 11;
int gni;

int main() {


	int li = 11;
	int lni;
	
	static int sli = 1111; 	// stack에 없음
	static int slni; 		// stack에 없음
	#if 0
	d(1, gi);
	d(2, gni);
	d(3, li);
	d(4, lni);

	d(5, sli);
	d(6, slni);
	#endif

	/*	1. 0d 00000123
        2. 0d 00000000
        3. 0d 00000011
        4. 0d 00000001
		5. 0d 00001111
        6. 0d 00000000 */
	

	x(1, &main);
	x(2, &li);
	x(3, &lni);
	x(4, &gi);
	x(5, &gni);
	x(6, &sli);
	x(7, &slni);
	x(8, "hello");

	/*	1. 0x 0040154B
        2. 0x 0062FE1C
        3. 0x 0062FE18
        4. 0x 00403010
        5. 0x 00407A20
        6. 0x 00403014
        7. 0x 00407030
        8. 0x 0040401B  */

	/*	1. 0x 00401 54B -> main() .text ROM에
        4. 0x 00403 010 -> gi (전역변수) .data RAM
        6. 0x 00403 014 -> sli (전역변수) .data RAM
		8. 0x 00404 01B -> "hello" 문자열 .rdata ROM
        7. 0x 00407 030 -> slni, zero(dummy) .bss RAM
		5. 0x 00407 A20 -> gni, zero(dummy) .bss RAM

		2. 0x 0062F E1C  -> stack 주소
        3. 0x 0062F E18  

	*/

	/* objdump -h a.exe */
	/*
	Sections:
		Idx Name          Size      VMA***          LMA               File off  Algn
		0 .text         00001d70  0000000000401000  0000000000401000  00000600  2**4 -> 함수가 모여있음 ROM : 코드 자체
						CONTENTS, ALLOC, LOAD, READONLY, CODE
		1 .data         000000a0  0000000000403000  0000000000403000  00002400  2**4 -> 전역변수 RAM
						CONTENTS, ALLOC, LOAD, DATA
		2 .rdata        00000830  0000000000404000  0000000000404000  00002600  2**4 -> 리터럴 ROM
						CONTENTS, ALLOC, LOAD, READONLY, DATA
		3 .pdata        00000240  0000000000405000  0000000000405000  00003000  2**2
						CONTENTS, ALLOC, LOAD, READONLY, DATA
		4 .xdata        00000204  0000000000406000  0000000000406000  00003400  2**2
						CONTENTS, ALLOC, LOAD, READONLY, DATA
		5 .bss          00000a70  0000000000407000  0000000000407000  00000000  2**6 -> 초기화전 0 쓰래기값
						ALLOC
		6 .idata        000007e4  0000000000408000  0000000000408000  00003800  2**2
						CONTENTS, ALLOC, LOAD, DATA
		7 .CRT          00000068  0000000000409000  0000000000409000  00004000  2**3
						CONTENTS, ALLOC, LOAD, DATA
		8 .tls          00000068  000000000040a000  000000000040a000  00004200  2**5
						CONTENTS, ALLOC, LOAD, DATA
		9 .debug_aranges 00000420  000000000040b000  000000000040b000  00004400  2**4
						CONTENTS, READONLY, DEBUGGING
		10 .debug_info   0000be7a  000000000040c000  000000000040c000  00004a00  2**0
						CONTENTS, READONLY, DEBUGGING
		11 .debug_abbrev 00001a3c  0000000000418000  0000000000418000  00010a00  2**0
						CONTENTS, READONLY, DEBUGGING
		12 .debug_line   000019b5  000000000041a000  000000000041a000  00012600  2**0
						CONTENTS, READONLY, DEBUGGING
		13 .debug_frame  00000ae0  000000000041c000  000000000041c000  00014000  2**3
						CONTENTS, READONLY, DEBUGGING
		14 .debug_str    00000300  000000000041d000  000000000041d000  00014c00  2**0
						CONTENTS, READONLY, DEBUGGING
		15 .debug_loc    00002c04  000000000041e000  000000000041e000  00015000  2**0
						CONTENTS, READONLY, DEBUGGING
		16 .debug_ranges 00000520  0000000000421000  0000000000421000  00017e00  2**0
						CONTENTS, READONLY, DEBUGGING
	
	
	*/

	// printf("%s\n", "Hello"); 	// standard library : "libc"
	// printf("%d\n", 12345); 		// standard library : "libc"
	// printf("%c\n", 'A'); 		// standard library : "libc"
	// printf("%f\n", 3.1415); 	// standard library : "libc"
	
	// int vi;
	// float vf;
	// printf("input vi : ");
	// scanf("%d", &vi);

	// printf("vi is %d\n", vi);

	// printf("input vf : ");
	// scanf("%f", &vf);
	int i; // 4Byte
	long double d;// 8byte
	float f;


	printf("size of int : %d\n", sizeof(&i)); 
	// i의 주소값은 8BYTE 길이 (64비트에서)
	// i의 주소값은 4BYTE 길이 (32비트에서)
	printf("size of long double : %d\n", sizeof(d));
	printf("size of float : %d\n", sizeof(f));

	// printf("vf is %f\n", vf);
	return 0;
	
}

