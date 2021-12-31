#include <stdio.h>
#include <stdlib.h>

int chance(int *joueur, int *montant, int *position, int *trouNoir, int maison, int hotel)
{
    int carte, min = 1, max = 16;
    int choix;

    srand (time(NULL));

    carte = rand()%(max - min + 1) + min;

    if (carte == 1)
    {
        printf ("Vous allez a Uranus. \n");
        position = 24;
    }

    if (carte == 2)
    {
        printf ("Vous avancez jusqu'a la case Depart. \n");
        position = 0;
    }

    if (carte == 3)
    {
        printf ("Vous esquivez une pluie d'asteroides. Vous reculez donc de 3 cases. \n");
        position = position - 3;
    }

    if (carte == 4)
    {
        printf ("Vous payez 15€ pour l'anniversaire d'un membre de l'équipage. \n");
        montant = montant - 15;
    }

    if (carte == 5)
    {
        printf ("Votre vaisseau gagne un concours de beaute. Vous gagnez 100€. \n");
        montant = montant + 100;
    }

    if (carte == 6)
    {
        printf ("Vous recevez 250€ pour votre aide aux differentes populations extraterrestres. \n");
        montant = montant + 250;
    }

    if (carte == 7)
    {
        printf ("Votre vaisseau tombe en panne. Les reparations coutent 150€. \n");
        montant = montant - 150;
    }

    if (carte == 8)
    {
        printf ("Vous avancez jusqu'a Glory. \n");
        if (position > 15)
        {
            printf ("Vous etes passe(e) par la case Depart. Vous recevez 200€. \n")
            montant = montant + 200;
        }
        position = 15;
    }

    if (carte == 9)
    {
        printf ("Rendez-vous sur la Terre. \n")
        position = 39;
    }

    if (carte == 10)
    {
        printf ("Avancez jusqu'a Deinos. \n");
        montant = montant - 100;
        if (position > 11)
        {
            printf ("Vous etes passe(e) par la case Depart. Vous recevez 200€. \n")
            montant = montant + 200;
        }
        position = 11;
    }

    if (carte == 11)
    {
        printf ("Faites des reparations dans toutes vos proprietes : 25€ par maison / 100€ par hotel. \n");
        montant = montant - 25 * maison - 100 * hotel;
    }

    if (carte == 12)
    {
        printf ("Liberation du trou noir. Vous pouvez conserver cette carte jusqu'a ce qu'elle soit utilisee ou vendue. \n");
        trouNoir = 1;
    }

    if (carte == 13)
    {
        int choix;
        printf ("Vous vous perdez dans un trou noir.");
        position = 30;
        if (trouNoir == 1)
        {
            printf ("Souhaitez vous utiliser votre carte de sortie de trou noir ? (Si oui : saisir 1 / Si non : saisir 0) : ");
            scanf ("%d", &choix);
            if (choix == 1)
            {
                print ("Vous sortez du trou noir. \n");
            }
            if (choix == 0)
            {
                print ("Vous derivez dans le trou noir. \n");
            }
        }
        if (trouNoir == 0)
        {
            printf ("Vous n'avez pas de carte de sortie de trou noir... \n");
        }
    }

    if (carte == 14)
    {
        printf ("Vos proprietes necessitent des renovations a raison de : 40€ par maison / 115€ par hotel. \n");
        montant = montant - 40 * maison - 115 * hotel;
    }

    if (carte == 15)
    {
        printf ("C'est votre jour de chance. Vous recevez 20€. \n");
        montant = montant + 20;
    }

    if (carte == 16)
    {
        printf ("Vous recevez une amende de 20€. \n");
        montant = montant - 20;
    }

    return 0;
}
