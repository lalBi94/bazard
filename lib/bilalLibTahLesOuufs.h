#ifndef __BILAL_LIB_TAH_LES_OUFS__
#define __BILAL_LIB_TAH_LES_OUFS__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void crypt_ofCesar(char* phrase, int size);
void sntnce_Entry();
void display_useMalloc(char* stnce, int size);
void star_upStairs(int Height);
void star_downStairs(int Height);
void star_Tree();
char int_toChar(int toConverse);
int char_toInt(char toConverse);
void square_Mix();

void crypt_ofCesar(char* phrase, int size){ //Cryptage de Cesar
    int code = 0; size = 0;
    
    while(*(phrase + size) != '\0'){
        code = (int) *(phrase + size);
        if(code >= 97 && code <= 122){
            code = code - 97;
            code = code + 3;
            code = code % 26;
            code = code + 97;
            
            *(phrase + size) = (char) code;
            printf("%c", *(phrase + size));
            size++;
        }

        else{
            printf("%c", *(phrase + size));
            size++;
        }
    }
}

void sntnce_Entry(){ //Remplir un tab[] d'argument au quotien size (=i)
    int size = 0;
    char* phrase = malloc(size * sizeof(char));
    scanf("%[^\n]", phrase);
}

void display_useMalloc(char* stnce, int size){ //Afficher l'ensemble des cases d'un tab[] avec comme quotien size (=i)
    size = 0;

    while(*(stnce + size) != '\0'){
        printf("%c", *(stnce + i));
    size++;}
}

void star_upStairs(int Height){ //Prend en parametre une hauteur
    int x, y;

   for (x = 0; x < Height; ++x) {    
      for (y = 0; y < x; ++y) {    
         printf("*");      
      }

      printf("*\n");

      for (y = 0; y < 1 * Height-1 * y-1 ; ++y) {
      }
   }
}

void star_downStairs(int Height){ //Prend en parametre une hauteur 
    int x, y, z;

   for (x = 0; x < Height; ++x) {
      for(z = Height - x; z > 0; z--){
         printf(" ");
      }
         for (y = 0; y < x + 1; ++y) {
            printf("*");
         }

         printf(" \n");
   }
}

void star_Tree(){ //Ne prend rien en parametre lol
    int x, y, z, Height, Height2;
    printf("Hauteur ?\n");
    scanf("%d", &Height);
    Height2 = Height - 1;

    for(x = 0; x < Height; x++){
        for(y = Height - x - 1; y > 0; y--){
            printf(" ");
        }

        for(z = x * 2 + 1; z > 0; z--){
            printf("*");
        }

        printf("\n");
    }

    for(x = 0; x < Height2; x++){
        printf(" "); 
    }  
    printf("*\n");
}

char int_toChar(int toConverse){ //Prend en parametre un entier a conv. en carac.
    return toConverse + '0';
}

int char_toInt(char toConverse){ //Prend en parametre un carac. a conv. en entier
    int converse = (int) toConverse;
    return converse;
}

void square_Mix(){
    int n, i, j, k, iv2 = 0;
    scanf("%d", &n); //n pour la hauteur

    iv2 = n;

    for (i = 0; i < n; ++i) {    
        for(j = 0; j < i; ++j){    
            printf("+");      
        }

        printf("+");

        for(k = iv2-1; k > 0; k--){
            printf("*");
        }

        iv2--;
        printf("\n");
    }

    return 0;
}

#endif