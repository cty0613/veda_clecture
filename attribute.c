#include <stdio.h>

// static variable's scope
void s_func() {
    static int si = 0;
    printf("%d\n", si++);
}

void i_func() {
    int i = 0;
    printf("%d\n", i++);
}

int main() {
    
    printf("static variable : \n");
    s_func();
    s_func();
    s_func();
    s_func();
    s_func();

    printf("local variable : \n");
    i_func();
    i_func();
    i_func();
    i_func();
    i_func();

    return 0;
}