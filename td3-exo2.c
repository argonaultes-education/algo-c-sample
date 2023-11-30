#include <stdio.h>
#include <stdbool.h>

int main() {
    float reels[10];
    float recherche;
    int compteur;
    bool trouve = false;

    printf("Saisi des 10 réels du tableau\n");
    for (compteur = 0 ; compteur < 10 ; compteur++) {
        scanf("%f", &reels[compteur]);
    }
    printf("Saisi du réel à chercher : ");
    scanf("%f", &recherche);
    for (compteur = 0 ; compteur < 10 ; compteur++) {
        if (recherche == reels[compteur]) {
            trouve = true;
            break;
        }
    }
    if (trouve) {
        printf("Félicitations\n");
    } else {
        printf("Nouvelle tentative\n");
    }
}