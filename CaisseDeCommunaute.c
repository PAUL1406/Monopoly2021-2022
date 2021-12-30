#include <stdio.h>
#include <stdlib.h>

int communaute(int *joueur, int *montant, int *position, int *trouNoir)
{
    int carte, min = 1, max = 16;
    int choix;

    srand (time(NULL));

    carte = rand()%(max - min + 1) + min;

    if (carte == 1)
    {
        printf ("Vous retournez sur Venus. \n");
        position = 1;
        montant = montant + 200;
    }

    if (carte == 2)
    {
        printf ("Payez la reparation du cable endommage pour 10€ (saisir : 1) ou bien tirez une carte CHANCE (saisir : 2) : ");
        scanf ("%d", &choix);

        if (choix == 1)
        {
            montant = montant - 10;
        }

        if (choix == 2)
        {
            chance(joueur, montant, position);
        }
    }

    if (carte == 3)
    {
        printf ("Votre vaisseau remporte le deuxieme prix de rapidite. Recevez 10€. \n");
        montant = montant + 10;
    }

    if (carte == 4)
    {
        printf ("Vous trouvez 20€ flottant dans l'espace. \n");
        montant = montant + 20;
    }

    if (carte == 5)
    {
        printf ("Vous recevez un prime de 100€. \n");
        montant = montant + 100;
    }

    if (carte == 6)
    {
        printf ("Votre vaisseau recoit de l'aide d'extraterrestres. Vous recevez 25€. \n");
        montant = montant + 25;
    }

    if (carte == 7)
    {
        printf ("Un membre de votre equipage tombe malade. La note du medecin s'eleve a 50€. \n");
        montant = montant - 50;
    }

    if (carte == 8)
    {
        printf ("Vous avancez jusqu'a la case depart. \n");
        montant = montant + 200;
        position = 0;
    }

    if (carte == 9)
    {
        printf ("Vos aides vous rapportent la somme de 20€. \n");
        montant = montant + 20;
    }

    if (carte == 10)
    {
        printf ("Vous payez des reparations 100€. \n");
        montant = montant - 100;
    }

    if (carte == 11)
    {
        printf ("Votre equipage vous souhaite votre anniversaire. Vous recevez 50€. \n");
        montant = montant + 50;
    }

    if (carte == 12)
    {
        printf ("Vous etes libere du trou noir. Vous pouvez conserver cette carte jusqu'a ce qu'elle soit utilisee ou vendue. \n");
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
                print ("Vous sortez de prison. \n");
            }
            if (choix == 0)
            {
                print ("Vous restez de prison. \n");
            }
        }
        if (trouNoir == 0)
        {
            printf ("Vous n'avez pas de carte de sortie de trou noir... \n");
        }
    }

    if (carte == 14)
    {
        printf ("Le meilleur membre de l'equipage recoit une prime. Vous payez 50€. \n");
        montant = montant - 50;
    }

    if (carte == 15)
    {
        printf ("Erreur de la banque en votre faveur. Vous recevez 200€. \n");
        montant = montant + 200;
    }

    if (carte == 16)
    {
        printf ("Vous recevez 100€ de la part d'un admirateur. \n");
        montant = montant + 100;
    }

    return 0;
}
