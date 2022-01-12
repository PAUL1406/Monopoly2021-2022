#include "maBiblio.h"

int main()
{
    int choix, nombreJ, passageTour, choix2;
    do{
        gotoligcol(20,80);
        printf("Veuillez appuyer sur 1 pour rafraichir la page\n");
        scanf("%d", &choix2);
        if (choix2==1)
        {
            system("cls");
        }

    }while(choix2!=1);
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
    printf("Taper 2 pour sauvergarder votre partie la page \n");
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
                ///Création du tableau de structure proprietes
                Proprietes prop[31];
                remplissageCases(prop);
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
                        printf("C'est au joueur %s de jouer !", tabJoueur[i].pion);
                        debutTour(&tabJoueur[i], prop, nombreJ);
                        nombreJ = deplacement(&tabJoueur[i], prop, nombreJ, tabJoueur);

                        /// FAILLITE
                        if(tabJoueur[i].argentJoueur <= 0){
                            gotoligcol(18, 160);
                            printf("FAILLITE ! VOUS AVEZ PERDU");
                            for(int j = i-1;j<=nombreJ;j++){
                                tabJoueur[j]=tabJoueur[j+1];
                            }
                            nombreJ -= 1;
                            gotoligcol(19, 160);
                            printf("Il reste %d joueurs", nombreJ);
                        }
                        getchar();
                        system("cls");

                    }

                }
                system("cls");
                for(int k = 0; k<nombreJ; k++)
                {
                    gotoligcol(1, 80);
                    printf("Le joueur gagnant est %s", tabJoueur[k].pion);
                }
                break;
            }
            case 2 :
            {
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
                printf("Paul PHILIPPON\nJulien LIN\nMathis CHATILLON\nRomain THEPAUT\n");
                break;
            }

        }
    }while (choix !=1);

    sleep(10000);
    return 0;
}
