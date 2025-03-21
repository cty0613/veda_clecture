#include <stdio.h>

int sum(int, int);

int main() {
    int (*ptr)(int, int);
    int res;

    ptr = sum;
    res = ptr(10, 20);
    printf("Sum = %d\n", res);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}