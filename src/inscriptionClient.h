
#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct Client 
{
char nom[20];
char prenom [20];
char sexe [20];
char  date [20];
char tel [20] ;
char adresse [30];
char mdp [30]; 

} Client ;

int ajouter_Client(Client c);
