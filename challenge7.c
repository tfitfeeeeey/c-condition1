/*Challenge 7 : Alphabet Majuscule
Écrivez un programme pour vérifier si le caractère donné est un alphabet majuscule ou non en utilisant l'instruction conditionnelle if-else.
Les lettres majuscules vont de 'A' à 'Z'. Les valeurs ASCII de 'A' et 'Z' sont respectivement 65 et .
Si la valeur ASCII d'un caractère est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.*/


#include <stdio.h>

int main() {
    char carctr;


    printf("Entrez un caractere : ");
    scanf("%c", &carctr);


    if (carctr >= 65 && carctr <= 90) {
        printf("Le caractere '%c' est une lettre majuscule.\n", carctr);
    } else {
        printf("Le caractere '%c' n'est pas majuscule.\n", carctr);
    }

    return 0;
    }