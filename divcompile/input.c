#include <stdio.h>

extern int count;
int total = 0;

int getInput() {
    
    int num;

    while(1){
        printf("숫자를 입력하세요: ");
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        count++;
        total += num;
    }

    return total;

}