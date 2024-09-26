/*Challenge 9 : Vérification d'Alphabet
Écrivez un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non. Et s'il l'est,
dire en plus s’il est une minuscule ou une majuscule.*/

#include<stdio.h>
int main(){

     char carctr;
     

    printf("Entrez un caractere : ");
    scanf("%c", &carctr);

    if ((carctr >='a' && carctr<= 'z') || (carctr >='A' && carctr<= 'Z'))
    {
        if (carctr >= 65 && carctr <= 90) {
        printf("Le caractere '%c' est une lettre majuscule.\n", carctr);
    } else {
        printf("Le caractere '%c' n'est pas majuscule.\n", carctr);
    }
    }

    else if("taper un caracter");

    return 0;

}