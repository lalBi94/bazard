#include <stdio.h>
#include "_ackermannlib.h"

int ackermann(int x, int y){
    int resultat;

    if(x == 0){
        resultat = y + 1;
        return resultat;
    }

    else if(y == 0){
        resultat = ackermann(x - 1, 1);
        return resultat;
    }

    else{
        resultat = ackermann(x - 1, ackermann(x, y - 1));
        return resultat;
    }
}