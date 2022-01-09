#include "maBiblio.h"

int nbJoueurs (Joueur tabJoueur[])
{
    int nbJoueur, i;

    do {
        printf("Veuillez saisir le nombre de joueurs\n");
        fflush(stdin);
        scanf("%d", &nbJoueur);

    }while (nbJoueur<2  ||nbJoueur>6);

        /// création tableau de structure Joueur
        tabJoueur[nbJoueur];
        for (i=0; i<nbJoueur; i++)
        {
            ///nom du joueur
            printf("Saisissez votre pion :\n");
            scanf("%s", &tabJoueur[i].pion);

            ///position de départ du joueur
            tabJoueur[i].position = 0;

            ///Argent de départ du joueur
            tabJoueur[i].argentJoueur = 1500;

        }
    return nbJoueur;
}

