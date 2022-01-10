#ifndef __ARMAGEDDON__H__
#define __ARMAGEDDON__H__

typedef enum{
    false, 
    true
}Bool;

typedef struct formulaire{
    int value;
    struct formulaire *next; 
} formulaire, *form;

form addForm();
Bool isForm(form fo);
int sizeForm(form fo);
void displayForm(form fo);
form insertLast(form fo, int x);

#endif