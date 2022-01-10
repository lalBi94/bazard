#include <stdio.h>
#include <stdlib.h>
#include "armageddon.h"

form addForm(void){
    return NULL;
}

Bool isForm(form fo){
    if(fo == NULL) return true;

    return false;
}

int sizeForm(form fo){
    int count = 0;
    
    if(!isForm(fo))
        for(; fo != NULL;){
            ++count;
            fo = fo -> next;
        }
        
        return count;
}

void displayForm(form fo){

    if(isForm(fo))
        printf("Formulaire vide bg\n");

    if(!isForm(fo))
        for(; fo != NULL;){
            printf("[%d] ", fo -> value);
            fo = fo -> next;
        }
    printf("\n");
}

form insertLast(form fo, int x){
    formulaire *values;
    values = malloc(sizeof(*values));
    if(values == NULL) exit(EXIT_FAILURE);

    values -> value = x;
    values -> next = NULL;

    if(isForm(fo))
        return values;
}