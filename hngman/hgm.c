#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int nb_tiret(char* tiret){
    int count = 0; int i= 0;
    while(*(tiret + i) != '\0'){
        i++;
        count++;
    }

    return i;
}

void hangman(char* secret, char* tiret, int i, int size, char* p1, char* p2){ 

    char rep1 = '0', rep2 = '0'; int nbTiret = nb_tiret(tiret);
    printf("\t\t\tNb de tiret = %d\n", nbTiret);

    printf("hangman : \n");
    printf("%s\n", secret);
    printf("%s\n\n\n", tiret);

    printf("[Au tour de %s] > ", p1); scanf("%s", &rep1);
    
    while(nbTiret != 0){
        while(*(secret + i) != '\0'){
            if(rep1 == *(secret) + i){
                printf("premier lettre trouver !");
                nbTiret--;
            }
            
            else{
                printf("ntm\n");
                return 0;
            }
        }
        nbTiret--;
    }

    free(tiret);
    free(secret);
}

void tir_Count(char* secret, int size, char* p1, char* p2){

    printf("\t\t\tTir Count : [OK]\n");

    int i = 0; size = 0;
    char* tiret = malloc(sizeof(char) * i);

    if(*(tiret) == NULL){
        printf("Erreur MALLOC");
        exit(1);
    }

    while(*(secret + size) != '\0'){
        *(tiret + i) = '-';
        i++; size++;
    }

    hangman(secret, tiret, i, size, p1, p2);
    
}

int main(){
    int size = 0;
    char* secret = malloc(sizeof(char) * size);
    
    if(*(secret) == NULL){
        printf("Erreur MALLOC");
        exit(1);
    }

    char* p1[10] = {'B', 'i', 'l', 'a', 'l'}; 
    char* p2[10] = {'T', 'i', 'p', 'h', 'a', 'i', 'n', 'e'};

    printf("Choisir le mot secret : "); 
    scanf("%[^\n]", secret);
    system("CLS");

    tir_Count(secret, size, p1, p2);
    return 0;
}