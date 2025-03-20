#include <stdio.h>


int main() {
    int student = 3;
    int score = 4;

    int score_arr[student][score];

    for (int i = 0; i < student; i++) {
        printf("Student Num %d: \n", i+1);
        for (int j = 0; j < score; j++) {
            printf("Enter the score of %d: ", j+1);
            scanf("%d", &score_arr[i][j]);
        }
    }

    printf("The scores are: \n");
    for (int i = 0; i < student; i++) {
        printf("Student %d: \n ", i+1);
        for (int j = 0; j < score; j++) {
            printf("score of %d : ", j+1);
            printf("%d / ", score_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
