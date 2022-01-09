#include "maBiblio.h"

///Couleur plateau
void Color(int couleurDuTexte,int couleurDeFond) /// fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}


void gotoligcol( int lig, int col ) {

/// ressources

    COORD mycoord;

    mycoord.X = col;

    mycoord.Y = lig;

    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}

void affichagePlateau()
{
    int i,j;
    for (i=0; i<1; ++i){
        for (j=0; j<1; ++j){
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
    for (i=152; i<153; ++i){
        for (j=0; j<1; ++j){
            printf("%c",0xBB);
        }
    }
    for (i=0; i<1 ;++i){
        for (j=1; j<37; ++j){
            printf("\n");
            printf("%c",0xBA);
        }
    }
    for (i=36; i<37; ++i){
        for (j=0; j<1; ++j){
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
    for (i=152; i<153; ++i){
        for (j=36; j<37; ++j){
            printf("%c",0xBC);
        }
    }
    for(i=153;i<154;i++)
    {
        for (j=1;j<37;j++){
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




}
void affichageCases()
{
    //case 1
    Color(15,0);
    Color(10,0);
    gotoligcol(2,5);
    printf("Station");

    //case 2
    Color(15,0);
    gotoligcol(2,23);
    printf("Umbriel");
    Color(4,4);
    for(int a = 18; a<34; a++){
    gotoligcol(1,a);
    printf(" ");
    }

    //case 3
     Color(9,0);
    gotoligcol(2,40);
    printf("Caisse");
    Color(15,0);

    //case 4
    Color(15,0);
    gotoligcol(2,57);
    printf("Uranus");
    Color(4,4);
    for(int a = 52; a<68; a++){
    gotoligcol(1,a);
    printf(" ");
    }
    Color(15,0);
    //case 5
    gotoligcol(2,74);
    printf("Hubble");
    Color(7,7);
    for(int a = 69; a<85; a++){
    gotoligcol(1,a);
    printf(" ");
    }
    Color(15,0);

    //case 6
    gotoligcol(2,91);
    printf("Titan");
    Color(14,14);
    for(int a = 86; a<102; a++){
    gotoligcol(1,a);
    printf(" ");
    }
    Color(15,0);

 //case7
     Color(15,0);
    Color(4,0);
    gotoligcol(2,108);
    printf("Etoile");


    //case 8
    Color(15,0);
    gotoligcol(2,125);
    printf("Saturne");
    Color(14,14);
    for(int a = 120; a<136; a++){
    gotoligcol(1,a);
    printf(" ");
    }
    Color(15,0);

    //case9
    Color(2,0);
    gotoligcol(2,140);
    printf("Aspiration");
    Color(15,0);

    //case 10
    gotoligcol(6,142);
    printf("Europe");
    Color(2,2);
    for(int a =137; a<153; a++){
    gotoligcol(5,a);
    printf(" ");
    }
    Color(15,0);


    //case 11
    Color(9,0);
    gotoligcol(10,142);
    printf("Caisse");
    Color(15,0);


    //case 12
    gotoligcol(14,141);
    printf("Jupiter");
    Color(2,2);
    for(int a = 137; a<153; a++){
    gotoligcol(13,a);
    printf(" ");
    }
    Color(15,0);




    //case 13
    gotoligcol(18,141);
    printf("Vanguard");
    Color(7,7);
    for(int a = 137; a<153; a++){
    gotoligcol(17,a);
    printf(" ");
    }
    Color(15,0);


    //case 14
    Color(15,0);
    gotoligcol(22,142);
    printf("Lune");
    Color(1,1);
    for(int a = 137; a<153; a++){
    gotoligcol(21,a);
    printf(" ");
    }
    Color(15,0);


    //case15
    Color(4,0);
    gotoligcol(26,142);
    printf("Etoile");
        Color(15,0);


    //case 16
    gotoligcol(30,142);
    printf("Terre");
    Color(1,1);
    for(int a = 137; a<153; a++){
    gotoligcol(29,a);
    printf(" ");
    }
    Color(15,0);

    //case 17

    Color(10,0);
    gotoligcol(34,142);
    printf("Depart");
     Color(15,0);

     //case 18
    gotoligcol(34,125);
    printf("Venus");
    Color(8,8);
    for(int a = 120; a<136; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);

    //case 19
    Color(12,0);
    gotoligcol(34,108);
    printf("pillage");
    Color(15,0);

    //case 20
    gotoligcol(34,91);
    printf("Mercure");
    Color(8,8);
    for(int a = 86; a<102; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);

    //case 21
    gotoligcol(34,72);
    printf("Spoutnik 1");
    Color(7,7);
    for(int a = 69; a<85; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);

    //case 22
    gotoligcol(34,57);
    printf("Charon");
    Color(3,3);
    for(int a = 52; a<68; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);



    //case 23
    Color (1,0);
    gotoligcol(34,40);
    printf("Etoile");
    Color(15,0);

    //case 24
    gotoligcol(34,23);
    printf("Pluton");
    Color(3,3);
    for(int a = 18; a<34; a++){
    gotoligcol(33,a);
    printf(" ");
    }
    Color(15,0);

    //case 25
    Color(2,0);
    gotoligcol(34,4);
    printf("Trou Noir");
    Color(15,0);

    //case 26
    gotoligcol(30,6);
    printf("Phobos");
    Color(5,5);
    for(int a = 1; a<17; a++){
    gotoligcol(29,a);
    printf(" ");
    }
    Color(15,0);

     //case 27
     Color(9,0);
    gotoligcol(26,5);
    printf("Caisse");
    Color(15,0);

    //case 28
    gotoligcol(22,6);
    printf("Mars");
    Color(5,5);
    for(int a = 1; a<17; a++){
    gotoligcol(21,a);
    printf(" ");
    }
    Color(15,0);

    //case 29
    gotoligcol(18,5);
    printf("Glory");
    Color(7,7);
    for(int a = 1; a<17; a++){
    gotoligcol(17,a);
    printf(" ");
    }
    Color(15,0);

    //case 30
    gotoligcol(14,5);
    printf("Triton");
    Color(15,15);
    for(int a = 1; a<17; a++){
    gotoligcol(13,a);
    printf(" ");
    }
    Color(15,0);


     //case 31
    Color(4,0);
    gotoligcol(10,5);
    printf("Etoile");
    Color(15,0);


    //case 32
    gotoligcol(6,5);
    printf("Neptune");
    Color(15,15);
    for(int a = 1; a<17; a++){
    gotoligcol(5,a);
    printf(" ");
    }
    Color(15,0);
}
