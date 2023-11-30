#include <stdio.h>

int main()
{
    float a,b;
    char op;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf(" %c", &op);
    
    if (op == '+') {
        printf("%f\n", a + b);
    } else {
        if (op == '*') {
            printf("%f\n", a * b);
        } else {
            printf("erreur\n");
        }
    }
}
