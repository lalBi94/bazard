#include <stdio.h>
#include "_complxLib.h"

stockageComplx ajtComplx(){
    double pr, pi;
    stockageComplx stockageComplx;
    
    printf("Valeur du reel ?");
    scanf("%d", &pr);
    printf("Valeur de l'imaginaire ?");
    scanf("%d", &pi);
    
    stockageComplx.reel = pr;
    stockageComplx.imaginaire = pi;

    return stockageComplx;
}