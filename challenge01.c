/*Challenge 1 : Paire ou Impaire
Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.*/


#include <stdio.h>

int main()
{
  int nbr ;
    printf("taper un nombre SVP");
    scanf("%d", &nbr);

     if (nbr % 2 == 0) {
        printf("Le nombre %d est pair.\n", nbr);
    } else if (nbr % 2 == 1) {
        printf("Le nombre est impair.");
    }
}


