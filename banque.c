#include <stdio.h>
#include <stdlib.h>

void banque(int *joueur, int *montant, int *position, int *trouNoir)
{

    if (position == 0) /// Si le joueur s'arrête sur la case départ
    {
        montant = montant + 200;
    }

    if ((position == 10) || (position == 18) || (position == 26)) /// Si le joueur tombe sur une case caisse de communauté
    {
        communaute(joueur, montant, position, trouNoir);
    }

    if ((position == 6) || (position == 14) || (position == 22)) /// Si le joueur tombe sur une case chance
    {
        chance(joueur, montant, position, trouNoir, maison, hotel);
    }

    /// Si le joueur tombe sur une case de taxe :
    if (position == 2)
    {
        printf ("Vous vous faites piller. Vous payez 100 euros. \n");
        montant = montant - 200;
    }
}
