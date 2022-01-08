#include "maBiblio.h"

/// structure d'un joueur
typedef struct Joueur {
    char pion[20];
    int positionX;
    int positionY;
    int argentJoueur;
}Joueur;

int main()
{
    int choix, nombreJ;
    do {
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

    gotoligcol(20,80);
    printf("Souhaitez-vous lancer une partie de Monopoly ?\n");
    gotoligcol(22,80);
    printf("Taper 1 pour lancer une partie\n");
    gotoligcol(24,80);
    printf("Taper 2 pour rafraichir la page \n");
    gotoligcol(26,80);
    printf("Taper 3 pour charger une ancienne partie\n");
    gotoligcol(28,80);
    printf("Taper 4 pour afficher les regles\n");
    gotoligcol(30,80);
    printf("Taper 5 pour afficher le nom des membres de l'equipe du projet\n");
    do
    {
        scanf("%d", &choix);
        fflush(stdin);
    }
    while(choix<1  ||choix>5);

    switch(choix)
        {
            case 1:
            {
                /// Allocation dynamique tableau de structure
                Joueur *tabJoueur = malloc(nombreJ * sizeof(Joueur));
                printf("La partie va commencer!\n");
                nombreJ = nbJoueurs(tabJoueur);
                system("cls");


               while (nombreJ!=1)
                {
                    ///Tour de jeu
                    for(int i = 0; i<nombreJ; i++)
                    {
                        affichagePlateau();
                        affichageCases();
                        gotoligcol(1,160);
                        printf("C'est au joueur %s de jouer !\n", tabJoueur[i].pion);
                        debutTour();
                        ///plateau(); => affichage des joueurs sur le plateau de départ
                        /// argent();
                        /// dé => déplacement joueur + gestion achat propriété



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
                printf("LES REGLES DU MONOPOLY\n");
                break;

            }
            case 5:
            {
                printf("Paul PHILIPPON\nJulien LIN\nMathis CHATILLON\nRomain THEPAUT\n");
                break;
            }

        }
    }while (choix !=1);





    sleep(10000);
    return 0;
}
