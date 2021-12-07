#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
#include "biblio_fonction_preparation.h"
#include "structures.h"

void afficherPlateau(t_case TAB[Lenghtableau] )
{
    int i=0;
    for (i=0; i<Lenghtableau; i++)
    {
        printf("%d", TAB[i].numeroCase);
        printf("%c", TAB[i].pion);
        printf(" | ");
    }

}

void affichage_plateauDeJeu(char TABLEAU[LENTABLEAU])
{

    for (int i=0;i<8 ;i++ ){
       printf("%c",TABLEAU[i]) ;
       printf("  |  ");
    }
    printf("\n");
    for (int i=8;i<16 ;i++ ){
       printf("%c",TABLEAU[i]) ;
       printf("  |  ");
    }
    printf("\n");
    for (int i=16;i<24 ;i++ ){
       printf("%c",TABLEAU[i]) ;
       printf("  |  ");
    }
    printf("\n");
    for (int i=24;i<32 ;i++ ){
       printf("%c",TABLEAU[i]) ;
       printf("  |  ");
    }
    printf("\n");
}

void gotoligcol( int lig, int col ) //permet de déplacer le curseur à l'endroit ou l'on souhaite
{

// ressources

COORD mycoord;

mycoord.X = col;

mycoord.Y = lig;

SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}

void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
     /*
    0 : Noir
    1 : Bleu foncé
    2 : Vert foncé
    3 : Turquoise
    4 : Rouge foncé
    5 : Violet
    6 : Vert caca d'oie
    7 : Gris clair
    8 : Gris foncé
    9 : Bleu fluo
    10 : Vert fluo
    11 : Turquoise
    12 : Rouge fluo
    13 : Violet 2
    14 : Jaune
    15 : Blanc
    */
}


void afficherOptions()
{
    gotoligcol(0 ,60);
    Color(10,0);
    printf("1.afficher infos de la case");
    Color(15, 0);
    gotoligcol(2,60);
    Color(10,0);
    printf("2.Lancer les des");
    Color(15, 0);
    gotoligcol(4,60);
    Color(10,0);
    printf("3.Voir compte en banque");
    Color(15, 0);
}

void afficherOptionsOuJeVeux(int lig, int col, int colTexte, int colFond)
{
    gotoligcol(lig ,col);
    Color(colTexte,colFond);
    printf("1.ce que je veux ");
    Color(15, 0);
    gotoligcol(lig+1 ,col); //cela sera afficher une ligne en dessous du texte précédent
    Color(colTexte,colFond);
    printf("2.ce que je veux");
    Color(15, 0);
    gotoligcol(lig+2 ,col); //cela sera afficher 2 en dessous du premier texte
    Color(colTexte,colFond);
    printf("3.ce que je veux");
    Color(15, 0);
}

