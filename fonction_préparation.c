#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
#include "biblio_fonction_préparation.h"
#include "structures.h"

int saisirJoueursAvecTableau (char NOMSDESJOUEURS[4][15])
{
    int nombreDeJoueur = 0;

    Color(14,0);
    do {
            printf("Saisir le nombre de Joueurs (max 4): ");
            scanf("%d", &nombreDeJoueur);
        }while(nombreDeJoueur<1 || nombreDeJoueur >4);

    for (int i=0; i<nombreDeJoueur; i++ )
    {
        printf("\nSaisir le nom du joueur %d : ", i+1);
        scanf("%s", NOMSDESJOUEURS[i]);
    }

    Color(13,0);
     for(int i=0; i<nombreDeJoueur; i++)
    {
        //Color(5+i,0);
        printf("\nJoueur %d: %s",i+1, NOMSDESJOUEURS[i]);
    }

    Color(15,0);
    return nombreDeJoueur;
}

int tirage_Au_Sort(int* ptde,int* ptde2,int* ptde3,int* ptde4)
{
    int variable = 0;
    int valeurDeDes = 0;
    srand( time( NULL ) );

    printf("\nEntrez 1 pour lancer les des\n");
    scanf("%d", &variable);

    while(variable!=1)
    {
        printf("\nVous avez mal jete les des, ressayer\n");
        printf("Entrez 1 pour lancer le de\n");
        scanf("%d", &variable);
    }

    if (variable==1){
        printf("\n");
        for (int i =0;i<2 ;i++ ){
          printf("\rLes des sont jetes         ");
          Sleep(300);
          printf("\rLes des sont jetes .       ");
          Sleep(300);
          printf("\rLes des sont jetes . .     ");
          Sleep(300);
          printf("\rLes des sont jetes . . .   ");
          Sleep(300);
        }
    }
    variable=0;

    *ptde  = rand() %7;
    *ptde2 = rand() %7;
    valeurDeDes = *ptde + *ptde2;
    if(*ptde == *ptde2){
        printf("Wahou quel chance !  UN DOUBLE !\n");
        printf("\nEntrez 1 pour RElancer les des\n");
        scanf("%d", &variable);

        while(variable!=1)
        {
            printf("\nVous avez mal jete les des, ressayer\n");
            printf("Entrez 1 pour lancer le de\n");
            scanf("%d", &variable);
        }

        if (variable==1){
            printf("\n");
            for (int i =0;i<2 ;i++ ){
              printf("\rLes des sont lances         ");
              Sleep(300);
              printf("\rLes des sont lances .       ");
              Sleep(300);
              printf("\rLes des sont lances . .     ");
              Sleep(300);
              printf("\rLes des sont lances . . .   ");
              Sleep(300);
            }
    }
    srand( time( NULL ) );

    *ptde3  = rand() %7;
    *ptde4 = rand() %7;
    }

    valeurDeDes = valeurDeDes + *ptde3 + *ptde4;
    variable=0;
    printf("\n");
    return valeurDeDes;
}



