#include <gtk/gtk.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Hotels.h"
#include <interface.h>

//#include "enums.h"
void affichage_Hotels (GtkWidget *treeview3) {

GtkCellRenderer *renderer ;
GtkTreeViewColumn *column ;
GtkTreeIter iter ;
GtkListStore *store ;


char nom_h_agent[20];
char nbrChambres_h_agent [20];
char pays_h_agent [20];
char  nbrEtoiles_h_agent [10];
char prix_h_agent [10] ;
char arrivee_h_agent [30];
char depart_h_agent [30]; 



FILE *f ;
store =NULL ;
store=gtk_tree_view_get_model(treeview3);
if (store == NULL)
{
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Capteur",renderer,"text",NOM_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("équipements agricoles.",renderer,"text",PAYS_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Marque",renderer,"text",NBRETOILE_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Prix",renderer,"text",NBRCHBRE_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Quantité",renderer,"text",PRIXCHAMBRE_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
	    
             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Fonction",renderer,"text",ARRIVEE_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

	     renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Date-d-achat",renderer,"text",DEPART_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
}


store =gtk_list_store_new(NUM_COL_a,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING ,G_TYPE_STRING ,G_TYPE_STRING ,G_TYPE_STRING );



            f=fopen("capteur.txt","r");
            if (f!=NULL){
		while (fscanf(f,"%s %s %s %s %s %s %s",nom_h_agent,pays_h_agent,nbrEtoiles_h_agent,nbrChambres_h_agent,prix_h_agent,arrivee_h_agent,depart_h_agent)!=EOF) {
            gtk_list_store_append(store,&iter);
            gtk_list_store_set
            (store,&iter,NOM_hotel_agent,nom_h_agent,PAYS_hotel_agent,pays_h_agent,NBRETOILE_hotel_agent,nbrEtoiles_h_agent,NBRCHBRE_hotel_agent,nbrChambres_h_agent,PRIXCHAMBRE_hotel_agent,prix_h_agent,ARRIVEE_hotel_agent,arrivee_h_agent,DEPART_hotel_agent,depart_h_agent,-1);
		}
		}
		fclose(f);
            gtk_tree_view_set_model(GTK_TREE_VIEW(treeview3),GTK_TREE_MODEL(store));
            g_object_unref(store);
	    
}

int ajouter_Hotel(hotel h1) {
hotel h;
FILE * f;
 int found=0;

f=fopen("capteur.txt","a+") ;
if(f!=NULL) {
while (fscanf(f,"%s %s %s %s %s %s %s\n",h.nomHotel_agent,h.nbrEtoiles_agent,h.pays_agent,h.nbrChambres_agent,h.prix_agent,h.arrivee_agent,h.depart_agent)!=EOF) {
if (strcmp(h.nomHotel_agent ,h1.nomHotel_agent)==0) 
{
found=1;
return 0;

}
}}
if (found==0){
fprintf(f,"%s %s %s %s %s %s %s\n",h1.nomHotel_agent,h1.pays_agent,h1.nbrEtoiles_agent,h1.nbrChambres_agent,h1.prix_agent,h1.arrivee_agent,h1.depart_agent) ;
fclose(f);
return 1;
}

return 0;
}




/*int ajouter_Hotel(hotel h1) {
hotel h;
FILE * f;
 int found=0;

f=fopen("capteur.txt","a+") ;
if(f!=NULL) {
while (fscanf(f,"%s %s %s %s %s %s %s\n",h.nomHotel,h.nbrEtoiles,h.pays,h.nbrChambres,h.prix,h.arrivee,h.depart)!=EOF) {
if (strcmp(h1.nomHotel ,h.nomHotel)==0) return 0;
if (strcmp(h1.nomHotel ,h.nomHotel)!=0)
{

fprintf(f,"%s %s %s %s %s %s %s\n",h1.nomHotel,h1.pays,h1.nbrEtoiles,h1.nbrChambres,h1.prix,h1.arrivee,h1.depart) ;
fclose(f);
return 1;
}

}

}


return 0;
}

*/
void modifier_hotel (hotel h1)
{
hotel h;
FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("capteur.txt","r+");
f1=fopen("hotel1.txt","a+");
if (f!= NULL)
{
while (fscanf(f," %s %s %s %s %s %s %s",h.nomHotel_agent,h.nbrEtoiles_agent,h.pays_agent,h.nbrChambres_agent,h.prix_agent,h.arrivee_agent,h.depart_agent)!=EOF) {
if (strcmp(h1.nomHotel_agent ,h.nomHotel_agent)==0)
{
fprintf(f1,"%s %s %s %s %s %s %s\n",h1.nomHotel_agent,h1.pays_agent,h1.nbrEtoiles_agent,h1.nbrChambres_agent,h1.prix_agent,h1.arrivee_agent,h1.depart_agent) ;
}
else
fprintf(f1,"%s %s %s %s %s %s %s\n",h.nomHotel_agent,h.nbrEtoiles_agent,h.pays_agent,h.nbrChambres_agent,h.prix_agent,h.arrivee_agent,h.depart_agent) ;
}
fclose(f1);
fclose(f);
remove("capteur.txt");
rename ("hotel1.txt","capteur.txt");
}
}




void supprimer_hotel (char nomHotel1[]){


hotel h;
FILE *f;
FILE *f1 ;
f1 =NULL;
f=fopen("capteur.txt","r") ;
f1=fopen("hotel1.txt","a");
if (f!= NULL)
{

while (fscanf(f,"%s %s %s %s %s %s %s\n",h.nomHotel_agent,h.nbrEtoiles_agent,h.pays_agent,h.nbrChambres_agent,h.prix_agent,h.arrivee_agent,h.depart_agent)!=EOF) {
if (strcmp(nomHotel1 ,h.nomHotel_agent)!=0)
{


fprintf(f1,"%s %s %s %s %s %s %s\n",h.nomHotel_agent,h.nbrEtoiles_agent,h.pays_agent,h.nbrChambres_agent,h.prix_agent,h.arrivee_agent,h.depart_agent);

}
}
}


fclose(f);
fclose(f1);
remove("capteur.txt");
rename("hotel1.txt","capteur.txt");

}

void rechercher_hotel_par_agent (GtkWidget *treeview2,char t[]) {

GtkCellRenderer *renderer ;
GtkTreeViewColumn *column ;
GtkTreeIter iter ;
GtkListStore *store ;
/*GtkWidget *objet_graphique;*/
hotel h;
char nom [100];
char pays[100] ;
char nbr_etoiles [10];
char nbr_chambres [10];
char prix [10];
char arrivee [12];
char depart [12]; 


/*char nomh[100];
char paysh[100] ;
char nbr_etoilesh [10];
char nbr_chambresh [10];
char prixh [10];
char arriveeh [12];
char departh [12];*/
FILE *f ;
store =NULL ;
store=gtk_tree_view_get_model(treeview2);
if (store == NULL)
{
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("nom",renderer,"text",NOM_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("pays",renderer,"text",PAYS_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("nbr_etoiles",renderer,"text",NBRETOILE_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("nbr_chambres",renderer,"text",NBRCHBRE_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("prix",renderer,"text",PRIXCHAMBRE_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);
	    
             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("arrivee",renderer,"text",ARRIVEE_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

	     renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("depart",renderer,"text",DEPART_hotel_agent,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);
}


store =gtk_list_store_new(NUM_COL_a,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING ,G_TYPE_STRING ,G_TYPE_STRING ,G_TYPE_STRING );



	f = fopen("capteur.txt", "r");
	
   	if (f!=NULL)
{
     while (fscanf(f,"%s %s %s %s %s %s %s",nom,pays,nbr_etoiles,nbr_chambres,prix,arrivee,depart)!=EOF)
{ 	
	if ((strcmp(nom,t)==0))
{
gtk_list_store_append (store, &iter);
  gtk_list_store_set
            (store,&iter,NOM_hotel_agent,nom,NBRETOILE_hotel_agent,nbr_etoiles,PAYS_hotel_agent,pays,NBRCHBRE_hotel_agent,nbr_chambres,PRIXCHAMBRE_hotel_agent,prix,ARRIVEE_hotel_agent,arrivee,DEPART_hotel_agent,depart-1);
}
}
fclose(f);
   gtk_tree_view_set_model (GTK_TREE_VIEW (treeview2),GTK_TREE_MODEL (store));
   g_object_unref (store);
}}




/*

            f=fopen("capteur.txt","r");
            if (f!=NULL){
		while (fscanf(f,"%s %s %s %s %s %s %s",nom,pays,nbr_etoiles,nbr_chambres,prix,arrivee,depart)!=EOF) {	
		if (strcmp(nomh, nom)!=0)
{
            gtk_list_store_append(store,&iter);
            gtk_list_store_set
            (store,&iter,NOM,nom,PAYS,pays,NBRETOILE,nbr_etoiles,NBRCHBRE,nbr_chambres,PRIXCHAMBRE,prix,ARRIVEE,arrivee,DEPART,depart,-1);
		}
		}
}
else printf(f,"%s %s %s %s %s %s %s",nomh,paysh,nbr_etoilesh,nbr_chambresh,prixh,arriveeh,departh);
		fclose(f);
            gtk_tree_view_set_model(GTK_TREE_VIEW(treeview2),GTK_TREE_MODEL(store));
            g_object_unref(store);
	    
}
*/
/*






(GtkWidget *treeview2,char t[])
{
	
  GtkTreeViewColumn   *column;
  GtkCellRenderer     *renderer;
  GtkListStore  *store;
  GtkTreeIter    iter;

char nom [100];
char pays[100] ;
char nbr_etoiles [10];
char prix [10];
FILE *f;
store=NULL;
store=gtk_tree_view_get_model(treeview2);
	if (store==NULL) {

		renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("nom",renderer,"text",NOM,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("pays",renderer,"text",PAYS,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("nbr_etoiles",renderer,"text",NBRETOILE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("nbr_chambres",renderer,"text",NBRCHBRE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("prix",renderer,"text",PRIXCHAMBRE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
	    
             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("arrivee",renderer,"text",ARRIVEE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

	     renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("depart",renderer,"text",DEPART,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
}
store =gtk_list_store_new(NUM_COL1,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING ,G_TYPE_STRING );

	f = fopen("capteur.txt", "r");
	
   	if (f!=NULL)
{
     while (fscanf(f,"%s %s %s %s",nom,pays,nbr_etoiles,prix)!=EOF)
{ 	
	if ((strcmp(nom,t)==0))
{
gtk_list_store_append (store, &iter);
  gtk_list_store_set
            (store,&iter,NOM1,nom,PAYS1,pays,PRIXCHAMBRE1,prix,NBRETOILE1,nbr_etoiles,-1);
}
}
fclose(f);
   gtk_tree_view_set_model (GTK_TREE_VIEW (treeview2),GTK_TREE_MODEL (store));
   g_object_unref (store);
}}


*/
