#include <stdio.h>
#include <stdlib.h>

void cesar(char* phrase, int i){
    i = 0; char salut;
    while(*(phrase + i) != '\0'){
        salut = *(phrase + i) + 3;
        printf("%c", salut);
        i++;
    }
}

int main(){
    int size = 0;
    char* phrase = malloc(size * sizeof(char));
    scanf("%[^\n]", phrase);
    cesar(phrase, size);

    return 0;
}