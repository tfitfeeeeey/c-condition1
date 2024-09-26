/*Challenge 11 : Jour de la Semaine
Écrivez un programme C qui affiche d'une manière aléatoire un des jours de la semaine.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int jour;

    srand(time(0));
    jour = rand() % 7;

    switch (jour) {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        case 4:
            printf("Jeudi\n");
            break;
        case 5:
            printf("Vendredi\n");
            break;
        case 6:
            printf("Samedi\n");
            break;
        case 7:
            printf("Dimanche\n");
            break;
        default:
            printf("Erreur.\n");
    }

    return 0;
}
