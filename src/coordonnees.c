#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include "coordonnees.h"


void afficher_coord_admin (GtkWidget *treeview3t,char t[])
{
	
  GtkTreeViewColumn   *column;
  GtkCellRenderer     *renderer;
  GtkListStore  *store;
  GtkTreeIter    iter;

char nom[20];
char prenom [20];
char sexe [20];
char num_tel [10];
char num_CIN [10] ;
char date_de_naissance[20];

FILE *f;
store=NULL;
store=gtk_tree_view_get_model(treeview3t);
	if (store==NULL) {


		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("nom", renderer,"text",NOM1_ADMIN, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (treeview3t), column);	
	
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("prenom", renderer, "text",PRENOM1_ADMIN, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (treeview3t), column);
		
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("sexe", renderer,"text",SEXE1_ADMIN, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (treeview3t), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("num_CIN", renderer,"text",NUMERO_CIN1_ADMIN, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (treeview3t), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("num_tel", renderer,"text",NUMERO_TELEPHONE1_ADMIN, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (treeview3t), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("date_de_naissance", renderer,"text",DATE1_ADMIN, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (treeview3t), column);
                
	}
		store=gtk_list_store_new (6, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

	f = fopen("agents.txt", "r");
	
   	if (f!=NULL)
{
     while (fscanf(f,"%s %s %s %s %s %s \n", nom,prenom,sexe,num_CIN,num_tel,date_de_naissance)!=EOF)
{ 	
	if ((strcmp(num_CIN,t)==0))
{
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,NOM1_ADMIN,nom,PRENOM1_ADMIN,prenom,SEXE1_ADMIN,sexe,NUMERO_CIN1_ADMIN,num_CIN,NUMERO_TELEPHONE1_ADMIN,num_tel,DATE1_ADMIN,date_de_naissance,-1);
}
}
fclose(f);
   gtk_tree_view_set_model (GTK_TREE_VIEW (treeview3t),GTK_TREE_MODEL (store));
   g_object_unref (store);
}}


