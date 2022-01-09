#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>

void Color(int couleurDuTexte,int couleurDeFond);
void affichagePlateau();
void gotoligcol( int lig, int col );
void affichageRegle();
void affichageCases();
void deplacement();
int nbJoueurs ();
void debutTour();
int lancerDes();
void remplissageCases();

/// structure d'un joueur
typedef struct Joueur {
    char pion[20];
    int position;
    int argentJoueur;
}Joueur;

/// structure d'une propriete
typedef struct Proprietes
{
        char nomCase[30];
        int position;
        int prix;
        bool proprietaire;
        char nameProprietaire[30];
        int batiment[5];
        bool hypotheque;
        int prixHypotheque;
}Proprietes;



#endif // MABIBLIO_H_INCLUDED
