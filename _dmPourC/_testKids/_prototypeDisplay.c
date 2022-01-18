#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_libPrototype.h"

void afficherListe(struct gosse *liste)
{
    if (liste == NULL)
    {
        printf("ahaha ca marche ap");
        return 0;
    }

    struct gosse *actuel = liste -> prenom;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel -> prenom);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}