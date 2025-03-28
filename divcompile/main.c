#include <stdio.h>

int getInput(void);       // 양수를 입력하고 그 합을 반환
double getAverage(void);       // 평균을 구하는 함수
void printResult(double);    // 출력 함수

int count = 0;              // 입력한 양수의 수 누적
static int total = 0;       // 입력한 양수의 합

int main(void)
{
	double avg;             // 입력한 양수의 평균

	total = getInput();   // 양수를 입력하고 그 합을 반환
	avg = getAverage();        // 평균 계산
	printResult(avg);

	return 0;
}

void printResult(double avg)
{
	printf("입력한 양수의 개수 : %d\n", count);
	printf("전체 합과 평균 : %d, %.1lf\n", total, avg);

}