#include "maBiblio.h"

int lancerDes()
{
	int de1 = 0, de2 = 0, sommeDe = 0, compteurDouble = 0;
	srand (time(NULL));
    de1 = (rand() % 6) + 1;
    de2 = (rand() % 6) + 1;
    gotoligcol(8,160);
    printf("%d lancer de des: %d + %d = %d ",compteurDouble +1, de1, de2, de1 + de2);
    sommeDe += de1 + de2;
    if (de1 != de2)
    {
        gotoligcol(10,160);
        printf("Avance %d cases. ", sommeDe);
        return (sommeDe);

    }
    else
    {
        gotoligcol(10,160);
        printf( "DOUBLE! ");
        compteurDouble++;
        gotoligcol(10,160);
        printf("Avance %d cases. ", sommeDe);
        return (sommeDe);
    }
}
