#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void Color(int couleurDuTexte,int couleurDeFond);
void affichagePlateau();
void gotoligcol( int lig, int col );

void affichageCases();
//void menu();
void deplacement();
int nbJoueurs ();
struct Joueur;
//struct Proprietes;
void debutTour();
int lancerDes();


#endif // MABIBLIO_H_INCLUDED
