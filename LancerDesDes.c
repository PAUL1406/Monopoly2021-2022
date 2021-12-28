#include <stdio.h>
#include <stdlib.h>

int LancerDesDes()
{
    /// déclaration des variables
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

        if (de1 == de2)
        {
            SommeDesDes = 0; /// le joueur part en prison au deuxième doublon des dés

            printf ("Vous avez fait deux doublons : vous vous dirigez donc vers la prison... \n");
        }
    }

    return SommeDesDes;
}
