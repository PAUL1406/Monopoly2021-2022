#include "maBiblio.h"

void caisse(Joueur*j)
{
    int carte, min = 1, max = 16;
    int choix;

    srand (time(NULL));

    carte = rand()%(max - min + 1) + min;

    if (carte == 1)
    {
        printf ("Vous retournez sur Mercure. \n");
        j->position = 1;
        j->argentJoueur = j->argentJoueur + 200;

        /// programme de loyer ou d'achat si case selon si case occupée ou non
    }

    if (carte == 2)
    {
        printf ("Payez la reparation du cable endommage pour 10 euros (saisir : 1) ou bien relancez les des : (saisir : 2) ;");
        scanf ("%d", &choix);

        if (choix == 1)
        {
            j->argentJoueur = j->argentJoueur - 10;
        }

        if (choix == 2)
        {
            j->position = j->position + lancerDes();
        }
    }

    if (carte == 3)
    {
        printf ("Votre vaisseau remporte le deuxieme prix de rapidite. Recevez 10 euros. \n");
        j->argentJoueur = j->argentJoueur + 10;
    }

    if (carte == 4)
    {
        printf ("Vous trouvez 20 euros flottant dans l'espace. \n");
        j->argentJoueur = j->argentJoueur + 20;
    }

    if (carte == 5)
    {
        printf ("Vous recevez un prime de 100 euros. \n");
        j->argentJoueur = j->argentJoueur + 100;
    }

    if (carte == 6)
    {
        printf ("Votre vaisseau recoit de l'aide d'extraterrestres. Vous recevez 25 euros. \n");
        j->argentJoueur = j->argentJoueur + 25;
    }

    if (carte == 7)
    {
        printf ("Un membre de votre equipage tombe malade. La note du medecin s'eleve a 50 euros. \n");
        j->argentJoueur = j->argentJoueur - 50;
    }

    if (carte == 8)
    {
        printf ("Vous avancez jusqu'a la case depart. \n");
        j->argentJoueur = j->argentJoueur + 200;
        j->position = 0;
    }

    if (carte == 9)
    {
        printf ("Vos aides vous rapportent la somme de 20 euros. \n");
        j->argentJoueur = j->argentJoueur + 20;
    }

    if (carte == 10)
    {
        printf ("Vous payez des reparations 100 euros. \n");
        j->argentJoueur = j->argentJoueur - 100;
    }

    if (carte == 11)
    {
        printf ("Votre equipage vous souhaite votre anniversaire. Vous recevez 50 euros. \n");
        j->argentJoueur = j->argentJoueur + 50;
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
        if (j->carteTrouNoir == 1)
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
        else
        {
            printf ("Vous n'avez pas de carte de sortie de trou noir... \n");
            printf ("Vous etes donc aspire par le trou noir. \n");
        }
    }

    if (carte == 14)
    {
        printf ("Le meilleur membre de l'equipage recoit une prime. Vous payez 50 euros. \n");
        j->argentJoueur = j->argentJoueur - 50;
    }

    if (carte == 15)
    {
        printf ("Erreur de la banque en votre faveur. Vous recevez 200 euros. \n");
        j->argentJoueur = j->argentJoueur + 200;
    }

    if (carte == 16)
    {
        printf ("Vous recevez 100 euros de la part d'un admirateur. \n");
        j->argentJoueur = j->argentJoueur + 100;
    }

    return 0;
}
