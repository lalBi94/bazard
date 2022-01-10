#include <stdio.h>
#include <stdlib.h>
#include "armageddon.h"

int main(){
    form myForm = addForm(); 
    int x = 5;

    displayForm(myForm);
    insertLast(myForm, x);
    displayForm(myForm);
    return 0;
}