#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
#include "biblio_fonction_preparation.h"
#include "fonction_preparation.c"
#include "time.h"
#include "structures.h"
#include "affichage.c"

#define TAILLE_PLATEAU_DE_JEU 32


int main()
{

    /*int choixDuMenu = menuPrincipal();
    char nomDesJoueurs[4][15];
    int nombreDeJoueurs=0;
    switch (choixDuMenu)
    {
        case 1 : nombreDeJoueurs = saisirJoueursAvecplateauDeJeu(nomDesJoueurs);
    }
    menuTourDeJeu(nomDesJoueurs);

    t_case plateauDeJeu[LenghplateauDeJeu];
    for (int i=0;i<LenghplateauDeJeu ;i++ ){
        plateauDeJeu[i].numeroCase = i;
        plateauDeJeu[i].pion = 3+i;
    }
    /*
    //saisie et affichage du nombre de joueurs et de leur nom
    char nomDesJoueurs[4][15];

    int nombreDeJoueurs = saisirJoueursAvecplateauDeJeu(nomDesJoueurs);
    printf("\nnombre de joueurs :  %d", nombreDeJoueurs);

    for(int i=0; i<nombreDeJoueurs; i++)
    {
        printf("\nJoueur %d: %s",i+1, nomDesJoueurs[i]);
    }
    */



    //menu_Principal();

    //définition de mon plateauDeJeu
    char plateauDeJeu[TAILLE_PLATEAU_DE_JEU];
    for (int i = 0; i<TAILLE_PLATEAU_DE_JEU; i++)
        {
            plateauDeJeu[i] = 'A'+ i;
        }
    affichage_plateauDeJeu(plateauDeJeu);

    int de=0, de2=0, de3=0, de4=0;
    int *ptde  =&de;
    int *ptde2 =&de2;
    int *ptde3 =&de3;
    int *ptde4 =&de4;
    int valeurDe=0;

    valeurDe = tirerAuSort(&de, &de2, &de3, &de4);


    plateauDeJeu[valeurDe] = 4;
    system("cls");
    affichage_plateauDeJeu(plateauDeJeu);
    printf("\rResultat du premier lancer : De1 = %d  De2 = %d",*ptde,*ptde2);

    if((de3 + de4)!=0)
        {
            printf("\rResultat du second lancer : De3 = %d  De4 = %d",*ptde3,*ptde4);
        }

    printf("\n\nVous vous etes deplace de %d cases\n", valeurDe+1);





    return 0;
}




