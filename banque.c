#include <stdio.h>
#include <stdlib.h>

int Banque(int *joueur, int *montant, int position)
{
    if (position == 0)
    {
        montant = montant + 200;
    }

    if ((position == 2) || (position == 17) || (position == 33))
    {
        montant = communaute();
    }

    if ((position == 7) || (position == 22) || (position == 36))
    {
        montant = chance();
    }

    if (position == 4)
    {
        montant = montant - /// montant à définir;
    }

    if (position == 12)
    {
        montant = montant - /// montant à définir;
    }

    if (position == 28)
    {
        montant = montant - /// montant à définir;
    }

    if (position == 38)
    {
        montant = montant - /// montant à définir;
    }
    
    return montant;
}
