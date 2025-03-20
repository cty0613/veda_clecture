#include <stdio.h>

int main() {
    printf("%p\n", "apple");  // 58F8
    printf("%p\n", "apple"+1); // 58F9
    printf("%c\n", *"apple");  // "a"
    printf("%c\n", *("apple"+1));  // "p"

    printf("----------------\n");
    char *dessert = "strawberry";
    printf("%s\n", dessert);  // strawberry
    printf("%c\n", *dessert);  // s
    printf("%c\n", *(dessert+1));  // t
    printf("%p\n", dessert);
    printf("%p\n", dessert+1);
    return 0;
}