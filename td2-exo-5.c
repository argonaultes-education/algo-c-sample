#include <stdio.h>

int main()
{
    int nb_jours;

    scanf("%d", &nb_jours);

    switch(nb_jours) {
        case 31:
            printf("Janvier\n");
            break;
        case 30:
            printf("Avril\n");
            break;
        case 28: case 29:
            printf("Février\n");
            break;
        default:
            printf("erreur\n");
            break;
    }

}