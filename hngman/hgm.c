#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct{
    char p1[10];
    char p2[10];
} player;

int nb_tiret(char* tiret){
    int count = 0; int i= 0;
    while(*(tiret + i) != '\0'){
        i++;
        count++;
    }

    return i;
}

void hangman(char* secret, char* tiret, int i, int size){ 

    int nbTiret = nb_tiret(tiret); char answer1;
    i = 0;
    player p; 
    strcpy(p.p1, "Bilal"); 
    strcpy(p.p2, "Tiphaine");

    while(nbTiret > 0){
        system("CLS");
        printf("\t\t\tNb de tiret = %d\n", nbTiret);

        printf("Hang Man : \n");
        printf("Player 1 ==> %s\nPlayer 2 ==> %s\n\n", p.p1, p.p2);
        printf("answer : %s\n", secret);
        printf("answer : %s\n\n\n", tiret);

        printf("Reponse de %s : ", p.p1); 
        scanf("%c", &answer1);

        while(nbTiret == nbTiret){
            if(answer1 == *(secret + i)){
                *(tiret + i) = *(secret + i);
                nbTiret--;
            }

            else{
                i++;
            }
        }
    }

    free(tiret);
    free(secret);
}

void tir_Count(char* secret, int size){

    printf("\t\t\tTir Count : [OK]\n");

    int i = 0; size = 0;
    char* tiret = malloc(sizeof(char) * i);

    if(tiret == NULL) return;

    while(*(secret + size) != '\0'){
        *(tiret + i) = '-';
        i++; size++;
    }

    hangman(secret, tiret, i, size);
    
}

int main(){
    int size = 0;
    char* secret = malloc(sizeof(char) * size);
    
    if(secret == NULL) return 0;

    printf("Choisir le mot secret : "); 
    scanf("%[^\n]", secret);
    system("CLS");

    tir_Count(secret, size);
    return 0;
}