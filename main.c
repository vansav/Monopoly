#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
#include "biblio_fonction_préparation.h"
#include "time.h"
#include "structures.h"

#define LENTABLEAU 32


int main()
{

    /*int choixDuMenu = menu_Principal();
    char NOMSDESJOUEURS[4][15];
    int nombreDeJoueur=0;
    switch (choixDuMenu)
    {
        case 1 : nombreDeJoueur = saisirJoueursAvecTableau(NOMSDESJOUEURS);
    }
    menuTourDeJeu(NOMSDESJOUEURS);

    t_case TABLEAU[Lenghtableau];
    for (int i=0;i<Lenghtableau ;i++ ){
        TABLEAU[i].numeroCase = i;
        TABLEAU[i].pion = 3+i;
    }
    /*
    //saisie et affichage du nombre de joueur et de leur noms
    char NOMSDESJOUEURS[4][15];

    int nombreDeJoueur = saisirJoueursAvecTableau(NOMSDESJOUEURS);
    printf("\nnombre de joueurs :  %d", nombreDeJoueur);

    for(int i=0; i<nombreDeJoueur; i++)
    {
        printf("\nJoueur %d: %s",i+1, NOMSDESJOUEURS[i]);
    }
    */



    //menu_Principal();

    //définition de mon tableau
    char TABLEAU[LENTABLEAU];
    for (int i = 0; i<LENTABLEAU; i++)
        {
            TABLEAU[i] = 'A'+ i;
        }
    affichage_Tableau(TABLEAU);

    int de=0, de2=0, de3=0, de4=0;
    int *ptde  =&de;
    int *ptde2 =&de2;
    int *ptde3 =&de3;
    int *ptde4 =&de4;
    int valeurDe=0;

    valeurDe = tirage_Au_Sort(&de, &de2, &de3, &de4);


    TABLEAU[valeurDe] = 4;
    system("cls");
    affichage_Tableau(TABLEAU);
    printf("\rResultat du premier lancer : De1 = %d  De2 = %d",*ptde,*ptde2);

    if((de3 + de4)!=0)
        {
            printf("\rResultat du second lancer : De3 = %d  De4 = %d",*ptde3,*ptde4);
        }

    printf("\n\nVous vous etes deplace de %d cases\n", valeurDe+1);





    return 0;
}




