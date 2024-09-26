/*Challenge 6 : Positif, Négatif ou Nul
Écrivez un programme pour vérifier si le nombre donné est positif,négatif ou nul.
Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro, 
alors le nombre est positif. 
Si les deux conditions sont fausses, le nombre est égal à zéro. */


#include <stdio.h>

int main()
{
  int nbr ;
    printf("taper un nombre SVP");
    scanf("%d", &nbr);

     if (nbr > 0 ) {
        printf("Le nombre %d est positif.\n", nbr);
         
     }
     else if (nbr < 0 ) {
        printf("Le nombre %d est negatif.\n", nbr);
        
    } else {
        printf("Le nombre est nul.");
    }

    return 0;
}