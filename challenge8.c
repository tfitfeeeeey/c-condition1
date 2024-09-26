/*Challenge 8 : Mention Obtenue
Nous désirons afficher la mention obtenue par un élève en fonction de la moyenne de ses notes.
S’il a une moyenne strictement inférieure à 10, il est recalé. S’il a une moyenne entre 10 (inclus) et 12, il obtient la mention passable.
S’il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien.
S’il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien.
S’il a une moyenne supérieure à 16 (inclus) il obtient la mention très bien.
Écrire les instructions nécessaires.*/


#include<stdio.h>


int main()
{
    float note;
    printf("donner votre note");
    scanf ("%f", &note);
     if (note == 10){
        printf("il est recalé");
     } else if (note >= 10 && note<=12){
        printf(" il obtient la mention passable");
     }
     else if (note >= 12 && note<=14){
        printf("il obtient la mention assez bien");
     }
     
     else if(note >= 14 && note<=16){
        printf("il obtient la mention bien");
     }
     else if(note >= 16 && note<=20){
        printf("il obtient la mention tres bien");
     }

    return 0;
}