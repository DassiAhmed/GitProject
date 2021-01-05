
#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>


/*
enum
{ NOM,
NBRETOILE,
PAYS,
NBRCHBRE,
PRIXCHAMBRE,
ARRIVEE,
DEPART,
NUM_COL
};*/

enum
{ NOM_hotel_agent,
NBRETOILE_hotel_agent,
PAYS_hotel_agent,
NBRCHBRE_hotel_agent,
PRIXCHAMBRE_hotel_agent,
ARRIVEE_hotel_agent,
DEPART_hotel_agent,
NUM_COL_a
};






typedef struct hotel 
{
char nomHotel_agent[20];
char nbrChambres_agent [20];
char pays_agent [20];
char  nbrEtoiles_agent [10];
char prix_agent [10] ;
char arrivee_agent [30];
char depart_agent [30]; 


} hotel ;


void affichage_Hotels (GtkWidget *treeview3);
int ajouter_Hotel(hotel h);
void supprimer_hotel (char nomHotel1[]);
void modifier_hotel (hotel h1);
void rechercher_hotel (hotel h2);
