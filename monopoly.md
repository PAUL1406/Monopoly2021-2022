# Monopoly 2021-2022

int menu()
{
    int choix;
    printf("Souhaitez-vous lancer une partie ?\n");
    printf("Taper 1 pour lancer une partie\n");
    printf("Taper 2 pour \n");
    printf("Taper 3 pour \n");
    printf("Taper 4 pour \n");
    printf("Taper 5 pour \n");
    do
    {
        scanf("%d", &choix);
        fflush(stdin);
    }
    while(choix<1 || choix>5);
    return choix;
}

int main()
{
    int decision;
    do
    {
        decision = menu();
        switch(decision)
        {
            case 1:
            {
                printf("la partie va commencer\n");
                typedef struct joueur
            {
            char pion[20];
            char nom[20];
            } joueur;
            
            void InfoJoueur ()
            {
                int nbJoueur;
                do {
                printf("veuillez saisir le nombre de joueur\n");
                fflush(stdin);
                scanf("%d", &nbJoueur);
                }while (nbJoueur<2 || nbJoueur>4);
                joueurS*=malloc(nbJoueur*sizeof(joueur));
                int i;
                for (i=0; i<nbJoueur; i++)
                {
                printf("saisissez votre pion");
                scanf("%s",&(jouu=.pion));
                printf("saisissez votre nom");
                scanf("%s",&(tablo[i].nom));
                }
            }
            
                    void affichage(t_joueur tablo[nbJoueur])
                    {
                        for (int i=0; i<nbJoueur; i++)
                    {
                printf("%s\n %s\n ",tablo[i].nom,tablo[i].pion);
            }
        }
        
                break;
            }
            
            case 2:
            {
                printf("vous avez decidé de rester au menu principal du jeu\n");
                break;
            }
            
            //case 3:
            //{
            //}
            
            //case 4:
            //{
            //}
            
            //case 5:
            //{
            //}
        }
    }
    while(decision != 2);
    return 0;
}