#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int LancerDesDes(int *compteur, Joueur* j)
{
    int de1;
    int de2;
    int min = 1;
    int max = 6;
    int SommeDesDes;

    /// affectation d'un nombre al�atoire compris entre 1 et 6
    de1 = rand()%(max - min + 1) + min;
    de2 = rand()%(max - min + 1) + min;
    /// somme des d�s
    SommeDesDes = de1 + de2;
    /// affichage des valeurs des 2 d�s et de l'avancement
    printf ("Le resultat du premier de est : %d. \n", de1);
    printf ("Le resultat du deuxieme de est : %d. \n", de2);
    printf ("Vous avancez de %d cases. \n", SommeDesDes);
    ///LE JOUEUR JOUE

    /// 1er DOUBLE le joueur rejoue
    if (de1 == de2){
        *compteur = *compteur + 1;
        printf("DOUBLE ! JOUEZ ET ENSUITE VOUS POURREZ RELANCER LES DES ET REJOUER\n\n");
        de1 = rand()%(max - min + 1) + min;
        de2 = rand()%(max - min + 1) + min;
        SommeDesDes = de1 + de2;
        printf ("Le resultat du premier de est : %d. \n", de1);
        printf ("Le resultat du deuxieme de est : %d. \n", de2);
        printf ("Vous avancez de %d cases. \n", SommeDesDes);
        ///LE JOUEUR JOUE

         /// 2eme DOUBLE le joueur rejoue
        if (de1 == de2){
            *compteur = *compteur + 1;
            printf("DOUBLE ! JOUEZ ET ENSUITE VOUS POURREZ RELANCER LES DES ET REJOUER\n\n");
            de1 = rand()%(max - min + 1) + min;
            de2 = rand()%(max - min + 1) + min;
            SommeDesDes = de1 + de2;
            printf ("Le resultat du premier de est : %d. \n", de1);
            printf ("Le resultat du deuxieme de est : %d. \n", de2);
            printf ("Vous avancez de %d cases. \n", SommeDesDes);
            ///LE JOUEUR JOUE

              ///TROU NOIR (=PRISON) SI LE JOUEUR REFAIT UN DOUBLE
            if (*compteur == 3)
                {
                *compteur = 0;
                SommeDesDes = 0;
                printf ("ENCORE DOUBLE!\t Vous etes aspire par un trou noir...");
                ///positionne le joueur sur la case trou noir
                j->position=8;
                }
        }
    }
    return SommeDesDes;
}

int main()
{
    srand (time(NULL));
    int cpt = 0;
    int position = 0;
    position = LancerDesDes(&cpt);
    if (cpt != 0){
        printf("%d \n", cpt);
    }
    return 0;
}




