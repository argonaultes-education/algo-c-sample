#include <stdlib.h>
#include <stdio.h>

struct Jeu {
    float prix;
    char *nom;
};

int main() {

    struct Jeu *csGo = NULL;

    csGo = malloc(sizeof(struct Jeu)); //NOUVEAU

    csGo->prix = 1.237141f; // (*csGo).prix
    csGo->nom = "Counter Strike 2 source version 3";

    printf("%s %.2f €\n", csGo->nom, csGo->prix);

}