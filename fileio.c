#include <stdio.h>


void fileOpen(){
    FILE *fp;
    fp = fopen("file.txt", "r");
    if(fp == NULL){
        printf("Error opening file\n");
        return;
    }
    printf("File opened successfully\n");
    fclose(fp);
}

void fileRead(){
    FILE *fp;
    int ch;
    fp = fopen("file.txt", "r");
    if(fp == NULL){
        printf("Error opening file\n");
        return;
    }

    while (1) {
        ch = fgetc(fp);
        if(ch == EOF){
            break;
        }
        putchar(ch);
    }

    fclose(fp);
}

void fileBinaryOpen(){
    FILE *fp;
    int ch;
    fp = fopen("file.txt", "rb");
    if(fp == NULL){
        printf("Error opening file\n");
        return;
    }

    while (1) {
        ch = fgetc(fp);
        if(ch == EOF){
            break;
        }
        printf("%d, ", ch);
    }
    fclose(fp);
    
};

void fileWrite(){
    FILE *fp;
    fp = fopen("file.txt", "w");
    char str[] = "Hello World";
    if(fp == NULL){
        printf("Error opening file\n");
        return;
    }
    
    int i = 0;
    while(str[i] != '\0'){
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
    fclose(fp);
}

int main(){
    // fileOpen();
    // fileRead();
    // fileWrite();
    fileBinaryOpen();
    return 0;
}