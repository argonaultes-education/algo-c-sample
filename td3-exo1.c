#include <stdio.h>


int test(int n) {
    int entiers[n];

    scanf("%d", &entiers[0]);

    printf("%d\n", entiers[0]);
}


int main() {
    // int entiers[10];
    // for (int compteur = 0 ; compteur < 10 ; compteur++) {
    //     entiers[compteur] = compteur;
    // }

    // for (int compteur = 0 ; compteur < 10 ; compteur++) {
    //     printf("%d ", entiers[compteur]);
    // }

    int nouvelle_taille;


    scanf("%d", &nouvelle_taille);

    test(nouvelle_taille);
}
