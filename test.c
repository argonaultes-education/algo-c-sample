#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_int = malloc(1);
    *ptr_int = 23;
    ptr_int[1] = 13;
    printf("%d\n", ptr_int[1]);
    int other = 43;
    printf("%d\n", ptr_int[1]);
    printf("ptr_int: %p, ptr_int[1]: %p, other: %p", ptr_int, &ptr_int[1], &other);
}