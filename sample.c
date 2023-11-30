#include <stdio.h>
#include <stdlib.h>

int main() {

    struct person {
        int age;
        char *name;
    };

    struct person test;

    test.age = 12;

    printf("%d\n", test.age);

}