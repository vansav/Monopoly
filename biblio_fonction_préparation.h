#ifndef BIBLIO_FONCTION_PRÈPARATION_H_INCLUDED
#define BIBLIO_FONCTION_PRÈPARATION_H_INCLUDED
#include "structures.h"

#define Lenghtableau 5
#define LENTABLEAU 32

/// MENUS
int menu_Principal();
void menuTourDeJeu(char NOMSDESJOUEURS[4][15]);


///Affichage
void afficherPlateau(t_case TAB[Lenghtableau]);
void affichage_Tableau(char TABLEAU[LENTABLEAU]);
void gotoligcol( int lig, int col );
void Color(int couleurDuTexte,int couleurDeFond);
void afficherOptions();
void afficherOptionsOuJeVeux(int lig, int col, int colTexte, int colFond);


///SAISIE / JEU

int saisirJoueursAvecTableau (char NOMSDESJOUEURS[4][15]);
int tirage_Au_Sort(int* ptde,int* ptde2,int* ptde3,int* ptde4);

#endif // BIBLIO_FONCTION_PRÈPARATION_H_INCLUDED
