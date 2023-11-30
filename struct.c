#include <stdio.h>
#include <stdbool.h>

struct Joueur {
    int nb_essais;
    char *surnom;
    bool gameover;
};


int main() {
    struct Joueur john;

    john.nb_essais = 12;

    struct Joueur joueurs[10];

    joueurs[2].nb_essais = 10;
    joueurs[2].gameover = true;

    printf("%d", joueurs[2].gameover);
}