#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void hangman(char* secret, char* tiret2, int i){ //PROBLEME MINEUR DE CALIBRAGE AVEC LES TIRETS
    printf("\t\tPassage sur hangman()\n");
    char* tiret = malloc(sizeof(char) * i); int test = 0;

    printf("Nombre de tirets : %d\n", i);

    for(; i > 0-1;  i--){
        printf("i = %d\n", i);
        *(tiret2 + i) = '-';
    }

    printf("\n%s\n\n\n\n", tiret2);

    free(tiret);
    free(secret);
    free(tiret2);
}

void tir_Count(char* secret, int size){

    printf("\t\tPassage sur tircount()\n");

    char* tiret2 = secret;

    int nb_tir = 0, count = 0;

    while(*(secret + size) != '\0'){
        size++;
        count++;
    }

    nb_tir = count - 1;
    printf("nbtir = %d\nValeur de tiret2 = %s\nValeur de secret = %s\n\n\n", nb_tir, tiret2, secret); 

    hangman(secret, tiret2, nb_tir);
}

int main(){
    int size = 0, p1 = 0, p2 = 0;
    char* secret = malloc(sizeof(char) * size);
    char player1[10] = {'B', 'i', 'l', 'a', 'l'}; 
    char player2[10] = {'T', 'i', 'p', 'h', 'a', 'i', 'n', 'e'};

    printf("Choisir le mot secret : "); 
    scanf("%[^\n]", secret);
    system("CLS");

    tir_Count(secret, size);
    return 0;
}