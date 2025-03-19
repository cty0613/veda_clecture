//
// Created by 2-17 on 25. 3. 17.
//

#include <stdio.h>

// macro functions
#define d(n,v) printf("\t %d. 0d %08d\n", (n), (v)); // decimal
#define x(n,v) printf("\t %d. 0x %08X\n", (n), (v)); // hex
#define c(n,v) printf("\t %d. 0c %c\n", (n), (v));   // char
#define s(n,v) printf("\t %d. 0s %s\n", (n), (v));   // string

int main() {
    int a[] = {10, 1, 2, 3, 4, 5};
    int *p;

    p = &a[1]; // 1의 주소 반환

    printf("%d\n", *p++); // *연산, ++연산 중 오른쪽이 우선 -> p++ 후 *p
                                // p반환!! 이 반환된것을 *연산

    return 0;
}