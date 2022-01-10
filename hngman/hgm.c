#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void clear();
int nb_tiret(char* tiret);
void hangman(char* secret, char* tiret, int i, int size);
void tir_Count(char* secret, int size);
char lastChar(char faux);
int main();

typedef struct{
    char p1[10]; 
} player;

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

char lastChar(char faux){
    return faux;
}

void clear(){
    system("CLS");
}

int nb_tiret(char* tiret){
    int count = 0; int i= 0;
    while(*(tiret + i) != '\0'){
        i++;
        count++;
    }

    return i;
}

void hangman(char* secret, char* tiret, int i, int size){ 

    int nbTiret = nb_tiret(tiret); int count = 10, j = 0, reset = 10; i = 0;
    char answer; player p; strcpy(p.p1, "Bilal"); 
    char* lastCara = malloc(sizeof(char) * 11);

    while(reset > 0){
        *(lastCara + i) = NULL;
        i++;
        reset--;
    }

    i = 0;

    while(nbTiret > 0){
        clear();
        printf("\t\t\t\tHangMan Game : \n");
        printf("Player ==> %s\n\n", p.p1);
        printf("%d lettres a trouver !\n", nbTiret);
        printf("answer : %s\n", tiret);
        printf("Plus que : %d tentatives restantes.\n", count+1);
        printf("Les derniers lettre utilise : -%s\n\n", lastCara);

        printf("Reponse de %s : ", p.p1); 
        scanf("%c", &answer);

        if(answer == *(secret + i)){
            *(tiret + i) = *(secret + i);
            *(lastCara + j) = answer;
            j++;
            nbTiret--;
            i++;
        }

        else{
            if(count < 0){
                break;
            }

            else{
                count--;
                *(lastCara + j) = answer;
                j++;
            }
        }
    }

    if(nbTiret == 0){
        printf("Bravo ! le mot etait bien : %s\n\n", secret);
        free(tiret);
        free(secret);
        free(lastCara);
    }

    else if(nbTiret != 0){
        printf("Rip c'etait pas ca bouffon, t'as commis %d fautes bahahaha\n\n", count+1+10);
        free(tiret);
        free(secret);
        free(lastCara);
        return;
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