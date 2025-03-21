#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);

int main(){
    int (*ptr[])(int, int) = {sum, sub, mul};
    /* 
        int(int, int) 
        int(*)(int, int) = sum / sub / mul 각각의 함수의 주소값을 가지고 있음
        int(*)(int, int) [] = 이들을 배열로 취급하기위한 표준 typedef
        int(*)(int,int) ptr[] = identifer까지 적어보면 이렇게
        1. 배열인데(ptr[]), 2. 포인터들의 배열 (*ptr), 3. 근데 함수임(int, int)
            -> int(*ptr[])(int, int)
    */
    int sel_num;
    int (*sel_func)(int, int);

    printf("select function[1-3] : ");
    scanf("%d", &sel_num);
    sel_func = ptr[sel_num - 1];
    printf("result = %d\n", sel_func(30, 10));
    return 0;
}



int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}