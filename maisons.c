#include "maBiblio.h"

void achatMaison (Joueur *joueur, Proprietes prop[31]){

    char nomProp[30];
    int i, nbM = 0;

    gotoligcol(10, 160);
    printf("Indiquer le nom de la propriete concernee");
    gotoligcol(11, 160);
    fgets(nomProp, 30, stdin);
    printf("%s", nomProp);

    for(i = 0; i<32; i++){
        if((nomProp == prop[i].nomCase )&& (prop[i].nameProprietaire == joueur->pion)){
            gotoligcol(12, 160);
            printf("Vous avez %d maisons", prop[i].nbMaisons);
            do{
                gotoligcol(13, 160);
                printf("Combien voulez-vous en acheter ?");
                scanf("%d", &nbM);
                fflush(stdin);
            }while(nbM < 0 || nbM+prop[i].nbMaisons > 5);
            if(joueur->argentJoueur < nbM*100){
                gotoligcol(14, 160);
                printf("Vous n'avez pas assez d'argent !");
            }
            else {
                joueur->argentJoueur -= nbM*100;
                prop[i].nbMaisons += nbM;
            }
        } else {
        gotoligcol(12, 160);
        printf("Vous avez aucune propriete");
        }
    }

}
