#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>
void etoile();
void caisse();
void Color(int couleurDuTexte,int couleurDeFond);
void affichagePlateau();
void gotoligcol( int lig, int col );
void affichageRegle();
void affichageCases();
int deplacement();
int nbJoueurs ();
void debutTour();
int lancerDes();
void remplissageCases();
int achatP();
int nouvellePos();
void achatMaison ();
int prison();


/// structure d'un joueur
typedef struct Joueur {
    char pion[20];
    int position;
    int argentJoueur;
    int carteTrouNoir;
    int maison;
    int hotel;
}Joueur;

/// structure d'une propriete
typedef struct Proprietes
{
        char nomCase[30];
        int position;
        int prix;
        char nameProprietaire[30];
        int proprietaire;
        int nbMaisons;
        int batiment[5];
        bool hypotheque;
        int prixHypotheque;
        int couleur;
}Proprietes;



#endif // MABIBLIO_H_INCLUDED
