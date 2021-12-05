#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
#define LENTABLEAU 32
#include "biblio_fonction_préparation.h"
#include "time.h"

void affichage_Tableau();
int tirage_Au_Sort(int *ptde,int *ptde2,int *ptde3,int *ptde4);


int main()
{
    int choixDuMenu = menu_Principal();
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

    /*

   //menu_Principal();

    //définition de mon tableau
    char TABLEAU[LENTABLEAU];
    for (int i = 0;i<LENTABLEAU; i++){
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

    if((de3 + de4)!=0){
        printf("\rResultat du second lancer : De3 = %d  De4 = %d",*ptde3,*ptde4);
    }

    printf("\n\nVous vous etes deplace de %d cases\n", valeurDe+1);

    */



    return 0;
}

void affichage_Tableau(char TABLEAU[LENTABLEAU])
{
    for (int i=0;i<8 ;i++ ){
       printf("%c",TABLEAU[i]) ;
       printf(" | ");
    }
    printf("\n");
    for (int i=8;i<16 ;i++ ){
       printf("%c",TABLEAU[i]) ;
       printf(" | ");
    }
    printf("\n");
    for (int i=16;i<24 ;i++ ){
       printf("%c",TABLEAU[i]) ;
       printf(" | ");
    }
    printf("\n");
    for (int i=24;i<32 ;i++ ){
       printf("%c",TABLEAU[i]) ;
       printf(" | ");
    }
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
