#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "_libPrototype.h"

//MAIN

int main (){
    int choix = 0;
    int k;
    liste = NULL;
    
    displayMenu();
    printf("Votre choix ? : ");
    fflush(stdin);
    scanf("%d", &choix);
    
    while(choix != 0){
        switch(choix){
            case 1: nombreEnfant(); break; //
            case 2: fonctionPourK(); break; //
            case 3: creationGosse(); break; //
            case 4: displayList(); break; //
            case 5: ronde = circu(); break; //
            case 6: if(ronde == 1){play();} else{printf("Rendre la liste circulaire avant\n");} break;//
            default: printf("error\n"); break;//
        }

        displayMenu(); 
        printf("\nChoix ? ");
        fflush(stdin);
        scanf("%d", &choix);
    }

    printf("Salut");
}