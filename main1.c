#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};

    printf("%x\n", a);
    printf("%x\n", a+1);
    printf("%x\n", *(a+1));
    return 0;
}