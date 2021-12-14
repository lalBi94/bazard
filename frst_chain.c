#include <stdio.h>
#include <stdlib.h>

void contains(char* str1, char* str2){
    int i = 0;
    int xwsh = 0 , xsalut = 0;
    
    int* wsh = malloc(sizeof(int) * xwsh);
    int* salut = malloc(sizeof(int) * xsalut);

    while(*(str1 + i) != '0'){
        *(wsh + xwsh) = (int) *(str1 + i);
        printf("[%d], ", *(wsh + xwsh));
        xwsh++;
        i++;
    } i = 0;

    printf("\n");
    printf("\n");

    while(*(str2 + i) != '0'){
        *(salut + xsalut) = (int) *(str2 + i);
        printf("[%d], ", *(salut + xsalut));
        xsalut++;
        i++;
    }

    free(wsh);
    free(str1);
    free(str2);
}