void affichageDesProprietes (int position, int occupation)
{
    int reponse;
    if (position == 1)
    {
        printf ("Atterrissage sur Mercure : euros \n");
        printf ("LOYER    Astre nu              2 \n");
        printf ("  -      Avec 1 Maison        10 \n");
        printf ("  -      Avec 2 Maisons       30 \n");
        printf ("  -      Avec 3 Maisons       90 \n");
        printf ("  -      Avec 4 Maisons      160 \n");
        printf ("  -      Avec HOTEL          250 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les   \n");
        printf ("     astres d'un Groupe de       \n");
        printf (" Couleur quelconque, le loyer    \n");
        printf ("  des astres nus de ce groupe    \n");
        printf ("          est double.            \n");

        printf ("\n");
        printf ("      Prix des Maisons :         \n");
        printf ("      50 euros chacune           \n");
        printf ("      Prix d'un Hotel :          \n");
        printf ("   50 euros plus 4 maisons       \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            30 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Mercure coute 60 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 3)
    {
        printf (" Atterrissage sur Venus : euros \n");
        printf (" LOYER    Astre nu            4 \n");
        printf ("   -      Avec 1 Maison      20 \n");
        printf ("   -      Avec 2 Maisons     60 \n");
        printf ("   -      Avec 3 Maisons    180 \n");
        printf ("   -      Avec 4 Maisons    320 \n");
        printf ("   -      Avec HOTEL        450 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les  \n");
        printf ("     astres d'un Groupe de      \n");
        printf (" Couleur quelconque, le loyer   \n");
        printf ("  des astres nus de ce groupe   \n");
        printf ("          est double.           \n");

        printf ("\n");
        printf ("      Prix des Maisons :        \n");
        printf ("      50 euros chacune          \n");
        printf ("      Prix d'un Hotel :         \n");
        printf ("   50 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            30 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Venus coute 60 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 5)
    {
        printf ("  Satellite spatial Spoutnik :   \n");
        printf ("                           euros \n");
        printf ("LOYER                         25 \n");
        printf ("Si vous avec 2 Engins         50 \n");
        printf ("Si vous avec 3 Engins        100 \n");
        printf ("Si vous avec 4 Engins        200 \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'engin : \n");
        printf ("           100 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Spoutnik coute 200 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'engin ?   \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 6)
    {
        printf ("  Atterrissage sur Nix : euros  \n");
        printf ("  LOYER   Astre nu           6  \n");
        printf ("    -     Avec 1 Maison     30  \n");
        printf ("    -     Avec 2 Maisons    90  \n");
        printf ("    -     Avec 3 Maisons   270  \n");
        printf ("    -     Avec 4 Maisons   400  \n");
        printf ("    -     Avec HOTEL       550  \n");

        printf ("\n");
        printf ("  Si un joueur possede TOUS les \n");
        printf ("      astres d'un Groupe de     \n");
        printf ("  Couleur quelconque, le loyer  \n");
        printf ("   des astres nus de ce groupe  \n");
        printf ("           est double.          \n");

        printf ("\n");
        printf ("       Prix des Maisons :       \n");
        printf ("       50 euros chacune         \n");
        printf ("       Prix d'un Hotel :        \n");
        printf ("    50 euros plus 4 maisons     \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            50 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf (" Nix coute 100 euros a l'achat.  \n")
            printf ("Souhaitez-vous acheter l'astre ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 8)
    {
        printf ("Atterrissage sur Charon : euros \n");
        printf ("LOYER    Astre nu             6 \n");
        printf ("  -      Avec 1 Maison       30 \n");
        printf ("  -      Avec 2 Maisons      90 \n");
        printf ("  -      Avec 3 Maisons     270 \n");
        printf ("  -      Avec 4 Maisons     400 \n");
        printf ("  -      Avec HOTEL         550 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les  \n");
        printf ("     astres d'un Groupe de      \n");
        printf (" Couleur quelconque, le loyer   \n");
        printf ("  des astres nus de ce groupe   \n");
        printf ("          est double.           \n");

        printf ("\n");
        printf ("      Prix des Maisons :        \n");
        printf ("      50 euros chacune          \n");
        printf ("      Prix d'un Hotel :         \n");
        printf ("   50 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            50 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Charon coute 100 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 9)
    {
        printf ("Atterrissage sur Pluton : euros \n");
        printf ("LOYER    Astre nu             8 \n");
        printf ("  -      Avec 1 Maison       40 \n");
        printf ("  -      Avec 2 Maisons     100 \n");
        printf ("  -      Avec 3 Maisons     300 \n");
        printf ("  -      Avec 4 Maisons     450 \n");
        printf ("  -      Avec HOTEL         600 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les  \n");
        printf ("     astres d'un Groupe de      \n");
        printf (" Couleur quelconque, le loyer   \n");
        printf ("  des astres nus de ce groupe   \n");
        printf ("          est double.           \n");

        printf ("\n");
        printf ("      Prix des Maisons :        \n");
        printf ("      50 euros chacune          \n");
        printf ("      Prix d'un Hotel :         \n");
        printf ("   50 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            60 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Pluton coute 120 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 11)
    {
        printf ("Atterrissage sur Deinos : euros \n");
        printf ("LOYER    Astre nu            10 \n");
        printf ("  -      Avec 1 Maison       50 \n");
        printf ("  -      Avec 2 Maisons     150 \n");
        printf ("  -      Avec 3 Maisons     450 \n");
        printf ("  -      Avec 4 Maisons     625 \n");
        printf ("  -      Avec HOTEL         750 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les  \n");
        printf ("     astres d'un Groupe de      \n");
        printf (" Couleur quelconque, le loyer   \n");
        printf ("  des astres nus de ce groupe   \n");
        printf ("          est double.           \n");

        printf ("\n");
        printf ("      Prix des Maisons :        \n");
        printf ("      100 euros chacune         \n");
        printf ("      Prix d'un Hotel :         \n");
        printf ("   100 euros plus 4 maisons     \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            70 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Deinos coute 140 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 12)
    {
        printf ("   Compagnie de reparation     \n");
        printf (" Si l'on possede UNE carte de  \n");
        printf ("compagnie de Service Publique, \n");
        printf ("le loyer est 4 fois le montant \n");
        printf ("     indique par les des.      \n");

        printf ("\n");
        printf ("Si l'on possede DEUX cartes de \n");
        printf ("compagnie de Service Publique, \n");
        printf ("   le loyer est 10 fois le     \n");
        printf (" montant indique par les des.  \n");

        printf ("\n");
        printf ("    Valeur Hypothecaire : \n");
        printf ("          75 euros        \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("La compagnie de reparation coute 150 euros a l'achat. \n")
            printf ("        Souhaitez-vous acheter la compagnie ?         \n");
            printf ("        Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 13)
    {
        printf ("Atterrissage sur Phobos : euros \n");
        printf ("LOYER    Astre nu            10 \n");
        printf ("  -      Avec 1 Maison       50 \n");
        printf ("  -      Avec 2 Maisons     150 \n");
        printf ("  -      Avec 3 Maisons     450 \n");
        printf ("  -      Avec 4 Maisons     625 \n");
        printf ("  -      Avec HOTEL         750 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les  \n");
        printf ("     astres d'un Groupe de      \n");
        printf (" Couleur quelconque, le loyer   \n");
        printf ("  des astres nus de ce groupe   \n");
        printf ("          est double.           \n");

        printf ("\n");
        printf ("      Prix des Maisons :        \n");
        printf ("      100 euros chacune         \n");
        printf ("      Prix d'un Hotel :         \n");
        printf ("   100 euros plus 4 maisons     \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            70 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Phobos coute 140 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 14)
    {
        printf (" Atterrissage sur Mars : euros \n");
        printf (" LOYER   Astre nu           12 \n");
        printf ("   -     Avec 1 Maison      60 \n");
        printf ("   -     Avec 2 Maisons    180 \n");
        printf ("   -     Avec 3 Maisons    500 \n");
        printf ("   -     Avec 4 Maisons    700 \n");
        printf ("   -     Avec HOTEL        900 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les \n");
        printf ("     astres d'un Groupe de     \n");
        printf (" Couleur quelconque, le loyer  \n");
        printf ("  des astres nus de ce groupe  \n");
        printf ("          est double.          \n");

        printf ("\n");
        printf ("      Prix des Maisons :       \n");
        printf ("      100 euros chacune        \n");
        printf ("      Prix d'un Hotel :        \n");
        printf ("   100 euros plus 4 maisons    \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            80 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Mars coute 160 euros a l'achat.  \n")
            printf ("Souhaitez-vous acheter l'astre ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 15)
    {
        printf ("   Satellite spatial Glory :   \n");
        printf ("                         euros \n");
        printf (" LOYER                      25 \n");
        printf (" Si vous avec 2 Engins      50 \n");
        printf (" Si vous avec 3 Engins     100 \n");
        printf (" Si vous avec 4 Engins     200 \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'engin : \n");
        printf ("           100 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Glory coute 200 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'engin ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 16)
    {
        printf ("Atterrissage sur Protee : euros \n");
        printf ("LOYER    Astre nu            14 \n");
        printf ("  -      Avec 1 Maison       70 \n");
        printf ("  -      Avec 2 Maisons     200 \n");
        printf ("  -      Avec 3 Maisons     550 \n");
        printf ("  -      Avec 4 Maisons     750 \n");
        printf ("  -      Avec HOTEL         950 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les  \n");
        printf ("     astres d'un Groupe de      \n");
        printf (" Couleur quelconque, le loyer   \n");
        printf ("  des astres nus de ce groupe   \n");
        printf ("          est double.           \n");

        printf ("\n");
        printf ("      Prix des Maisons :        \n");
        printf ("      100 euros chacune         \n");
        printf ("      Prix d'un Hotel :         \n");
        printf ("   100 euros plus 4 maisons     \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            90 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Protee coute 180 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 18)
    {
        printf ("Atterrissage sur Triton : euros \n");
        printf ("LOYER    Astre nu            14 \n");
        printf ("  -      Avec 1 Maison       70 \n");
        printf ("  -      Avec 2 Maisons     200 \n");
        printf ("  -      Avec 3 Maisons     550 \n");
        printf ("  -      Avec 4 Maisons     750 \n");
        printf ("  -      Avec HOTEL         950 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les  \n");
        printf ("     astres d'un Groupe de      \n");
        printf (" Couleur quelconque, le loyer   \n");
        printf ("  des astres nus de ce groupe   \n");
        printf ("          est double.           \n");

        printf ("\n");
        printf ("      Prix des Maisons :        \n");
        printf ("      100 euros chacune         \n");
        printf ("      Prix d'un Hotel :         \n");
        printf ("   100 euros plus 4 maisons     \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("            90 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Triton coute 180 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 19)
    {
        printf ("Atterrissage sur Neptune : euros \n");
        printf ("LOYER     Astre nu            16 \n");
        printf ("  -       Avec 1 Maison       80 \n");
        printf ("  -       Avec 2 Maisons     220 \n");
        printf ("  -       Avec 3 Maisons     600 \n");
        printf ("  -       Avec 4 Maisons     800 \n");
        printf ("  -       Avec HOTEL        1000 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les   \n");
        printf ("     astres d'un Groupe de       \n");
        printf (" Couleur quelconque, le loyer    \n");
        printf ("  des astres nus de ce groupe    \n");
        printf ("          est double.            \n");

        printf ("\n");
        printf ("      Prix des Maisons :         \n");
        printf ("      100 euros chacune          \n");
        printf ("      Prix d'un Hotel :          \n");
        printf ("   100 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           100 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Neptune coute 200 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 21)
    {
        printf ("Atterrissage sur Miranda : euros \n");
        printf ("LOYER     Astre nu            18 \n");
        printf ("  -       Avec 1 Maison       90 \n");
        printf ("  -       Avec 2 Maisons     250 \n");
        printf ("  -       Avec 3 Maisons     700 \n");
        printf ("  -       Avec 4 Maisons     875 \n");
        printf ("  -       Avec HOTEL        1050 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les   \n");
        printf ("     astres d'un Groupe de       \n");
        printf (" Couleur quelconque, le loyer    \n");
        printf ("  des astres nus de ce groupe    \n");
        printf ("          est double.            \n");

        printf ("\n");
        printf ("      Prix des Maisons :         \n");
        printf ("      150 euros chacune          \n");
        printf ("      Prix d'un Hotel :          \n");
        printf ("   150 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           110 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Miranda coute 220 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 23)
    {
        printf ("Atterrissage sur Umbriel : euros \n");
        printf ("LOYER     Astre nu            18 \n");
        printf ("  -       Avec 1 Maison       90 \n");
        printf ("  -       Avec 2 Maisons     250 \n");
        printf ("  -       Avec 3 Maisons     700 \n");
        printf ("  -       Avec 4 Maisons     875 \n");
        printf ("  -       Avec HOTEL        1050 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les   \n");
        printf ("     astres d'un Groupe de       \n");
        printf (" Couleur quelconque, le loyer    \n");
        printf ("  des astres nus de ce groupe    \n");
        printf ("          est double.            \n");

        printf ("\n");
        printf ("      Prix des Maisons :         \n");
        printf ("      150 euros chacune          \n");
        printf ("      Prix d'un Hotel :          \n");
        printf ("   150 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           110 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Umbriel coute 220 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 24)
    {
        printf ("Atterrissage sur Uranus : euros \n");
        printf ("LOYER    Astre nu            20 \n");
        printf ("  -      Avec 1 Maison      100 \n");
        printf ("  -      Avec 2 Maisons     300 \n");
        printf ("  -      Avec 3 Maisons     750 \n");
        printf ("  -      Avec 4 Maisons     925 \n");
        printf ("  -      Avec HOTEL        1100 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les  \n");
        printf ("     astres d'un Groupe de      \n");
        printf (" Couleur quelconque, le loyer   \n");
        printf ("  des astres nus de ce groupe   \n");
        printf ("          est double.           \n");

        printf ("\n");
        printf ("      Prix des Maisons :        \n");
        printf ("      150 euros chacune         \n");
        printf ("      Prix d'un Hotel :         \n");
        printf ("   150 euros plus 4 maisons     \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           120 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Uranus coute 240 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 25)
    {
        printf ("  Telescope spatial Hubble :   \n");
        printf ("                         euros \n");
        printf (" LOYER                      25 \n");
        printf (" Si vous avec 2 Engins      50 \n");
        printf (" Si vous avec 3 Engins     100 \n");
        printf (" Si vous avec 4 Engins     200 \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'engin : \n");
        printf ("           100 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Hubble coute 200 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'engin ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 26)
    {
        printf ("Atterrissage sur Encelade : euros \n");
        printf ("LOYER     Astre nu             22 \n");
        printf ("  -       Avec 1 Maison       110 \n");
        printf ("  -       Avec 2 Maisons      330 \n");
        printf ("  -       Avec 3 Maisons      800 \n");
        printf ("  -       Avec 4 Maisons      975 \n");
        printf ("  -       Avec HOTEL         1150 \n");

        printf ("\n");
        printf ("  Si un joueur possede TOUS les   \n");
        printf ("      astres d'un Groupe de       \n");
        printf ("  Couleur quelconque, le loyer    \n");
        printf ("   des astres nus de ce groupe    \n");
        printf ("           est double.            \n");

        printf ("\n");
        printf ("       Prix des Maisons :         \n");
        printf ("       150 euros chacune          \n");
        printf ("       Prix d'un Hotel :          \n");
        printf ("    150 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre :  \n");
        printf ("           130 euros              \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Encelade coute 260 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 27)
    {
        printf ("Atterrissage sur Titan : euros \n");
        printf ("LOYER    Astre nu           22 \n");
        printf ("  -      Avec 1 Maison     110 \n");
        printf ("  -      Avec 2 Maisons    330 \n");
        printf ("  -      Avec 3 Maisons    800 \n");
        printf ("  -      Avec 4 Maisons    975 \n");
        printf ("  -      Avec HOTEL       1150 \n");

        printf ("\n");
        printf ("Si un joueur possede TOUS les  \n");
        printf ("    astres d'un Groupe de      \n");
        printf ("Couleur quelconque, le loyer   \n");
        printf (" des astres nus de ce groupe   \n");
        printf ("         est double.           \n");

        printf ("\n");
        printf ("     Prix des Maisons :        \n");
        printf ("     150 euros chacune         \n");
        printf ("     Prix d'un Hotel :         \n");
        printf ("  150 euros plus 4 maisons     \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           130 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Titan coute 260 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 28)
    {
        printf ("     Compagnie d'essence       \n");
        printf (" Si l'on possede UNE carte de  \n");
        printf ("compagnie de Service Publique, \n");
        printf ("le loyer est 4 fois le montant \n");
        printf ("     indique par les des.      \n");

        printf ("\n");
        printf ("Si l'on possede DEUX cartes de \n");
        printf ("compagnie de Service Publique, \n");
        printf ("   le loyer est 10 fois le     \n");
        printf (" montant indique par les des.  \n");

        printf ("\n");
        printf ("    Valeur Hypothecaire : \n");
        printf ("          75 euros        \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("La compagnie d'essence coute 150 euros a l'achat. \n")
            printf ("      Souhaitez-vous acheter la compagnie ?       \n");
            printf ("      Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 29)
    {
        printf ("Atterrissage sur Saturne : euros \n");
        printf ("LOYER     Astre nu            24 \n");
        printf ("  -       Avec 1 Maison      120 \n");
        printf ("  -       Avec 2 Maisons     360 \n");
        printf ("  -       Avec 3 Maisons     850 \n");
        printf ("  -       Avec 4 Maisons    1025 \n");
        printf ("  -       Avec HOTEL        1200 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les   \n");
        printf ("     astres d'un Groupe de       \n");
        printf (" Couleur quelconque, le loyer    \n");
        printf ("  des astres nus de ce groupe    \n");
        printf ("          est double.            \n");

        printf ("\n");
        printf ("      Prix des Maisons :         \n");
        printf ("      150 euros chacune          \n");
        printf ("      Prix d'un Hotel :          \n");
        printf ("   150 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           140 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Saturne coute 280 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 31)
    {
        printf ("  Atterrissage sur Io : euros  \n");
        printf ("  LOYER  Astre nu          26  \n");
        printf ("    -    Avec 1 Maison    130  \n");
        printf ("    -    Avec 2 Maisons   390  \n");
        printf ("    -    Avec 3 Maisons   900  \n");
        printf ("    -    Avec 4 Maisons  1100  \n");
        printf ("    -    Avec HOTEL      1275  \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les \n");
        printf ("     astres d'un Groupe de     \n");
        printf (" Couleur quelconque, le loyer  \n");
        printf ("  des astres nus de ce groupe  \n");
        printf ("          est double.          \n");

        printf ("\n");
        printf ("      Prix des Maisons :       \n");
        printf ("      200 euros chacune        \n");
        printf ("      Prix d'un Hotel :        \n");
        printf ("   200 euros plus 4 maisons    \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           150 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf (" Io coute 300 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 32)
    {
        printf ("Atterrissage sur Europe : euros \n");
        printf ("LOYER    Astre nu            26 \n");
        printf ("  -      Avec 1 Maison      130 \n");
        printf ("  -      Avec 2 Maisons     390 \n");
        printf ("  -      Avec 3 Maisons     900 \n");
        printf ("  -      Avec 4 Maisons    1100 \n");
        printf ("  -      Avec HOTEL        1275 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les  \n");
        printf ("     astres d'un Groupe de      \n");
        printf (" Couleur quelconque, le loyer   \n");
        printf ("  des astres nus de ce groupe   \n");
        printf ("          est double.           \n");

        printf ("\n");
        printf ("      Prix des Maisons :        \n");
        printf ("      200 euros chacune         \n");
        printf ("      Prix d'un Hotel :         \n");
        printf ("   200 euros plus 4 maisons     \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           150 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Europe coute 300 euros a l'achat. \n")
            printf ("Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 34)
    {
        printf ("Atterrissage sur Jupiter : euros \n");
        printf ("LOYER    Astre nu             28 \n");
        printf ("  -      Avec 1 Maison       150 \n");
        printf ("  -      Avec 2 Maisons      450 \n");
        printf ("  -      Avec 3 Maisons     1000 \n");
        printf ("  -      Avec 4 Maisons     1200 \n");
        printf ("  -      Avec HOTEL         1400 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les   \n");
        printf ("     astres d'un Groupe de       \n");
        printf (" Couleur quelconque, le loyer    \n");
        printf ("  des astres nus de ce groupe    \n");
        printf ("          est double.            \n");

        printf ("\n");
        printf ("      Prix des Maisons :         \n");
        printf ("      200 euros chacune          \n");
        printf ("      Prix d'un Hotel :          \n");
        printf ("   200 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           160 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Jupiter coute 320 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 35)
    {
        printf (" Satellite spatial Vanguard :    \n");
        printf ("                         euros \n");
        printf (" LOYER                      25 \n");
        printf (" Si vous avec 2 Engins      50 \n");
        printf (" Si vous avec 3 Engins     100 \n");
        printf (" Si vous avec 4 Engins     200 \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'engin : \n");
        printf ("           100 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("Vanguard coute 200 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'engin ? \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 37)
    {
        printf ("Atterrissage sur la Lune : euros \n");
        printf ("LOYER    Astre nu             35 \n");
        printf ("  -      Avec 1 Maison       175 \n");
        printf ("  -      Avec 2 Maisons      500 \n");
        printf ("  -      Avec 3 Maisons     1100 \n");
        printf ("  -      Avec 4 Maisons     1300 \n");
        printf ("  -      Avec HOTEL         1500 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les   \n");
        printf ("     astres d'un Groupe de       \n");
        printf (" Couleur quelconque, le loyer    \n");
        printf ("  des astres nus de ce groupe    \n");
        printf ("          est double.            \n");

        printf ("\n");
        printf ("      Prix des Maisons :         \n");
        printf ("      200 euros chacune          \n");
        printf ("      Prix d'un Hotel :          \n");
        printf ("   200 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           175 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("La Lune coute 350 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }

    if (position == 39)
    {
        printf ("Atterrissage sur la Terre : euros \n");
        printf ("LOYER     Astre nu             50 \n");
        printf ("  -       Avec 1 Maison       200 \n");
        printf ("  -       Avec 2 Maisons      600 \n");
        printf ("  -       Avec 3 Maisons     1400 \n");
        printf ("  -       Avec 4 Maisons     1700 \n");
        printf ("  -       Avec HOTEL         2000 \n");

        printf ("\n");
        printf (" Si un joueur possede TOUS les   \n");
        printf ("     astres d'un Groupe de       \n");
        printf (" Couleur quelconque, le loyer    \n");
        printf ("  des astres nus de ce groupe    \n");
        printf ("          est double.            \n");

        printf ("\n");
        printf ("      Prix des Maisons :         \n");
        printf ("      200 euros chacune          \n");
        printf ("      Prix d'un Hotel :          \n");
        printf ("   200 euros plus 4 maisons      \n");

        printf ("\n");
        printf ("Valeur Hypothecaire de l'astre : \n");
        printf ("           200 euros             \n");

        printf("\n");
        printf("\n");

        /// appel du sous programme d'achat de la case
        if (occupation == 0)
        {
            printf ("La Terre coute 400 euros a l'achat. \n")
            printf (" Souhaitez-vous acheter l'astre ?  \n");
            printf ("Si oui, saisir 1 / Si non, saisir 0 : ");
            scanf ("%d", &reponse);
            if (reponse == 1)
            {
                /// sous programme d'achat
            }
            else
            {
                printf ("Vous avez decide de ne pas acheter l'astre.");
            }
        }

        else
        {
            /// appel du sous programme de paiement + banque
        }
    }
}
