#include <stdio.h>

// macro functions
#define d(n,v) printf("\t %d. 0d %08d\n", (n), (v)); // decimal
#define x(n,v) printf("\t %d. 0x %08X\n", (n), (v)); // hex
#define c(n,v) printf("\t %d. 0c %c\n", (n), (v));   // char
#define s(n,v) printf("\t %d. 0s %s\n", (n), (v));   // string

int main() {
    int a[] = {10, 1, 2, 3, 4, 5};
    int **pp = &a; // a의 주소 반환

    **pp = 11;

    printf("%d\n", a[0]);

    return 0;
}
