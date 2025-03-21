#include <stdio.h>

void swap(char** a, char** b) { // 주소의 주소를 받음 (&ps1, &ps2)
    char* temp; 
    // 주소를 저장할 변수
    temp = *a;  
    // temp에 a가 가리키는 주소를 저장 (= "Korea"리터럴의 주소)
    *a = *b;    
    // a가 가리키는 주소에 b가 가리키는 주소를 저장 
    // (= "Korea "리터럴의 주소에 "Japan "리터럴의 주소를 저장)
    *b = temp;  
    // b가 가리키는 주소에 temp를 저장
    // (= "Japan" 리터럴의 주소에 "Korea" 리터럴의 주소를 저장)
}


int main () {
    char* ps1 = "Korea";  // 리터럴 "Korea"의 주소를 가리킴
    char* ps2 = "Japan";  // 리터럴 "Japan"의 주소를 가리킴

    printf("Before swap (value): %s, %s\n", ps1, ps2);
    printf("Before swap (address): %p, %p\n", ps1, ps2);

    swap(&ps1, &ps2); // 주소의 주소 넘겨줌 (char** ps1, char** ps2를 함수에서 받음)

    printf("After swap (value): %s, %s\n", ps1, ps2);
    printf("After swap (address): %p, %p\n", ps1, ps2);

    /* 
        Before swap (value): Korea, Japan
        Before swap (address): 0x100b87f1c, 0x100b87f22
        After swap (value): Japan, Korea
        After swap (address): 0x100b87f22, 0x100b87f1c
    */
    return 0;
}  