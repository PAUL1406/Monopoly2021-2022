#include "maBiblio.h"

int nouvellePos(int positionDepart, int sommeDes){

    int newPosition = positionDepart + sommeDes;

    ///Tour complet du plateau
    if(newPosition >= 32){
        return (newPosition -= 32);
    }
    else {
        return newPosition;
    }
}

void deplacement(Joueur*j, Proprietes prop[31]){

    int i, anciennePos;
  //  printf("%d",j->position);

    anciennePos = j->position;
    j->position = nouvellePos(j->position, lancerDes());

    //printf("%d", j->position);

    ///Comparer position du joueur avec case
    for(i = 0; i <32; i++){

        if(j->position == prop[i].position){

            ///Affichage nom du joueur sur la case correspondante du plateau
            if (j->position == 0)
            {
                gotoligcol(35,144);
                printf("%s", j->pion);
            }
            if (j->position == 1)
            {
                gotoligcol(35,127);
                printf("%s", j->pion);
            }
            if (j->position == 2)
            {
                gotoligcol(35,110);
                printf("%s", j->pion);
            }
            if (j->position == 3)
            {
                gotoligcol(35,93);
                printf("%s", j->pion);
            }
            if (j->position == 4)
            {
                gotoligcol(35,76);
                printf("%s", j->pion);
            }
            if (j->position == 5)
            {
                gotoligcol(35,59);
                printf("%s", j->pion);
            }
            if (j->position == 6)
            {
                gotoligcol(35,42);
                printf("%s", j->pion);
            }
            if (j->position == 7)
            {
                gotoligcol(35,25);
                printf("%s", j->pion);
            }
            if (j->position == 8)
            {
                gotoligcol(35,8);
                printf("%s", j->pion);
            }
            if(j->position == 9)
            {
                gotoligcol(31,8);
                printf("%s", j->pion);
            }
            if (j->position == 10)
            {
                gotoligcol(27,8);
                printf("%s", j->pion);
            }
            if (j->position == 11)
            {
                gotoligcol(23,8);
                printf("%s", j->pion);
            }
            if (j->position == 12)
            {
                gotoligcol(19,8);
                printf("%s", j->pion);
            }
            if (j->position == 13)
            {
                gotoligcol(15,8);
                printf("%s", j->pion);
            }
            if (j->position == 14)
            {
                gotoligcol(11,8);
                printf("%s", j->pion);
            }
            if (j->position == 15)
            {
                gotoligcol(7,8);
                printf("%s", j->pion);
            }
            if (j->position == 16)
            {
                gotoligcol(3,8);
                printf("%s", j->pion);
            }
            if (j->position == 17)
            {
                gotoligcol(3,25);
                printf("%s", j->pion);
            }
            if (j->position == 17)
            {
                gotoligcol(3,25);
                printf("%s", j->pion);
            }
            if (j->position == 18)
            {
                gotoligcol(3,42);
                printf("%s", j->pion);
            }
            if (j->position == 19)
            {
                gotoligcol(3,59);
                printf("%s", j->pion);
            }
            if (j->position == 20)
            {
                gotoligcol(3,76);
                printf("%s", j->pion);
            }
            if (j->position == 21)
            {
                gotoligcol(3,93);
                printf("%s", j->pion);
            }
            if (j->position == 22)
            {
                gotoligcol(3,110);
                printf("%s", j->pion);
            }
            if (j->position == 23)
            {
                gotoligcol(3,127);
                printf("%s", j->pion);
            }
            if (j->position == 24)
            {
                gotoligcol(3,144);
                printf("%s", j->pion);
            }
            if (j->position == 25)
            {
                gotoligcol(7,144);
                printf("%s", j->pion);
            }
            if (j->position == 26)
            {
                gotoligcol(11,144);
                printf("%s", j->pion);
            }
            if (j->position == 27)
            {
                gotoligcol(15,144);
                printf("%s", j->pion);
            }
            if (j->position == 28)
            {
                gotoligcol(19,144);
                printf("%s", j->pion);
            }
            if (j->position == 29)
            {
                gotoligcol(23,144);
                printf("%s", j->pion);
            }
            if (j->position == 30)
            {
                gotoligcol(27,144);
                printf("%s", j->pion);
            }
            if (j->position == 31)
            {
                gotoligcol(31,144);
                printf("%s", j->pion);
            }


            /// Achat ou payement du loyer du joueur
            if(prop[i].proprietaire == false){
                gotoligcol(15,160);
                printf("Cette case est a acheter !\n");
                ///achat(); => prop[i].nameProprietaire = j->pion; et prop[i].proprietaire = true et j.argentJoueur -= prop[i].prix;

            }else if(prop[i].proprietaire == true) {
                gotoligcol(15,160);
                printf("Cette case appartient au joueur %s, vous devez payer un loyer !\n", prop[i].nameProprietaire);
                ///loyer(); => j1.argentJoueur -= prop[i].batiment[?]; et prop[i].nameProprietaire == j2.pion => j2.argentJoueur += prop[i].batiment[?];

            }else {
                printf("coucou\n");
            }

        }
    }

}
