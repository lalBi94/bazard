#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_libPrototype.h"

void creationGosse(){
    int x;
    int valeur;
    
    char prenom[12];
    struct gosse *creationGosse;
    
    if(N != 0){
        for(x=1; x <= N; x++){
            printf("Prenom du %d enfant ? : ", x);
            fflush(stdin);
            scanf("%s", prenom);
            creationGosse = malloc(sizeof(struct gosse));
            
            strcpy(creationGosse -> prenom, prenom);
            creationGosse -> suivant = liste;
            liste = creationGosse;
        }
    }

    else{
       printf("Commence par la premiere etape !\n");
    }
}