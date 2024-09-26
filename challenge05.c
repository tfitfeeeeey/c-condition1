/* Challenge 5 : Conversion d'Année
Écrivez un programme C piloté par menu pour convertir une année donnée en :
  
Mois
Jours
Heures
Minutes
Secondes
*/

#include <stdio.h>

int main() {
    int choix;

    // Affichage du menu
    printf("Conversion d'une annee en :\n");
    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3. Heures\n");
    printf("4. Minutes\n");
    printf("5. Secondes\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    // Utilisation du switch-case pour effectuer les conversions
    switch (choix) {
        case 1:
            printf("12");
            break;

        case 2:
            printf("365");
            break;

        case 3:
            printf("8,760 heures");
            break;

        case 4:
            printf("525,600 minutes");
            break;

        case 5:
            printf("31,536,000 secondes ");
            break;

        default:
            printf("entre 1 et 5.\n");
    }

    return 0;
}

