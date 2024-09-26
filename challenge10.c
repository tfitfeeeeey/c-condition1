/*Challenge 10 : Formatage de la Date
Écrivez un programme C qui lit une date au format 15/09/2012 et l'affiche sous le format suivant : 15-Septembre-2012.*/

#include <stdio.h>

int main() {
    int jour, mois, annee;
    
    printf("Entrez la comme ca *jour/mois/annee:* ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    printf("%d", jour);

    switch (mois) {
        case 1:
            printf("/Janvier");
            break;
        case 2:
            printf("/Février");
            break;
        case 3:
            printf("/Mars");
            break;
        case 4:
            printf("/Avril");
            break;
        case 5:
            printf("/Mai");
            break;
        case 6:
            printf("/Juin");
            break;
        case 7:
            printf("/Juillet");
            break;
        case 8:
            printf("/Août");
            break;
        case 9:
            printf("/Septembre");
            break;
        case 10:
            printf("/Octobre");
            break;
        case 11:
            printf("/Novembre");
            break;
        case 12:
            printf("Décembre");
            break;
        default:
            printf("????");
            return 1;  
    }

    printf(  "l'affiche sous le format suivant" "/%d\n", annee);

    return 0;
}
