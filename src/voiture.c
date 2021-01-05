#include <gtk/gtk.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"voiture.h"
 #include "enums.h"
void affichage_voiture (GtkWidget *treeview3) {

GtkCellRenderer *renderer ;
GtkTreeViewColumn *column ;
GtkTreeIter iter ;
GtkListStore *store ;

	char pays[30];
	char ville[30];
	char agence[30];
	char modele[30];


FILE *f ;
store =NULL ;
store=gtk_tree_view_get_model(treeview3);
if (store == NULL)
{
           

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Nom",renderer,"text",PAYSS,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Prenom",renderer,"text",VILLE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Numero",renderer,"text",AGENCE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Cin",renderer,"text",MODELE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
}


store =gtk_list_store_new(NUM_COLLL,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING );



            f=fopen("clientss.txt","r");
            if (f!=NULL){
		while (fscanf(f,"%s %s %s %s",pays,ville,agence,modele)!=EOF) {
            gtk_list_store_append(store,&iter);
            gtk_list_store_set
            (store,&iter,PAYSS,pays,VILLE,ville,AGENCE,agence,MODELE,modele,-1);
		}
		}
		fclose(f);
            gtk_tree_view_set_model(GTK_TREE_VIEW(treeview3),GTK_TREE_MODEL(store));
            g_object_unref(store);
	    
}
