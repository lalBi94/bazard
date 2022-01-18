#include <stdio.h>
#include "_ackermannlib.h"

int main(){
    int x, y;

    printf("Premiere valeur = ");
    scanf("%d", &x);
    printf("Deuxieme valeur = ");
    scanf("%d", &y);

    if(x > 3 && y > 3){
        printf("ca va bugger ici\n");
        return 0;
    }

    else{
        int stock = ackermann(x, y);
        printf("\nAckermann(%d, %d) est egal a  %d\n\n", x, y, stock);
        return 0;
    } 
}