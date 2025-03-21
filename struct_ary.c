#include <stdio.h>

struct address {
    char name[20];
    int age;
    char telnum[20];
    char address[100];
};

void print_addrs(struct address* addr_list){
    int count = 3;
    for (int i = 0; i < count; i++) {
        printf("address %d\n", i+1);
        printf("name : %s\n", (addr_list+i)->name);
        printf("age : %d\n", (addr_list+i)->age);
        printf("telnum : %s\n", (addr_list+i)->telnum);
        printf("address : %s\n", (addr_list+i)->address);
        printf("\n");
    }
    
}

int main() {
    struct address addrs[] = {
        {"Choi Tae Young", 25, "010-1234-5678", "Seoul, Mapo"},
        {"Kim Tae Young", 24, "010-5678-1234", "Seoul, Seocho"},
        {"Park Tae Young", 23, "010-7890-1111", "Seoul, Gangnam"}
    };

    print_addrs(addrs);
    return 0;
}