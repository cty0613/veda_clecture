#include <stdio.h>

int main(){

    FILE *ifp, *ofp;
    int kor, eng, math, total;
    char name[10];
    double avg;
    int res;

    ifp = fopen("file2.txt", "r"); // 읽을 파일
    ofp = fopen("file_out.txt", "w"); // 쓸 파일

    if(ifp == NULL || ofp == NULL){ // 파일 개방 여부 확인
        printf("Error while handling file\n");
        return 1;
    }

    while(1){
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
        if(res == EOF){
            break;
        }
        total = kor + eng + math;
        avg = total / 3.0;
        printf("%d %d %d %d %.2f\n", kor, eng, math, total, avg);
        fprintf(ofp, "%d %d %d %d %.2f\n", kor, eng, math, total, avg);
    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}