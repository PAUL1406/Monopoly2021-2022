#include "maBiblio.h"

void affichageRegle()
{
    signed char phrase[200];
    FILE*demo = fopen("regle.txt", "r");
    if (demo == NULL)
    {
        printf("ERREUR");
    }
    for(int i=0; i<180; i++)
     {
        if(fgets(phrase, 200, demo) != NULL)
            printf("%s", phrase);
     }
    fclose(demo);
}
