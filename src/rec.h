#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>


enum
{ NOM11,
PRENOM,
NUMERO_CIN,
DATE,
MES,
NUM_COL11
};



typedef struct agentss
{
char nom[20];
char prenom [20];
char num_CIN [10] ;
char date[20];
char mes[77];

} agentss ;


void supprimer_reclamation (char CIN[] );
void afficher_reclamation (GtkWidget *liste) ;
void modifier_reclamation (agentss a1);
