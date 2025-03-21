#include <stdio.h>

const int x = 3;
const int y = 2;
const int z = 2;

void printarray(int (*pa)[3] ){

    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            printf("%d ", pa[i][j]);
        }
        printf("\n");
    }
}

void printarray3(void *xx){
    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            printf("%d ", ((int (*)[3])xx)[i][j]);
        }
        printf("\n");
    }
}

void printarray2(int pa[][2][3]){
    for (int i = 0; i < z; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < x; k++){
                printf("%d ", pa[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}


int main(){

    int arr[y][x] = {
        {1, 2, 3},
        {5, 6, 7}
    };

    int arr2[z][y][x] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // printarray(arr); // 배열의 주소를 넘겨줌 ( = &arr[0] )
    printarray2(arr2);
    printarray3(arr);

    return 0;
}