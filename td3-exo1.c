#include <stdio.h>

int main() {
    int entiers[10];
    for (int compteur = 0 ; compteur < 10 ; compteur++) {
        entiers[compteur] = compteur;
    }

    for (int compteur = 0 ; compteur < 10 ; compteur++) {
        printf("%d ", entiers[compteur]);
    }
}
