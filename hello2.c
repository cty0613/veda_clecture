#include <stdio.h>

// macro functions
#define d(n,v) printf("\t %d. 0d %08d\n", (n), (v)); // decimal
#define x(n,v) printf("\t %d. 0x %08X\n", (n), (v)); // hex
#define c(n,v) printf("\t %d. 0c %c\n", (n), (v));   // char
#define s(n,v) printf("\t %d. 0s %s\n", (n), (v));   // string

int main () {

    register int ri = 123; // -> @register, 레지스터 변수
    int lix = 0x12345678; // hex
    int lid =  12345678;  // decimal

    // x(0, &ri); ERROR! : 레지스터는 주소를 가지고있지 않음 (= CPU안에 있는걸 어캐암)
    x(1, lix);
    d(2, lid);
    // printf("li is : %d", li)

    
    return 0;
}
/*
Sections:
Idx Name          Size      VMA       LMA       File off  Algn
  0 .text         000017a8  00401000  00401000  00000400  2**4
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
  1 .data         00000034  00403000  00403000  00001c00  2**2
                  CONTENTS, ALLOC, LOAD, DATA
  2 .rdata        000004c0  00404000  00404000  00001e00  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  3 .bss          00000454  00405000  00405000  00000000  2**6
                  ALLOC
  4 .idata        0000057c  00406000  00406000  00002400  2**2
                  CONTENTS, ALLOC, LOAD, DATA
  5 .CRT          00000034  00407000  00407000  00002a00  2**2
                  CONTENTS, ALLOC, LOAD, DATA
  6 .tls          00000020  00408000  00408000  00002c00  2**2
                  CONTENTS, ALLOC, LOAD, DATA
  7 .debug_aranges 000002d8  00409000  00409000  00002e00  2**3
                  CONTENTS, READONLY, DEBUGGING
  8 .debug_info   0000a6d5  0040a000  0040a000  00003200  2**0
                  CONTENTS, READONLY, DEBUGGING
  9 .debug_abbrev 0000199e  00415000  00415000  0000da00  2**0
                  CONTENTS, READONLY, DEBUGGING
 10 .debug_line   000018f3  00417000  00417000  0000f400  2**0
                  CONTENTS, READONLY, DEBUGGING
 11 .debug_frame  00000780  00419000  00419000  00010e00  2**2
                  CONTENTS, READONLY, DEBUGGING
 12 .debug_str    000002f2  0041a000  0041a000  00011600  2**0
                  CONTENTS, READONLY, DEBUGGING
 13 .debug_loc    00000d1e  0041b000  0041b000  00011a00  2**0
                  CONTENTS, READONLY, DEBUGGING
 14 .debug_ranges 00000230  0041c000  0041c000  00012800  2**0
                  CONTENTS, READONLY, DEBUGGING
                  
                  
*/

// >> size a.exe 프로그램 사이즈 확인할때 사용 (특히 ROM에다가 업로드할 때)

/*
   text*    data*     bss*     dec     hex  filename
   7272     1540      1108     9920    26c0 a.exe
*/

// >> dir a.exe

/*
2025-03-17  오후 02:51           104,330  a.exe
            1개 파일             104,330  바이트
            0개 디렉터리  187,337,887,744  바이트 남음

*/


/*  Compile Time에 탑재 : 
    .text (+ .rdata)
    .data
    .bss

    Run Time에 탑재 :
    .stack
    .heap

*/