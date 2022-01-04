#include <stdio.h>
#include <stdlib.h>

typedef struct Proprietes Proprietes;

int main()
{
    return 0;
}

struct Proprietes
{
        char nomCase[30];
        char couleur[15];
        int position;
        int prix;
        char proprietaire[30];
        int maisons;
        int hotel;
        bool hypotheque;

};Proprietes

void cases ()
{
    /// CASE 0  --- DEPART
    Proprietes[0].position = 0;
    strcpy(Proprietes[0].nomCase, "DEPART");
    /// programme qui donne 200 lors du passage par cette case ??
           
    /// CASE 17 --- UMBRIEL
    Proprietes[17].position = 17;
    strcpy(Proprietes[17].nomCase, "UMBRIEL");
    Proprietes[17].prix = 220;
    Proprietes[17].proprietaire = NULL;
    Proprietes[17].batiment[0] = 18;
    Proprietes[17].batiment[1] = 90;
    Proprietes[17].batiment[2] = 250;
    Proprietes[17].batiment[3] = 700;
    Proprietes[17].batiment[4] = 875;
    Proprietes[17].batiment[5] = 1050;
    Proprietes[17].hypotheque = 0;
    Proprietes[17].prixHypotheque = 110;

    /// CASE 18 --- CAISSE SPATIALE
    Proprietes[18].position = 18;
    strcpy(Proprietes[18].nomCase, "CAISSE");
    // appel du sous-programme caisse spatiale

    /// CASE 19 --- URANUS
    Proprietes[19].position = 19;
    strcpy(Proprietes[19].nomCase, "URANUS");
    Proprietes[19].prix = 240;
    Proprietes[19].proprietaire = NULL;
    Proprietes[19].batiment[0] = 20;
    Proprietes[19].batiment[1] = 100;
    Proprietes[19].batiment[2] = 300;
    Proprietes[19].batiment[3] = 750;
    Proprietes[19].batiment[4] = 925;
    Proprietes[19].batiment[5] = 1100;
    Proprietes[19].hypotheque = 0;
    Proprietes[19].prixHypotheque = 120;

    /// CASE 20 --- HUBBLE
    Proprietes[20].position = 20;
    strcpy(Proprietes[20].nomCase, "HUBBLE");
    Proprietes[20].prix = 200;
    Proprietes[20].proprietaire = NULL;
    Proprietes[19].batiment[0] = 25;
    Proprietes[19].batiment[1] = 50;
    Proprietes[19].batiment[2] = 100;
    Proprietes[19].batiment[3] = 200;
    Proprietes[19].hypotheque = 0;
    Proprietes[19].prixHypotheque = 100;

    /// CASE 21 --- TITAN
    Proprietes[21].position = 21;
    strcpy(Proprietes[21].nomCase, "TITAN");
    Proprietes[21].prix = 260;
    Proprietes[21].proprietaire = NULL;
    Proprietes[21].batiment[0] = 22;
    Proprietes[21].batiment[1] = 110;
    Proprietes[21].batiment[2] = 330;
    Proprietes[21].batiment[3] = 800;
    Proprietes[21].batiment[4] = 975;
    Proprietes[21].batiment[5] = 1150;
    Proprietes[21].hypotheque = 0;
    Proprietes[21].prixHypotheque = 130;

    /// CASE 22 --- ETOILE
    Proprietes[22].position = 22;
    strcpy(Proprietes[22].nomCase, "ETOILE");
    // appel du sous-programme etoile (<=> carte chance)

    /// CASE 23 --- SATURNE
    Proprietes[23].position = 23;
    strcpy(Proprietes[23].nomCase, "SATURNE");
    Proprietes[23].prix = 280;
    Proprietes[23].proprietaire = NULL;
    Proprietes[23].batiment[0] = 24;
    Proprietes[23].batiment[1] = 120;
    Proprietes[23].batiment[2] = 360;
    Proprietes[23].batiment[3] = 850;
    Proprietes[23].batiment[4] = 1025;
    Proprietes[23].batiment[5] = 1200;
    Proprietes[23].hypotheque = 0;
    Proprietes[23].prixHypotheque = 140;

    /// CASE 24 --- ASPIRATION
    Proprietes[24].position = 24;
    strcpy(Proprietes[24].nomCase, "ASPIRATION");
    // appel du sous-programme d'aspiration (<=> case allez en prison)

    /// CASE 25 --- EUROPE
    Proprietes[25].position = 25;
    strcpy(Proprietes[25].nomCase, "EUROPE");
    Proprietes[25].prix = 300;
    Proprietes[25].proprietaire = NULL;
    Proprietes[25].batiment[0] = 26;
    Proprietes[25].batiment[1] = 130;
    Proprietes[25].batiment[2] = 390;
    Proprietes[25].batiment[3] = 900;
    Proprietes[25].batiment[4] = 1100;
    Proprietes[25].batiment[5] = 1275;
    Proprietes[25].hypotheque = 0;
    Proprietes[25].prixHypotheque = 150;

    /// CASE 26 --- CAISSE SPATIALE
    Proprietes[26].position = 26;
    strcpy(Proprietes[26].nomCase, "CAISSE");
    // appel du sous-programme caisse spatiale

    /// CASE 27 --- JUPITER
    Proprietes[27].position = 27;
    strcpy(Proprietes[27].nomCase, "JUPITER");
    Proprietes[27].prix = 320;
    Proprietes[27].proprietaire = NULL;
    Proprietes[27].batiment[0] = 28;
    Proprietes[27].batiment[1] = 150;
    Proprietes[27].batiment[2] = 450;
    Proprietes[27].batiment[3] = 1000;
    Proprietes[27].batiment[4] = 1200;
    Proprietes[27].batiment[5] = 1400;
    Proprietes[27].hypotheque = 0;
    Proprietes[27].prixHypotheque = 160;

    /// CASE 28 --- VANGUARD
    Proprietes[28].position = 28;
    strcpy(Proprietes[28].nomCase, "VANGUARD");
    Proprietes[28].prix = 200;
    Proprietes[28].proprietaire = NULL;
    Proprietes[28].batiment[0] = 25;
    Proprietes[28].batiment[1] = 50;
    Proprietes[28].batiment[2] = 100;
    Proprietes[28].batiment[3] = 200;
    Proprietes[28].hypotheque = 0;
    Proprietes[28].prixHypotheque = 100;

    /// CASE 29 --- LUNE
    Proprietes[29].position = 29;
    strcpy(Proprietes[29].nomCase, "LUNE");
    Proprietes[29].prix = 350;
    Proprietes[29].proprietaire = NULL;
    Proprietes[29].batiment[0] = 35;
    Proprietes[29].batiment[1] = 175;
    Proprietes[29].batiment[2] = 500;
    Proprietes[29].batiment[3] = 1100;
    Proprietes[29].batiment[4] = 1300;
    Proprietes[29].batiment[5] = 1500;
    Proprietes[29].hypotheque = 0;
    Proprietes[29].prixHypotheque = 175;

    /// CASE 30 --- ETOILE
    Proprietes[30].position = 30;
    strcpy(Proprietes[30].nomCase, "ETOILE");
    // appel du sous-programme etoile (<=> carte chance)

    /// CASE 31 --- TERRE
    Proprietes[31].position = 31;
    strcpy(Proprietes[27].nomCase, "TERRE");
    Proprietes[31].prix = 400;
    Proprietes[31].proprietaire = NULL;
    Proprietes[31].batiment[0] = 50;
    Proprietes[31].batiment[1] = 200;
    Proprietes[31].batiment[2] = 600;
    Proprietes[31].batiment[3] = 1400;
    Proprietes[31].batiment[4] = 1700;
    Proprietes[31].batiment[5] = 2000;
    Proprietes[31].hypotheque = 0;
    Proprietes[31].prixHypotheque = 200;
}
