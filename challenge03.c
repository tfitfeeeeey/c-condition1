/*Challenge 3 : Somme de Deux Valeurs
Écrivez un programme C pour calculer la somme de deux valeurs entières données.
Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.*/

#include <stdio.h>

int main() {
    int nbr1, nbr2, somme;

    printf("Entrez la premiere nbr: ");
    scanf("%d", &nbr1);

    printf("Entrez la deuxieme nbr: ");
    scanf("%d", &nbr2);

    somme = nbr1 + nbr2;

    if (nbr1 == nbr2) {

        somme = 3 * somme;
    }

    printf("La somme: %d\n", somme);
    return 0;
}
