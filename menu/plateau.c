#include "maBiblio.h"

/// Fonction pour l'affichage des couleurs du plateau
void Color(int couleurDuTexte,int couleurDeFond)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

/// ressources
void gotoligcol(int ligne, int colonne )
{
    COORD mycoord;

    mycoord.X = colonne;

    mycoord.Y = ligne;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), mycoord);
}

void affichagePlateau()
{
    int i,j;

    for (i=0; i<1; ++i)
    {
        for (j=0; j<1; ++j)
        {
            printf("%c",0xC9);
        }
    }

    for(i=1;i<153;i++)
    {
        for(j=0;j<1;j++)
            {
                printf("%c",0xCD);
            }
    }

    for (i=152; i<153; ++i)
    {
        for (j=0; j<1; ++j)
        {
            printf("%c",0xBB);
        }
    }

    for (i=0; i<1 ;++i)
    {
        for (j=1; j<37; ++j)
        {
            printf("\n");
            printf("%c",0xBA);
        }
    }

    for (i=36; i<37; ++i)
    {
        for (j=0; j<1; ++j)
        {
            printf("\n");
            printf("%c",0xC8);
        }
    }

    for(i=1;i<153;i++)
    {
        for(j=36;j<37;j++)
        {
            printf("%c",0xCD);
        }
    }

    for (i=152; i<153; ++i)
    {
        for (j=36; j<37; ++j)
        {
            printf("%c",0xBC);
        }
    }

    for(i=153;i<154;i++)
    {
        for (j=1;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=17;i<18;i++)
    {
        for (j=1;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=136;i<137;i++)
    {
        for (j=1;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=1;i<153;i++)
    {
        for (j=4;j<5;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=1;i<153;i++)
    {
        for (j=32;j<33;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=1;i<17;i++)
    {
        for (j=8;j<9;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=1;i<17;i++)
    {
        for (j=12;j<13;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=1;i<17;i++)
    {
        for (j=16;j<17;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=1;i<17;i++)
    {
        for (j=20;j<21;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=1;i<17;i++)
    {
        for (j=24;j<25;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=1;i<17;i++)
    {
        for (j=28;j<29;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=137;i<153;i++)
    {
        for (j=8;j<9;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=137;i<153;i++)
    {
        for (j=12;j<13;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=137;i<153;i++)
    {
        for (j=16;j<17;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=137;i<153;i++)
    {
        for (j=20;j<21;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=137;i<153;i++)
    {
        for (j=24;j<25;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=137;i<153;i++)
    {
        for (j=28;j<29;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xCD);
        }
    }

    for (i=34;i<35;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=51;i<52;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=68;i<69;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=85;i<86;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=102;i<103;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=119;i<120;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=51;i<52;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=68;i<69;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=85;i<86;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=102;i<103;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }

    for (i=119;i<120;i++)
    {
        for (j=1;j<4;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }

        for(j=33;j<37;j++)
        {
            gotoligcol(j,i);
            printf("%c", 0xBA);
        }
    }
}
void affichageCases()
{
    /// Case 0  --- DEPART
    Color(10,0);
    gotoligcol(34,142);
    printf("DEPART");
    Color(15,0);

    /// Case 1  --- MERCURE
    gotoligcol(34,125);
    printf("MERCURE");
    Color(8,8);
    for(int a = 120; a<136; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 2  --- PILLAGE
    Color(12,0);
    gotoligcol(34,108);
    printf("PILLAGE");
    Color(15,0);

    /// Case 3  --- VENUS
    gotoligcol(34,91);
    printf("VENUS");
    Color(8,8);
    for(int a = 86; a<102; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 4  --- SPOUTNIK 1
    gotoligcol(34,72);
    printf("SPOUTNIK 1");
    Color(7,7);
    for(int a = 69; a<85; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 5  --- CHARON
    gotoligcol(34,57);
    printf("CHARON");
    Color(3,3);
    for(int a = 52; a<68; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 6  --- ETOILE
    Color (1,0);
    gotoligcol(34,40);
    printf("ETOILE");
    Color(15,0);

    /// Case 7  --- PLUTON
    gotoligcol(34,23);
    printf("PLUTON");
    Color(3,3);
    for(int a = 18; a<34; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 8  --- TROU NOIR
    Color(2,0);
    gotoligcol(34,4);
    printf("TROU NOIR");
    Color(15,0);

    /// Case 9  --- PHOBOS
    gotoligcol(30,6);
    printf("Phobos");
    Color(5,5);
    for(int a = 1; a<17; a++){
    gotoligcol(29,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 10 --- CAISSE
    Color(9,0);
    gotoligcol(26,5);
    printf("CAISSE");
    Color(15,0);

    /// Case 11 --- MARS
    gotoligcol(22,6);
    printf("MARS");
    Color(5,5);
    for(int a = 1; a<17; a++){
    gotoligcol(21,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 12 --- GLORY
    gotoligcol(18,5);
    printf("GLORY");
    Color(7,7);
    for(int a = 1; a<17; a++){
    gotoligcol(17,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 13 --- TRITON
    gotoligcol(14,5);
    printf("TRITON");
    Color(6,6);
    for(int a = 1; a<17; a++){
    gotoligcol(13,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 14 --- ETOILE
    Color(4,0);
    gotoligcol(10,5);
    printf("ETOILE");
    Color(15,0);

    /// Case 15  --- NEPTUNE
    gotoligcol(6,5);
    printf("NEPTUNE");
    Color(6,6);
    for(int a = 1; a<17; a++){
    gotoligcol(5,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 16 --- STATION
    Color(15,0);
    Color(10,0);
    gotoligcol(2,5);
    printf("STATION");

    /// Case 17 --- UMBRIEL
    Color(15,0);
    gotoligcol(2,23);
    printf("UMBRIEL");
    Color(4,4);
    for(int a = 18; a<34; a++){
    gotoligcol(1,a);
    printf(" ");
    }

    /// Case 18 --- CAISSE
     Color(9,0);
    gotoligcol(2,40);
    printf("CAISSE");
    Color(15,0);

    /// Case 19 --- URANUS
    Color(15,0);
    gotoligcol(2,57);
    printf("URANUS");
    Color(4,4);
    for(int a = 52; a<68; a++){
    gotoligcol(1,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 20 --- HUBBLE
    gotoligcol(2,74);
    printf("HUBBLE");
    Color(7,7);
    for(int a = 69; a<85; a++){
    gotoligcol(1,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 21 --- TITAN
    gotoligcol(2,91);
    printf("TITAN");
    Color(14,14);
    for(int a = 86; a<102; a++){
    gotoligcol(1,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 22 --- ETOILE
    Color(4,0);
    gotoligcol(2,108);
    printf("ETOILE");
    Color(15,0);

    /// Case 23 --- SATURNE
    Color(15,0);
    gotoligcol(2,125);
    printf("SATURNE");
    Color(14,14);
    for(int a = 120; a<136; a++){
    gotoligcol(1,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 24 --- ASPIRATION
    Color(2,0);
    gotoligcol(2,140);
    printf("ASPIRATION");
    Color(15,0);

    /// Case 25 --- EUROPE
    gotoligcol(6,142);
    printf("EUROPE");
    Color(2,2);
    for(int a =137; a<153; a++){
    gotoligcol(5,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 26 --- CAISSE
    Color(9,0);
    gotoligcol(10,142);
    printf("CAISSE");
    Color(15,0);

    /// Case 27 --- JUPITER
    gotoligcol(14,141);
    printf("JUPITER");
    Color(2,2);
    for(int a = 137; a<153; a++){
    gotoligcol(13,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 28 --- VANGUARD
    gotoligcol(18,141);
    printf("VANGUARD");
    Color(7,7);
    for(int a = 137; a<153; a++){
    gotoligcol(17,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 29 --- LUNE
    Color(15,0);
    gotoligcol(22,142);
    printf("LUNE");
    Color(1,1);
    for(int a = 137; a<153; a++){
    gotoligcol(21,a);
    printf(" ");
    }
    Color(15,0);

    /// Case 30 --- ETOILE
    Color(4,0);
    gotoligcol(26,142);
    printf("ETOILE");
    Color(15,0);

    /// Case 31 --- TERRE
    gotoligcol(30,142);
    printf("TERRE");
    Color(1,1);
    for(int a = 137; a<153; a++){
    gotoligcol(29,a);
    printf(" ");
    }
    Color(15,0);
}
