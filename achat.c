#include "maBiblio.h"

int achatP(int jArgent, char jNom[20], Proprietes *achatProp)
{

    int choixAchat = 0;

    gotoligcol(18,160);
    printf ("Atterrissage sur %s ", achatProp->nomCase);
    gotoligcol(19,160);
    printf("prix d'achat : %d euros", achatProp->prix);
    gotoligcol(20,160);
    printf ("LOYER    Astre nu: %d euros", achatProp->batiment[0]);
    gotoligcol(21,160);
    printf ("  -      Avec 1 Maison:   %d euros", achatProp->batiment[1]);
    gotoligcol(22,160);
    printf ("  -      Avec 2 Maisons:  %d euros", achatProp->batiment[2]);
    gotoligcol(23,160);
    printf ("  -      Avec 3 Maisons:  %d euros", achatProp->batiment[3]);
    gotoligcol(24,160);
    printf ("  -      Avec 4 Maisons:  %d euros", achatProp->batiment[4]);
    gotoligcol(25,160);
    printf ("  -      Avec HOTEL:      %d euros", achatProp->batiment[5]);
    gotoligcol(26,160);
    printf ("Valeur hypotheque: %d euros",achatProp->prixHypotheque);

    do{
        gotoligcol(28,160);
        printf("Voulez vous l'acheter? ");
        gotoligcol(29,160);
        printf("1) Oui\t 2) Non");
        gotoligcol(30,160);
        scanf("%d",&choixAchat);
        fflush(stdin);
        }while (choixAchat<1||choixAchat>2);

    if (choixAchat ==1)
    {

        if (jArgent>=achatProp->prix)
        {
            strcpy(achatProp->nameProprietaire, jNom);
            achatProp->proprietaire=0;
            jArgent-=achatProp->prix;
            gotoligcol(31, 160);
            printf("Il vous reste : %d euros", jArgent);
            return (jArgent);
        }
        else
        {
            gotoligcol(31,160);
            printf("Vous n'avez pas assez d'argent :%d", jArgent);
            return (jArgent);
        }
    }
    else
    {
        return (jArgent);
    }

}
