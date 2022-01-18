#include <stdio.h>
#include <stdlib.h>

int main(){
    int maxSize = 0, j = 0;
    printf("Taille du tableau ? : "); scanf("%d", &maxSize);
    printf("Valeurs ? : ");
    int S[maxSize];

    while(j < maxSize){
        scanf("%d", &S[j]);
        j++;
    }

    int i;

    for(i = 0; S[i] != '\0'; i++){
        if(S[i] == S[i-1] && S[i] != S[i+1]){
            printf("%d / ", S[i]);
        }
    }

    return 0;
}