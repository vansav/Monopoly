#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
#include "biblio_fonction_préparation.h"


int menu_Principal()
{
    int saisieChoix = 0;

    do {printf("Menu Principal, selectionner une action a effectuer : \n\n1. Nouvelle partie\n2. Sauvegarder partie\n3. Charger partie\n4. Regles\n5. Nom d'equipe\n6. Exit\nMon choix : ");
    scanf("%d",&saisieChoix);
    }while(saisieChoix>6 || saisieChoix <1);

    switch (saisieChoix)
    {
    case 1: printf("\nNouvelle Partie\n");
        break;
    case 2 : printf("\nVous avez choisi SAVE GAME, merci d'attendre que les developpeurs finissent leur boulot");
        break;
    case 3 : printf("\nVous avez choisi LOAD GAME, merci d'attendre que les developpeurs finissent leur boulot");
        break;
    case 4 : printf("\nVous avez choisi RULES, merci d'attendre que les developpeurs finissent leur boulot");
        break;
    case 5 : printf("\nVous avez choisi TEAM NAME, merci d'attendre que les developpeurs finissent leur boulot");
        break;
    case 6 : printf("\nVous avez choisi EXIT, merci d'attendre que les developpeurs finissent leur boulot");
        break;
    //default: printf("1. New Game\n2. Save Game\n3. Load Game\n4. Rules\n5. Team Name\n6. Exit");scanf("%d",saisieChoix);
    break;
    }
    return saisieChoix;
}


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


void menuTourDeJeu(char NOMSDESJOUEURS[4][15])
{
    int choixMenu = 0;
    int saisieChoix = 0;
    do
    {
        printf("\nC'est au tour de : ");
        Color(13,0);
        printf("%s\n", NOMSDESJOUEURS[0]); //il faut réussir à adapter l'affichage en fonction du joueur en question
        Color(15,0);
        printf("Selectionner une action : \n1.Lancer les DEs\n2.Deplacer le pion\n3.Afficher les informations d'une case\nMon choix : ");
        scanf("%d",&choixMenu);
    }while(choixMenu>3 || choixMenu<1);


    switch(choixMenu)
    {
        case 1 : Color(10,0); printf("Vous aller lancer les des");  Color(15,0);
            break;
        case 2 : printf("Choix 2");
            break;
    }

}
