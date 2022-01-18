#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_libPrototype.h"

void play(){
    printf("Demarrage du jeu :\n");

    struct gosse *temporaire;
    temporaire = liste;
    struct gosse *p_temporaire;
    p_temporaire = liste;
    int i = 0;
    
    while(liste -> suivant != liste){
        for(i = 0; i < K-1; i++){
            p_temporaire = temporaire;
            temporaire = temporaire -> suivant;
        }

        p_temporaire = temporaire -> suivant;

        if(temporaire == liste){
            liste = temporaire -> suivant;
            printf("Sorti de %s\n", temporaire -> prenom);
            temporaire = p_temporaire -> suivant;
        }

        printf("Sorti de %s\n", temporaire -> prenom);
        free(temporaire);
        liste = NULL;
    }
}