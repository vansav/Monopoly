#ifndef BIBLIO_FONCTION_PRÈPARATION_H_INCLUDED
#define BIBLIO_FONCTION_PRÈPARATION_H_INCLUDED
#define Lenghtableau 5
//#include "fonction_prÈparation.c"


int menu_Principal();

void gotoligcol( int lig, int col );

void Color(int couleurDuTexte,int couleurDeFond);

typedef struct teststruct{

    int numeroCase;
    char pion;
    int nombreDePions;

}t_case;

void afficherPlateau(t_case TAB[Lenghtableau] );

int saisirJoueurs(char* nom1, char* nom2, char*nom3, char* nom4);


#endif // BIBLIO_FONCTION_PRÈPARATION_H_INCLUDED
