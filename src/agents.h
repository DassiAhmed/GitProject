#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>



enum
{ NOM_ADMIN=0,
PRENOM_ADMIN,
SEXE_ADMIN,
NUMERO_CIN_ADMIN,
NUMERO_TELEPHONE_ADMIN,
DATE_ADMIN,
NUM_COL_ADMIN
};

typedef struct agents 
{
char nom[20];
char prenom [20];
char sexe [20];
char num_tel [10];
char num_CIN [10] ;
char date[20];

} agents ;

int ajouter_agents(agents a);
void supprimer_agents (char CIN[] );
void modifier_agents(agents a1);
void afficher_agents(GtkWidget *liste) ;
