#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;
    
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < 5; i++) {
        ptr[i] = i;
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;


}