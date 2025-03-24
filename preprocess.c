#include <stdio.h>

#define SUM(a, b) ((a) + (b))
#define MUL(a, b) ((a) * (b))

int main(){

    #ifdef OPTION
    printf("OPTION is defined\n");
    int a = 2, b = 20;
    printf("a + b = %d\n", SUM(a, b));

    #endif
    int x = 3, y = 15;
    int result;

    printf("x * y = %d\n", MUL(x, y));

    result = 30 / MUL(2, 5);
    printf("30 / MUL(2, 5) = %d\n", result);
}