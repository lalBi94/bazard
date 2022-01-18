#ifndef __GOSSE__
#define __GOSSE__

/*---------[FINI]------------*/
void nombreEnfant(); //POUR N       **FINITO**
void fonctionPourK(); //POUR K            **FINITO**
void creationGosse(); //POUR CREER UN ENFANT          **FINITO**
int circu(); //POUR RENDRE CIRCULAIRE LA LISTE        **FINITO**
void displayList(); //AFFICHER LA LISTE         **FINITO**
void play(); //POUR START LA PARTIE             **FINITO**
int main(); //MAIN             **FINITO**
void displayMenu(); //AFFICHER LE MENU DE SELECT             **FINITO**
/*---------[FINI]------------*/

/*---------[NON FINI]------------*/
/*---------[NON FINI]------------*/

int N, K, ronde;

struct gosse{char prenom[100]; struct gosse *suivant;};
struct gosse *liste;
struct gosse *p;
struct gosse *fin;

#endif