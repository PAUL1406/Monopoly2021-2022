#include "maBiblio.h"

int prison(Joueur *j)
{
    int compteur3tours = 0, decision = 0, SommeDes;
    int de3, de4, Min = 1, Max = 6;

    gotoligcol(16,160);
    printf("tapez 1 pour sortir en payant 50 euros");
    gotoligcol(17,160);
    printf("tapez 2 pour utilisez une carteTrouNoir");
    gotoligcol(18,160);
    printf("tapez 3 pour lancer les des et essayer de faire un double");
    fflush(stdin);
    gotoligcol(19,160);
    scanf("%d", &decision);

if(compteur3tours != 3)
    {
        if (decision == 1)
            {
                gotoligcol(20,160);
                printf("vous avez choisi de payer 50 euros pour sortir du trou noir");
                gotoligcol(21,160);
                printf("vous etes maintenant en simple visite");
                j->argentJoueur -=50;
                return (j->position = 8);
            }

        if (decision == 2)
            {
                gotoligcol(20,160);
                printf("vous avez choisi d'utiliser votre carte TrouNoir\n");
                if(j->carteTrouNoir != 0 || j->carteTrouNoir == 1 || j->carteTrouNoir == 2)
                   {
                        gotoligcol(21,160);
                        printf("vous pouvez sortir du trou noir ");
                    }
                return (j->position = 8);
            }
        if (decision == 3)
            {
                ///gotoligcol(x,y);
                gotoligcol(20,160);
                printf("vous avez choisi d'essayer de faire un double\n");
                srand (time(NULL));
                de3 = rand()%(Max - Min + 1) + Min;
                de4 = rand()%(Max - Min + 1) + Min;
                SommeDes = de3 + de4;
                gotoligcol(21,160);
                printf ("Le resultat du premier de est : %d. \n", de3);
                gotoligcol(22,160);
                printf ("Le resultat du deuxieme de est : %d. \n", de4);

                if (de3 == de4)
                    {
                        gotoligcol(23,160);
                        printf("vous avez realise un double\n");
                        gotoligcol(24,160);
                        printf("vous sortez donc du trou noir\n");
                        j->position += SommeDes;
                        return (j->position);
                    }
                else
                    {
                        gotoligcol(25,160);
                        printf("vous n'avez pas fait de double attendez le prochain tour pour reessayer ou payer 50 euros ou tout simplement attendre\n");
                        compteur3tours ++;
                        return(j->position = 8);

                    }

            }
    }
    else {
        gotoligcol(20,160);
        printf("cela fait trois tours\n");
        gotoligcol(21,160);

        printf("vous pouvez desormais sortir du trou noir mais vous payez une amende de 50 euros\n");
        srand (time(NULL));
        de3 = rand()%(Max - Min + 1) + Min;
        de4 = rand()%(Max - Min + 1) + Min;
        SommeDes = de3 + de4;
        j->argentJoueur -= 50;
        j->position += SommeDes;
        return (j->position);
    }
}
