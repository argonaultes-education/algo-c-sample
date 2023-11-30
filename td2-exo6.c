#include <stdio.h>

int main()
{
    int compteur, base, exp, abs_exp;
    double resultat = 1.0;

    scanf("%d", &base);
    scanf("%d", &exp);
    if (exp < 0) {
        abs_exp = -exp;
    } else {
        abs_exp = exp;
    }
    for (compteur = 0 ; compteur < abs_exp ; compteur++) {
        resultat = resultat * base;
    }
    if (exp < 0) {
        resultat = 1 / resultat;
    }
    printf("resultat: %.20f", resultat);
}