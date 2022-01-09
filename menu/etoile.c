#include "maBiblio.h"

void etoile(Joueur*j)
{
    int carte, min = 1, max = 16;
    int choix, recul;

    srand (time(NULL));

    carte = rand()%(max - min + 1) + min;
    recul = rand()%(4) + 1;

    if (carte == 1)
    {
        printf ("Vous allez a Uranus. \n");
        j->position = 19;
        /// programme de loyer ou d'achat si case selon si case occupée ou non
    }

    if (carte == 2)
    {
        printf ("Vous avancez jusqu'a la case Depart. \n");
        j->position = 0;
    }

    if (carte == 3)
    {
        printf ("Vous esquivez une pluie d'asteroides. Vous reculez donc de %d cases. \n", recul);
        j->position = j->position - recul;
        /// programme de loyer ou d'achat si case selon si case occupée ou non
    }

    if (carte == 4)
    {
        printf ("Vous payez 15 euros pour l'anniversaire d'un membre de l'équipage. \n");
        j->argentJoueur = j->argentJoueur - 15;
    }

    if (carte == 5)
    {
        printf ("Votre vaisseau gagne un concours de beaute. Vous gagnez 100 euros. \n");
        j->argentJoueur = j->argentJoueur + 100;
    }

    if (carte == 6)
    {
        printf ("Vous recevez 250 euros pour votre aide aux differentes populations extraterrestres. \n");
        j->argentJoueur = j->argentJoueur + 250;
    }

    if (carte == 7)
    {
        printf ("Votre vaisseau tombe en panne. Les reparations coutent 150 euros. \n");
        j->argentJoueur = j->argentJoueur - 150;
    }

    if (carte == 8)
    {
        printf ("Vous avancez jusqu'a Glory. \n");
        if (j->position > 12)
        {
            printf ("Vous etes passe(e) par la case Depart. Vous recevez 200 euros. \n");
            j->argentJoueur = j->argentJoueur + 200;
        }
        j->position = 12;

        /// programme de loyer ou d'achat si case selon si case occupée ou non
    }

    if (carte == 9)
    {
        printf ("Rendez-vous sur Terre. \n");
        j->position = 31;

        /// programme de loyer ou d'achat si case selon si case occupée ou non
    }

    if (carte == 10)
    {
        printf ("Avancez jusqu'a Phobos. \n");
        if (j->position > 9)
        {
            printf ("Vous etes passe(e) par la case Depart. Vous recevez 200 euros. \n");
            j->argentJoueur = j->argentJoueur + 200;
        }
        j->position = 9;

        /// programme de loyer ou d'achat si case selon si case occupée ou non
    }

    if (carte == 11)
    {
        printf ("Faites des reparations dans toutes vos proprietes : 25 euros par maison / 100 euros par hotel. \n");
        j->argentJoueur = j->argentJoueur - 25 * j->maison - 100 * j->hotel;
    }

    if (carte == 12)
    {
        printf ("Liberation du trou noir. Vous pouvez conserver cette carte jusqu'a ce qu'elle soit utilisee ou vendue. \n");
        j->carteTrouNoir = j->carteTrouNoir + 1;
    }

    if (carte == 13)
    {
        int choix;
        printf ("Vous vous perdez dans un trou noir.");
        j->position = 24;
        if (j->carteTrouNoir != 0)
        {
            printf ("Souhaitez vous utiliser votre carte de sortie de trou noir ? (Si oui : saisir 1 / Si non : saisir 0) : ");
            scanf ("%d", &choix);
            if (choix == 1)
            {
                printf ("Vous sortez du trou noir. \n");
            }
            if (choix == 0)
            {
                printf ("Vous derivez dans le trou noir. \n");
            }
        }
        if (j->carteTrouNoir == 0)
        {
            printf ("Vous n'avez pas de carte de sortie de trou noir... \n");
            printf ("Vous etes donc aspire par le trou noir. \n");
        }
    }

    if (carte == 14)
    {
        printf ("Vos proprietes necessitent des renovations a raison de : 40 euros par maison / 115 euros par hotel. \n");
        j->argentJoueur = j->argentJoueur - 40 * j->maison - 115 * j->hotel;
    }

    if (carte == 15)
    {
        printf ("C'est votre jour de chance. Vous recevez 20 euros. \n");
        j->argentJoueur = j->argentJoueur + 20;
    }

    if (carte == 16)
    {
        printf ("Vous recevez une amende de 20 euros. \n");
        j->argentJoueur = j->argentJoueur - 20;
    }

    return 0;
}
