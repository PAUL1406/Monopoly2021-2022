#include "maBiblio.h"

void caisse(Joueur*j)
{
    int carte, min = 1, max = 16;
    int choix;

    srand (time(NULL));

    carte = rand()%(max - min + 1) + min;

    if (carte == 1)
    {
        gotoligcol(34,160);
        printf ("Vous retournez sur Mercure.");
        j->position = 1;
        j->argentJoueur = j->argentJoueur + 200;

        /// programme de loyer ou d'achat si case selon si case occupée ou non
    }

    if (carte == 2)
    {
        gotoligcol(34,160);
        printf ("Payez la reparation du cable endommage pour 10 euros");
        gotoligcol(35,160);
        printf("(saisir : 1) ou bien relancez les des : (saisir : 2) ");
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
        gotoligcol(34,160);
        printf ("Votre vaisseau remporte le deuxieme prix de rapidite. Recevez 10 euros.");
        j->argentJoueur = j->argentJoueur + 10;
    }

    if (carte == 4)
    {
        gotoligcol(34,160);
        printf ("Vous trouvez 20 euros flottant dans l'espace.");
        j->argentJoueur = j->argentJoueur + 20;
    }

    if (carte == 5)
    {
        gotoligcol(34,160);
        printf ("Vous recevez un prime de 100 euros.");
        j->argentJoueur = j->argentJoueur + 100;
    }

    if (carte == 6)
    {
        gotoligcol(34,160);
        printf ("Votre vaisseau recoit de l'aide d'extraterrestres.");
        gotoligcol(35,160);
        printf("Vous recevez 25 euros.");
        j->argentJoueur = j->argentJoueur + 25;
    }

    if (carte == 7)
    {
        gotoligcol(34,160);
        printf ("Un membre de votre equipage tombe malade.");
        gotoligcol(35,160);
        printf(" La note du medecin s'eleve a 50 euros.");
        j->argentJoueur = j->argentJoueur - 50;
    }

    if (carte == 8)
    {
        gotoligcol(34,160);
        printf ("Vous avancez jusqu'a la case depart.");
        j->argentJoueur = j->argentJoueur + 200;
        j->position = 0;
    }

    if (carte == 9)
    {
        gotoligcol(34,160);
        printf ("Vos aides vous rapportent la somme de 20 euros.");
        j->argentJoueur = j->argentJoueur + 20;
    }

    if (carte == 10)
    {
        gotoligcol(34,160);
        printf ("Vous payez des reparations 100 euros.");
        j->argentJoueur = j->argentJoueur - 100;
    }

    if (carte == 11)
    {
        gotoligcol(34,160);
        printf ("Votre equipage vous souhaite votre anniversaire.");
        gotoligcol(35,160);
        printf("Vous recevez 50 euros.");
        j->argentJoueur = j->argentJoueur + 50;
    }

    if (carte == 12)
    {
        gotoligcol(34,160);
        printf ("Liberation du trou noir.");
        gotoligcol(35,160);
        printf(" Vous pouvez conserver cette carte jusqu'a ce qu'elle soit utilisee ou vendue.");
        j->carteTrouNoir = j->carteTrouNoir + 1;
    }

    if (carte == 13)
    {
        int choix;
        gotoligcol(34,160);
        printf ("Vous vous perdez dans un trou noir.");
        j->position = 24;
        if (j->carteTrouNoir == 1)
        {
            gotoligcol(34,160);
            printf ("Souhaitez vous utiliser votre carte de sortie de trou noir ? ");
            gotoligcol(35,160);
            printf(" (Si oui : saisir 1 / Si non : saisir 0) :");
            scanf ("%d", &choix);
            if (choix == 1)
            {
                gotoligcol(34,160);
                printf ("Vous sortez du trou noir.");
            }
            if (choix == 0)
            {
                gotoligcol(34,160);
                printf ("Vous derivez dans le trou noir.");
            }
        }
        else
        {
            gotoligcol(34,160);
            printf ("Vous n'avez pas de carte de sortie de trou noir...");
            gotoligcol(34,160);
            printf ("Vous etes donc aspire par le trou noir.");
        }
    }

    if (carte == 14)
    {
        gotoligcol(34,160);
        printf ("Le meilleur membre de l'equipage recoit une prime.");
        gotoligcol(35,160);
        printf("Vous payez 50 euros.");
        j->argentJoueur = j->argentJoueur - 50;
    }

    if (carte == 15)
    {
        gotoligcol(34,160);
        printf ("Erreur de la banque en votre faveur.");
        gotoligcol(35,160);
        printf(" Vous recevez 200 euros.");
        j->argentJoueur = j->argentJoueur + 200;
    }

    if (carte == 16)
    {
        gotoligcol(34,160);
        printf ("Vous recevez 100 euros de la part d'un admirateur.");
        j->argentJoueur = j->argentJoueur + 100;
    }

    return 0;
}
