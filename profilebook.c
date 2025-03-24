#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
    char name[20];
    int age;
    double height;
    char* intro;
};


int main(){
    struct profile cty;

    strcpy(cty.name, "Choi Tae Young");
    cty.age = 25;
    cty.height = 180.5;

    cty.intro = (char*)malloc(100);

    printf("Whis is your name? : ");
    fgets(cty.name, 20, stdin);
    cty.name[strcspn(cty.name, "\n")] = 0;
    printf("How old are you? : ");
    scanf("%d", &cty.age);
    printf("How tall are you? : ");
    scanf("%lf", &cty.height);
    getchar();

    printf("Introduce yourself : ");
    fgets(cty.intro, 100, stdin);

    printf("Your Profile : \n");
    printf("name : %s\n", cty.name);
    printf("age : %d\n", cty.age);
    printf("height : %.1f\n", cty.height);
    printf("intro : %s\n", cty.intro);

    free(cty.intro);
    return 0;
}