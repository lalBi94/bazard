#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_libPrototype.h"

//AFFICHAGE

void displayList(){
    printf("Prenom des enfants :\n");

    struct gosse *temporaire;
    struct gosse *devant;

    temporaire = liste;
    devant = liste;

    int i = 2;
    
    if(temporaire == NULL){
        printf("Liste vide\n");
    }

    else{
        printf("Le 1er gosse est : %s\n", temporaire -> prenom);
        temporaire = temporaire -> suivant;

        while(temporaire != NULL){
            printf("Le %s gosse est : %s\n", i, temporaire -> prenom);
            i++;
            temporaire = temporaire -> suivant;
        };
    }
    
    printf("\n");
}