
#include <stdio.h>

#include <stdlib.h>

/******************************Exercice 3*****************************/
typedef struct amis{
    char nom[255];
    char tel[255];
}amis;

amis annuaire[5];
int cpt=0; //obligatoire pour connaitre combien d'amis dans l'annuaire


//-----------------definitions-------------------------
void insertami(const amis *ami);
void menu();
amis* saisirami();
void afficheramis();

//---------------implementations----------------------------
void insertami(const amis *ami) {

    annuaire[cpt]=*ami;
    cpt++;
}

void menu() {
    int choix=0;
    printf("1-créer une entrée\n");
    printf("2-afficher les entrées\n");
    printf("3-sortir\n");
    scanf("%d",&choix);
    switch (choix)
    {
        case 1:
            insertami(saisirami());
            break;
        case 2:
            afficheramis();
            break;
        case 3:
            exit(0);

    }
    menu();
}

amis* saisirami() {
    amis ami; //variable pointeur locale
    printf("Veuillez saisir le nom");
    scanf("%s",ami.nom);
    printf("Veuillez saisir le téléphone");
    scanf("%s",ami.tel);
    return &ami;
}

void afficheramis() {
    for(int i=0;i<cpt;i++)
    {
        printf("%s %s\n",annuaire[i].nom,annuaire[i].tel);
    }



}

int main(){
        menu();
        return 0;
}


