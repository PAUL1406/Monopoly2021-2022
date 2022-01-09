#include "maBiblio.h"
/*
int lancerDes()
{
    int de1, de2, min = 1, max = 6, SommeDesDes;
    srand (time(NULL));

    /// affectation d'un nombre aléatoire compris entre 1 et 6
    de1 = rand()%(max - min + 1) + min;
    de2 = rand()%(max - min + 1) + min;

    /// affichage des valeurs des 2 dés
    printf ("Le resultat du premier de est : %d \n", de1);
    printf ("Le resultat du deuxieme de est : %d \n", de2);

    /// somme des dés
    SommeDesDes = de1 + de2;

    if (de1 == de2) /// en cas de doublon, les dés sont relancés
    {
        printf ("Vous avez fait un doublon : les des sont relances... \n");

        /// affectation d'un nombre aléatoire compris entre 1 et 6
        de1 = rand()%(max - min + 1) + min;
        de2 = rand()%(max - min + 1) + min;

        /// affichage des valeurs des 2 dés
        printf ("Le resultat du premier de est : %d \n", de1);
        printf ("Le resultat du deuxieme de est : %d \n", de2);

        /// somme des dés
        SommeDesDes = SommeDesDes + de1 + de2;

        if (de1 == de2) /// en cas de doublon, les dés sont relancés
        {
            printf ("Vous avez fait deux doublons : les des sont relances... \n");

            /// affectation d'un nombre aléatoire compris entre 1 et 6
            de1 = rand()%(max - min + 1) + min;
            de2 = rand()%(max - min + 1) + min;

            /// affichage des valeurs des 2 dés
            printf ("Le resultat du premier de est : %d \n", de1);
            printf ("Le resultat du deuxieme de est : %d \n", de2);

            /// somme des dés
            SommeDesDes = SommeDesDes + de1 + de2;

            if (de1 == de2)
            {
                SommeDesDes = 0; /// le joueur part en prison au troisième doublon des dés

                printf ("Vous avez fait trois doublons : vous vous dirigez donc vers la prison... \n");
            }
        }
    }
    return SommeDesDes;
}*/
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

	/*if (compteurDouble == 3)
	{
        gotoligcol(11,160);
        printf("3 doubles c'est direction prison");
		//prison();
        return (0);
	}
    else  (sommeDe);*/

}
