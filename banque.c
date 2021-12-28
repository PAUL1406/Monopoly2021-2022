#include <stdio.h>
#include <stdlib.h>

void Banque(int *joueur, int *montant, int position)
{
    if (position == 0)
    {
        montant = montant + 200;
    }

    if ((position == 2) || (position == 17))
    {
        montant = communaute();
    }

    if ((position == 7) || (position == 22))
    {
        montant = chance();
    }
}
