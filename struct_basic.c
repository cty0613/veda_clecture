#include <stdio.h>

struct struct_basic
{
    int a; // 4B
    int b; // 4B
    double c; // 8B
    float d; // 4B
};

int main(){
    struct struct_basic s1 = {1, 2, 3.141592, 3.14};
    // struct struct_basic s2 = {3, 4, 'b', 6.28};

    printf("%lu\n", sizeof(s1));
    return 0;
}
