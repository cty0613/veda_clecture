#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[80];                // 임시 char 배열
	char* str[3];                 // 동적 할당 영역을 연결할 포인터 배열              // 반복 제어 변수

	for (int i = 0; i < 3; i++)
	{   
		printf("문자열을 입력하세요 : ");
		fgets(temp, sizeof(temp), stdin); // 문자열 입력
        temp[strcspn(temp, "\n")] = 0; // 개행 문자 제거
		str[i] = (char*)malloc(strlen(temp) + 1);   // 문자열 저장 공간 할당
        if (str[i] != NULL) {
            strcpy(str[i], temp); 
        } else {

            printf("메모리 할당에 실패했습니다.\n");
            return 1;
        }
		    // 동적 할당 영역에 문자열 복사
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);   // 입력된 문자열 출력
	}

	for (int i = 0; i < 3; i++)
	{
		free(str[i]);             // 동적 할당 영역 반환
	}

	return 0;
}