/*Challenge 2 : Voyelle ou Non
Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.*/


#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractère: ");
    scanf("%c", &caractere);

    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            printf("Ce caractère  est une voyelle.\n", caractere);
            break;
        default:
            printf("Ce caractère  n'est pas une voyelle.\n", caractere);
    }

    return 0;
}