#include "maBiblio.h"

void debutTour()
{
    int choice;
    gotoligcol(3,160);
    printf("1-acceder au Menu principal\n");
    gotoligcol(5,160);
    printf("2-lancer les des\n");
    gotoligcol(7,160);
    printf("3-acheter des maisons/hotels\n");
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
            deplacement();
            break;

        }

        case 3:
        {
           printf("coucou\n");
           break;
        }
    }
}

