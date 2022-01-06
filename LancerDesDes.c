#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// déclaration des variables
    int de1, de2, min = 1, max = 6, SommeDesDes, DoubleDeDes;

    srand (time(NULL));

    /// affectation d'un nombre aléatoire compris entre 1 et 6
    de1 = rand()%(max - min + 1) + min;
    de2 = rand()%(max - min + 1) + min;

    /// affichage des valeurs des 2 dés
    printf ("Le resultat du premier de est : %d. \n", de1);
    printf ("Le resultat du deuxieme de est : %d. \n", de2);

    /// somme des dés
    SommeDesDes = de1 + de2;

    /// affichage de l'avancement
    printf ("Vous avancez de %d cases. \n", SommeDesDes);

    if (de1 == de2) /// en cas de double, les dés sont relancés
    {
        printf ("Vous avez fait un doublon : vous pouvez rejouer. \n");

        // mettre tous les sous-programme
        
        // sous programme de blindage
        
        /// affectation d'un nombre aléatoire compris entre 1 et 6
        de1 = rand()%(max - min + 1) + min;
        de2 = rand()%(max - min + 1) + min;

        /// affichage des valeurs des 2 dés
        printf ("Le resultat du premier de est : %d. \n", de1);
        printf ("Le resultat du deuxieme de est : %d. \n", de2);

        /// somme des dés
        SommeDesDes = de1 + de2;

        /// affichage de l'avancement
        printf ("Vous avancez de %d cases. \n", SommeDesDes);

        if (de1 == de2) /// en cas de double, les dés sont relancés
        {
            printf ("Vous avez fait deux doubles : vous pouvez rejouer. \n");

            /// affectation d'un nombre aléatoire compris entre 1 et 6
            de1 = rand()%(max - min + 1) + min;
            de2 = rand()%(max - min + 1) + min;

            /// affichage des valeurs des 2 dés
            printf ("Le resultat du premier de est : %d. \n", de1);
            printf ("Le resultat du deuxieme de est : %d. \n", de2);

            /// somme des dés
            SommeDesDes = de1 + de2;

            /// affichage de l'avancement
            printf ("Vous avancez de %d cases. \n", SommeDesDes);

            if (de1 == de2)
            {
                SommeDesDes = 0; /// le joueur part en prison au troisième doublon des dés

                printf ("Vous avez fait trois doubles : vous vous dirigez donc vers la prison... \n");
            }
        }
    }

    return SommeDesDes;
}
