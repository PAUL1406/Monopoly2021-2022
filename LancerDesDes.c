#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int LancerDesDes()
{
    /// déclaration des variables
    int de1, de2, min = 1, max = 6, SommeDesDes, des[1];

    srand (time(NULL));

    /// affectation d'un nombre aléatoire compris entre 1 et 6
    de1 = rand()%(max - min + 1) + min;
    de2 = rand()%(max - min + 1) + min;

    /// affichage des valeurs des 2 dés
    gotoligcol(16,56);
    printf ("Le resultat du premier de est : %d. \n", de1);
    gotoligcol(17,56);
    printf ("Le resultat du deuxieme de est : %d. \n", de2);

    /// somme des dés
    SommeDesDes = de1 + de2;

    /// affichage de l'avancement
    gotoligcol(18,56);
    printf ("Vous avancez de %d cases. \n", SommeDesDes);

    if (de1 == de2) /// en cas de double, les dés sont relancés
    {
        gotoligcol(19,56);
        printf ("Vous avez fait un doublon : vous pouvez rejouer. \n");

        // mettre tous les sous-programme

        deplacement();
        // sous programme de blindage

        /// affectation d'un nombre aléatoire compris entre 1 et 6
        de1 = rand()%(max - min + 1) + min;
        de2 = rand()%(max - min + 1) + min;

        /// affichage des valeurs des 2 dés
        gotoligcol(20,56);
        printf ("Le resultat du premier de est : %d. \n", de1);
        gotoligcol(21,56);
        printf ("Le resultat du deuxieme de est : %d. \n", de2);

        /// somme des dés
        SommeDesDes = de1 + de2;

        /// affichage de l'avancement
        gotoligcol(22,56);
        printf ("Vous avancez de %d cases. \n", SommeDesDes);

        if (de1 == de2) /// en cas de double, les dés sont relancés
        {
            gotoligcol(23,56);
            printf ("Vous avez fait deux doubles : vous pouvez rejouer. \n");

            /// affectation d'un nombre aléatoire compris entre 1 et 6
            de1 = rand()%(max - min + 1) + min;
            de2 = rand()%(max - min + 1) + min;

            /// affichage des valeurs des 2 dés
            gotoligcol(24,56);
            printf ("Le resultat du premier de est : %d. \n", de1);
            gotoligcol(25,56);
            printf ("Le resultat du deuxieme de est : %d. \n", de2);

            /// somme des dés
            SommeDesDes = de1 + de2;

            /// affichage de l'avancement
            gotoligcol(26,56);
            printf ("Vous avancez de %d cases. \n", SommeDesDes);

            if (de1 == de2)
            {
                SommeDesDes = 8; /// le joueur part en prison au troisième doublon des dés

                gotoligcol(27,56);
                printf ("Vous avez fait trois doubles : vous etes aspire dans un trou noir... \n");
            }
        }
    }

    return SommeDesDes;
}
