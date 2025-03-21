#include <stdio.h>

void print_ary(char** pp_ary, int count) { // 리터럴의 주소들(배열)을 받음
    for (int i = 0; i < count; i++) {
        printf("%s\n", pp_ary[i]);
    }
}


int main() {

    char* ptr_ary[] = { "Korea", "Japan", "China", "Russia", "America" };
    // 리터럴의 주소들을 가리키는 포인터 배열
    int count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    // 배열 내용의 갯수

    print_ary(ptr_ary, count);

    return 0;

}