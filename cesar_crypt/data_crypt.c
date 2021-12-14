#include <stdio.h>
#include <stdio.h>
 
void display(char* setence, int size){
    printf("%c", *(setence + size));
}
 
 
void crypt(char* setence, int size){
    while(*(setence + size) != '\0'){
        *(setence + size) = *(setence + size) - 5;
        display(setence, size);
        size++;
    }
}
 
int main(){
    int size = 0;
    char* setence = malloc(size * sizeof(char));
    scanf("%[^\n]", setence);
    printf("au debut : %s\n", setence);
 
    crypt(setence, size);
 
    return 0;
}