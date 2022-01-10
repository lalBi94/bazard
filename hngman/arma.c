#include <stdio.h>
#include <stdlib.h>

char mot(int i){
    char* secret = malloc(sizeof(char) * i);
    scanf("%s", secret);
    printf("%s", secret);
    return secret;
}

int main(){
    int i = 0;
    mot(i);
    return 0;
}