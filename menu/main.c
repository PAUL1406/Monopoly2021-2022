#include "maBiblio.h"

int main()
{
    int choix, nombreJ, passageTour;

    do
    {
        printf("  \n");
        printf("  \n");
        printf("  \n");
        printf("  \n");
        printf("  \n");
        printf("  \n");
        printf("  \n");
        printf("                                                                             __   __  _______  __    _  _______  _______  _______  ___      __   __ \n");
        printf("                                                                            |  |_|  ||       ||  |  | ||       ||       ||       ||   |    |  | |  |\n");
        printf("                                                                            |       ||   _   ||   |_| ||   _   ||    _  ||   _   ||   |    |  |_|  |\n");
        printf("                                                                            |       ||  | |  ||       ||  | |  ||   |_| ||  | |  ||   |    |       |\n");
        printf("                                                                            |       ||  |_|  ||  _    ||  |_|  ||    ___||  |_|  ||   |___ |_     _|\n");
        printf("                                                                            | ||_|| ||       || | |   ||       ||   |    |       ||       |  |   |  \n");
        printf("                                                                            |_|   |_||_______||_|  |__||_______||___|    |_______||_______|  |___|  \n");

        gotoligcol(9,84);
        printf(" MENU \n");
        gotoligcol(13,56);
        printf("Souhaitez-vous lancer une partie de Monopoly ?\n");
        gotoligcol(16,56);
        printf("Taper 1 pour lancer une partie\n");
        gotoligcol(18,56);
        printf("Taper 2 pour rafraichir la page \n");
        gotoligcol(20,56);
        printf("Taper 3 pour charger une ancienne partie\n");
        gotoligcol(22,56);
        printf("Taper 4 pour afficher les regles\n");
        gotoligcol(24,56);
        printf("Taper 5 pour afficher le nom des membres de l'equipe du projet\n");

        do
        {
            scanf("%d", &choix);
            fflush(stdin);
        } while(choix<1  ||choix>5);

        switch(choix)
        {
            case 1:
            {
                /// Création d'un tableau de structure proprietes
                Proprietes prop[31];
                remplissageCases(prop);

                /// Allocation dynamique du tableau de structure
                Joueur *tabJoueur = malloc(nombreJ * sizeof(Joueur));
                printf("La partie va commencer!\n");
                nombreJ = nbJoueurs(tabJoueur);
                system("cls");

                while (nombreJ!=1)
                {
                    /// Tour de jeu
                    for(int i = 0; i<nombreJ; i++)
                    {
                        affichagePlateau();
                        affichageCases();

                        gotoligcol(1,160);
                        printf("C'est au joueur %s de jouer !\n", tabJoueur[i].pion);

                        debutTour();
                        deplacement(&tabJoueur[i], prop);

                        /// Tour suivant
                        /* do{
                            gotoligcol(20,160);
                            printf("passer au tour suivant, appuyer sur 1");
                            gotoligcol(21,160);
                            scanf("%d\n", &passageTour);
                        } while (passageTour != 1);

                        printf("coucou");*/

                        getchar();
                        system("cls");
                    }
                }
                break;
            }

            case 2 :
            {
                system("cls");
                break;
            }

            case 3:
            {

                break;
            }

            case 4:
            {
                system("cls");
                affichageRegle();

                break;

            }

            case 5:
            {
                printf("CREDITS :\nPaul PHILIPPON\nJulien LIN\nMathis CHATILLON\nRomain THEPAUT\n");
                break;
            }
        }
    } while (choix !=1);

    sleep(10000);
    return 0;
}
