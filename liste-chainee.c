#include <stdlib.h>
#include <stdio.h>

struct maillonList {
    int valeur;
    struct maillonList *suivant;
    struct maillonList *precedent;
};

struct maillonList *ptr_list = NULL;
struct maillonList *ptr_tmp = NULL;

int main() { //DEBUT

    ptr_list = malloc(sizeof(struct maillonList)); //NOUVEAU

    ptr_list->valeur = 10; // (*ptr_list).valeur <-- 10
    ptr_list->suivant = NULL;
    ptr_list->precedent = NULL;

    printf("%d\n", ptr_list->valeur); //ECRIRE((*ptr_list).valeur)

    printf("adresse du premier maillon: %p\n", ptr_list);
    printf("adresse de la valeur: %p\n", &(ptr_list->valeur));
    printf("adresse du pointeur sur le premier maillon: %p\n", &ptr_list);

    // AJOUTERFIN
    ptr_tmp = ptr_list;
    while (ptr_tmp->suivant != NULL) {
        ptr_tmp = ptr_tmp->suivant;
    }
    ptr_tmp->suivant = malloc(sizeof(struct maillonList));
    ptr_tmp->suivant->valeur = 23;


    ptr_tmp = ptr_list; //revenir au debut de la liste
    printf("%d %p\n", ptr_tmp->valeur, ptr_tmp);
    while (ptr_tmp->suivant != NULL) {
        ptr_tmp = ptr_tmp->suivant;
        printf("%d %p\n", ptr_tmp->valeur, ptr_tmp);
    }

} //FIN