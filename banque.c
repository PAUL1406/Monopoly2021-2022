#include <stdio.h>
#include <stdlib.h>

void banque(int *joueur, int *montant, int *position, int *trouNoir)
{

    if (position == 0) /// Si le joueur s'arrête sur la case départ
    {
        montant = montant + 200;
    }

    if ((position == 2) || (position == 17) || (position == 33)) /// Si le joueur tombe sur une case caisse de communauté
    {
        communaute(joueur, montant, position, trouNoir);
    }

    if ((position == 7) || (position == 22) || (position == 36)) /// Si le joueur tombe sur une case chance
    {
        chance(joueur, montant, position, trouNoir, maison, hotel);
    }

    /// Si le joueur tombe sur une case de taxe :
    if (position == 4)
    {
        printf ("Vous passez par un peage. Vous payez 200 euros. \n");
        montant = montant - 200;
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
        printf ("Vous vous faites piller. Vous payez 100 euros. \n");
        montant = montant - 100;
    }
}
