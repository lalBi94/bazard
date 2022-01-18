#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_libPrototype.h"

//RENDRE CIRCULAIRE

int circu(){
    struct gosse *p;

    p=liste;
    
    while(p -> suivant != NULL){
        p=p->suivant;
    }

    p->suivant=liste;

    printf("CIRCU : OK\n");
    return 1;
}