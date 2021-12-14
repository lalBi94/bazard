#include <stdio.h>
#include <stdlib.h>

void cesar(char* phrase, int size){
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

int main(){
    int size = 0;
    char* phrase = malloc(size * sizeof(char));
    scanf("%[^\n]", phrase);
    cesar(phrase, size);

    return 0;
}