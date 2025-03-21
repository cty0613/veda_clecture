#include <stdio.h>

struct student       // 학생 구조체 선언
{
	int id;          // 학번
	char name[20];   // 이름
	double grade;    // 학점
};

int main(){
    struct student stu1 = {35, "choi", 3.78};
    struct student *pstu = &stu1;

    printf("학번 : %d\n", (*pstu).id);
    printf("이름 : %s\n", pstu->name);
    printf("성적 : %lf\n", pstu->grade);
    return 0;
}