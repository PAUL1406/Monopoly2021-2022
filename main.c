#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOMBRE_PROPRIETES 32
#include <windows.h>

void gotoligcol( int lig, int col ) {

// ressources

COORD mycoord;

mycoord.X = col;

mycoord.Y = lig;

SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}

typedef struct Proprietes p;

typedef struct Proprietes
{
        char nomCase[30];
        int position;
        int prix;
        int proprietaire;
        int batiment[5];
        int hypotheque;
        int prixHypotheque;
}t_Proprietes;

 void remplissageCases(t_Proprietes)
{
    /// CASE 0  --- DEPART
    p[0].position = 0;
    strcpy(p[0].nomCase, "DEPART");

    /// CASE 1  --- MERCURE
    p[1].position = 1;
    strcpy(p[1].nomCase, "MERCURE");
    p[1].prix = 60;
    p[1].proprietaire = 0;
    p[1].batiment[0] = 2;
    p[1].batiment[1] = 10;
    p[1].batiment[2] = 30;
    p[1].batiment[3] = 90;
    p[1].batiment[4] = 160;
    p[1].batiment[5] = 250;
    p[1].hypotheque = 0;
    p[1].prixHypotheque = 30;

    /// CASE 2  --- PILLAGE
    p[2].position = 2;
    strcpy(p[2].nomCase, "PILLAGE");
    p[2].prix = 200;

    /// CASE 3  --- VENUS
    p[3].position = 3;
    strcpy(p[3].nomCase, "VENUS");
    p[3].prix = 100;
    p[3].proprietaire = 0;
    p[3].batiment[0] = 6;
    p[3].batiment[1] = 30;
    p[3].batiment[2] = 90;
    p[3].batiment[3] = 270;
    p[3].batiment[4] = 400;
    p[3].batiment[5] = 550;
    p[3].hypotheque = 0;
    p[3].prixHypotheque = 50;

    /// CASE 4 --- SPOUTNIK 1
    p[4].position = 4;
    strcpy(p[4].nomCase, "SPOUTNIK 1");
    p[4].prix = 200;
    p[4].proprietaire = 0;
    p[4].batiment[0] = 25;
    p[4].batiment[1] = 50;
    p[4].batiment[2] = 100;
    p[4].batiment[3] = 200;
    p[4].hypotheque = 0;
    p[4].prixHypotheque = 100;

    /// CASE 5 --- CHARON
    p[5].position = 5;
    strcpy(p[5].nomCase, "CHARON");
    p[5].prix = 100;
    p[5].proprietaire = 0;
    p[5].batiment[0] = 6;
    p[5].batiment[1] = 30;
    p[5].batiment[2] = 90;
    p[5].batiment[3] = 270;
    p[5].batiment[4] = 400;
    p[5].batiment[5] = 550;
    p[5].hypotheque = 0;
    p[5].prixHypotheque = 50;

    /// CASE 6  --- ETOILE
    p[6].position = 6;
    strcpy(p[6].nomCase, "ETOILE");

    /// CASE 7  --- PLUTON
    p[7].position = 7;
    strcpy(p[7].nomCase, "PLUTON");
    p[7].prix = 120;
    p[7].proprietaire = 0;
    p[7].batiment[0] = 8;
    p[7].batiment[1] = 40;
    p[7].batiment[2] = 100;
    p[7].batiment[3] = 300;
    p[7].batiment[4] = 450;
    p[7].batiment[5] = 600;
    p[7].hypotheque = 0;
    p[7].prixHypotheque = 60;

    /// CASE 8  --- SIMPLE VISITE/TROU NOIR
    p[8].position = 8;
    strcpy(p[8].nomCase, "TROU NOIR/SIMPLE VISITE");

    /// CASE 9  --- PHOBOS
    p[9].position = 9;
    strcpy(p[9].nomCase, "PHOBOS");
    p[9].prix = 140;
    p[9].proprietaire = 0;
    p[9].batiment[0] = 10;
    p[9].batiment[1] = 50;
    p[9].batiment[2] = 150;
    p[9].batiment[3] = 450;
    p[9].batiment[4] = 625;
    p[9].batiment[5] = 750;
    p[9].hypotheque = 0;
    p[9].prixHypotheque = 70;

    /// CASE 10 --- CAISSE SPATIALE
    p[10].position = 10;
    strcpy(p[10].nomCase, "CAISSE");

    /// CASE 11 --- MARS
    p[11].position = 11;
    strcpy(p[11].nomCase, "MARS");
    p[11].prix = 160;
    p[11].proprietaire = 0;
    p[11].batiment[0] = 12;
    p[11].batiment[1] = 60;
    p[11].batiment[2] = 180;
    p[11].batiment[3] = 500;
    p[11].batiment[4] = 700;
    p[11].batiment[5] = 900;
    p[11].hypotheque = 0;
    p[11].prixHypotheque = 80;

    /// CASE 12 --- GLORY
    p[12].position = 12;
    strcpy(p[12].nomCase, "GLORY");
    p[12].prix = 160;
    p[12].proprietaire = 0;
    p[12].batiment[0] = 25;
    p[12].batiment[1] = 50;
    p[12].batiment[2] = 100;
    p[12].batiment[3] = 200;
    p[12].hypotheque = 0;
    p[12].prixHypotheque = 100;

    /// CASE 13 --- TRITON
    p[13].position = 13;
    strcpy(p[13].nomCase, "TRITON");
    p[13].prix = 160;
    p[13].proprietaire = 0;
    p[13].batiment[0] = 14;
    p[13].batiment[1] = 70;
    p[13].batiment[2] = 200;
    p[13].batiment[3] = 550;
    p[13].batiment[4] = 750;
    p[13].batiment[5] = 950;
    p[13].hypotheque = 0;
    p[13].prixHypotheque = 90;

    /// CASE 14 --- ETOILE
    p[14].position = 14;
    strcpy(p[14].nomCase, "MARS");

    /// CASE 15 --- NEPTUNE
    p[15].position = 15;
    strcpy(p[15].nomCase, "NEPTUNE");
    p[15].prix = 200;
    p[15].proprietaire = 0;
    p[15].batiment[0] = 16;
    p[15].batiment[1] = 80;
    p[15].batiment[2] = 220;
    p[15].batiment[3] = 600;
    p[15].batiment[4] = 800;
    p[15].batiment[5] = 1000;
    p[15].hypotheque = 0;
    p[15].prixHypotheque = 100;

    /// CASE 16 --- STATION SPATIALE
    p[16].position = 16;
    strcpy(p[16].nomCase, "STATION SPATIALE");

    /// CASE 17 --- UMBRIEL
    p[17].position = 17;
    strcpy(p[17].nomCase, "UMBRIEL");
    p[17].prix = 220;
    p[17].proprietaire = 0;
    p[17].batiment[0] = 18;
    p[17].batiment[1] = 90;
    p[17].batiment[2] = 250;
    p[17].batiment[3] = 700;
    p[17].batiment[4] = 875;
    p[17].batiment[5] = 1050;
    p[17].hypotheque = 0;
    p[17].prixHypotheque = 110;

    /// CASE 18 --- CAISSE SPATIALE
    p[18].position = 18;
    strcpy(p[18].nomCase, "CAISSE");
    // appel du sous-programme caisse spatiale

    /// CASE 19 --- URANUS
    p[19].position = 19;
    strcpy(p[19].nomCase, "URANUS");
    p[19].prix = 240;
    p[19].proprietaire = 0;
    p[19].batiment[0] = 20;
    p[19].batiment[1] = 100;
    p[19].batiment[2] = 300;
    p[19].batiment[3] = 750;
    p[19].batiment[4] = 925;
    p[19].batiment[5] = 1100;
    p[19].hypotheque = 0;
    p[19].prixHypotheque = 120;

    /// CASE 20 --- HUBBLE
    p[20].position = 20;
    strcpy(p[20].nomCase, "HUBBLE");
    p[20].prix = 200;
    p[20].proprietaire = 0;
    p[19].batiment[0] = 25;
    p[19].batiment[1] = 50;
    p[19].batiment[2] = 100;
    p[19].batiment[3] = 200;
    p[19].hypotheque = 0;
    p[19].prixHypotheque = 100;

    /// CASE 21 --- TITAN
    p[21].position = 21;
    strcpy(p[21].nomCase, "TITAN");
    p[21].prix = 260;
    p[21].proprietaire = 0;
    p[21].batiment[0] = 22;
    p[21].batiment[1] = 110;
    p[21].batiment[2] = 330;
    p[21].batiment[3] = 800;
    p[21].batiment[4] = 975;
    p[21].batiment[5] = 1150;
    p[21].hypotheque = 0;
    p[21].prixHypotheque = 130;

    /// CASE 22 --- ETOILE
    p[22].position = 22;
    strcpy(p[22].nomCase, "ETOILE");
    // appel du sous-programme etoile (<=> carte chance)

    /// CASE 23 --- SATURNE
    p[23].position = 23;
    strcpy(p[23].nomCase, "SATURNE");
    p[23].prix = 280;
    p[23].proprietaire = 0;
    p[23].batiment[0] = 24;
    p[23].batiment[1] = 120;
    p[23].batiment[2] = 360;
    p[23].batiment[3] = 850;
    p[23].batiment[4] = 1025;
    p[23].batiment[5] = 1200;
    p[23].hypotheque = 0;
    p[23].prixHypotheque = 140;

    /// CASE 24 --- ASPIRATION
    p[24].position = 24;
    strcpy(p[24].nomCase, "ASPIRATION");
    // appel du sous-programme d'aspiration (<=> case allez en prison)

    /// CASE 25 --- EUROPE
    p[25].position = 25;
    strcpy(p[25].nomCase, "EUROPE");
    p[25].prix = 300;
    p[25].proprietaire = 0;
    p[25].batiment[0] = 26;
    p[25].batiment[1] = 130;
    p[25].batiment[2] = 390;
    p[25].batiment[3] = 900;
    p[25].batiment[4] = 1100;
    p[25].batiment[5] = 1275;
    p[25].hypotheque = 0;
    p[25].prixHypotheque = 150;

    /// CASE 26 --- CAISSE SPATIALE
    p[26].position = 26;
    strcpy(p[26].nomCase, "CAISSE");
    // appel du sous-programme caisse spatiale

    /// CASE 27 --- JUPITER
    p[27].position = 27;
    strcpy(p[27].nomCase, "JUPITER");
    p[27].prix = 320;
    p[27].proprietaire = 0;
    p[27].batiment[0] = 28;
    p[27].batiment[1] = 150;
    p[27].batiment[2] = 450;
    p[27].batiment[3] = 1000;
    p[27].batiment[4] = 1200;
    p[27].batiment[5] = 1400;
    p[27].hypotheque = 0;
    p[27].prixHypotheque = 160;

    /// CASE 28 --- VANGUARD
    p[28].position = 28;
    strcpy(p[28].nomCase, "VANGUARD");
    p[28].prix = 200;
    p[28].proprietaire = 0;
    p[28].batiment[0] = 25;
    p[28].batiment[1] = 50;
    p[28].batiment[2] = 100;
    p[28].batiment[3] = 200;
    p[28].hypotheque = 0;
    p[28].prixHypotheque = 100;

    /// CASE 29 --- LUNE
    p[29].position = 29;
    strcpy(p[29].nomCase, "LUNE");
    p[29].prix = 350;
    p[29].proprietaire = 0;
    p[29].batiment[0] = 35;
    p[29].batiment[1] = 175;
    p[29].batiment[2] = 500;
    p[29].batiment[3] = 1100;
    p[29].batiment[4] = 1300;
    p[29].batiment[5] = 1500;
    p[29].hypotheque = 0;
    p[29].prixHypotheque = 175;

    /// CASE 30 --- ETOILE
    p[30].position = 30;
    strcpy(p[30].nomCase, "ETOILE");
    // appel du sous-programme etoile (<=> carte chance)

    /// CASE 31 --- TERRE
    p[31].position = 31;
    strcpy(p[27].nomCase, "TERRE");
    p[31].prix = 400;
    p[31].proprietaire = 0;
    p[31].batiment[0] = 50;
    p[31].batiment[1] = 200;
    p[31].batiment[2] = 600;
    p[31].batiment[3] = 1400;
    p[31].batiment[4] = 1700;
    p[31].batiment[5] = 2000;
    p[31].hypotheque = 0;
    p[31].prixHypotheque = 200;
}


int main()
{
    remplissageCases();
    return 0;
}
