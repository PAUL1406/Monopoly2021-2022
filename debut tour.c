#include "maBiblio.h"

void debutTour(Joueur *joueur, Proprietes prop[31])
{
    int choice;
    gotoligcol(3,160);
    printf("1- Acceder au Menu principal\n");
    gotoligcol(5,160);
    printf("2- Lancer les des\n");
    gotoligcol(7,160);
    printf("3- Acheter des maisons/hotels\n");
    do
    {
        gotoligcol(8,160);
        scanf("%d", &choice);
        fflush(stdin);
    }
    while(choice<1  ||choice>3);
    switch(choice)
    {
        case 1 :
        {
            system("cls");
            main();
            break;
        }
        case 2:
        {
            lancerDes();
            break;
        }

        case 3:
        {
           achatMaison(&joueur, prop);
           getchar();
           break;
        }
    }
}

