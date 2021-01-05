#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inscriptionClient.h"


int ajouter_Client(Client c1){
Client c;
FILE *f;
int found=0;

f=fopen("client.txt","a") ;

if(f!=NULL) {
while (fscanf(f,"%s %s %s %s %s %s %s\n",c.nom,c.prenom,c.sexe,c.date,c.tel,c.adresse,c.mdp)!=EOF) {
if (strcmp(c.tel ,c1.tel)==0) 
{
found=1;
break;
}
}}
if (found==0){
fprintf(f,"%s %s %s %s %s %s %s \n",c1.nom,c1.prenom,c1.sexe,c1.date,c1.tel,c1.adresse,c1.mdp) ;
fclose(f);
return 1;
}

return 0;
}

