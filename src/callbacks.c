#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include <string.h>

#include "Hotels.h"
#include "users.h"
#include "inscriptionClient.h"

#include "login.h"
#include "agents.h"
#include "coordonnees.h"

GtkWidget* profil_admin;
GtkWidget* Modifier_admin;
GtkWidget* supprimer_agent;
GtkWidget* Espace_admin;
GtkWidget* Login;

#include <time.h>
#include "Hotels1.h"
#include "vols.h"
#include "voiture.h"
#include "sejours.h"
#include "coordonnees1.h"
#include "cordvoiture.h"
#include "cordsejours.h"
#include "cordvol.h"
#include "profile.h"
#include "rec.h"
#include "hist_hotels.h"

  GtkWidget *notebook1;
  GtkWidget *modifier_reclamation_client;
  GtkWidget *espace_client;
  GtkWidget *Reclamation;
  GtkWidget *Vols;
  GtkWidget *Location_voitures;
  GtkWidget *payer_hotels;
  GtkWidget *login;
  GtkWidget *Sejours;
  GtkWidget *Hotels;
  GtkWidget *Login;
  GtkWidget *treeview_vols_client;
  GtkWidget *treeview_hotels_client;
  GtkWidget *treeview_reclamation_client;
  GtkWidget *treeview_location_voiture_client;
GtkWidget *treeview_payer_hotels;
  GtkWidget *EspaceAgent;
  GtkWidget *treeview_sejours_client;
  GtkWidget *payer_vols;
  GtkWidget *payer_sejours;
  GtkWidget *payer_location_voitures;
  GtkWidget *profile;
  GtkWidget *Modification_des_informations;
  GtkWidget *historique_payer_hotels;





void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
}

void
on_button1_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
}

void
on_chambre_nbr_combo_changed           (GtkComboBox     *combobox,
                                        gpointer         user_data)
{
}
//remplir les entrés de texte à côté du treeview
void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

gchar *PRIX;
gchar *nom;
gchar *pays; 
gchar *nbr;
gchar *chb;
gchar *arr;
gchar *dep;


GtkWidget *espace_agent;
GtkWidget *current;
GtkTreeIter iter;
GtkEntry *prixEntry;
GtkEntry *nomHotelEntry;
GtkEntry *PaysEntry;
GtkEntry *nombre_etoiles;
GtkEntry *chambres_disponibles;
GtkEntry *arrive;
GtkEntry *depart;




GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&nom,1,&nbr,2,&pays,3,&chb,4,&PRIX,5,&arr,6,&dep,-1);}

current=lookup_widget(treeview,"espace_agent");

nomHotelEntry=lookup_widget(current,"entry2");
prixEntry=lookup_widget(current,"entry6");
PaysEntry=lookup_widget(current,"entry3");
nombre_etoiles=lookup_widget(current,"entry4");
chambres_disponibles=lookup_widget(current,"entry5");
arrive=lookup_widget(current,"entry17");
depart=lookup_widget(current,"entry18");


gtk_entry_set_text(GTK_ENTRY(prixEntry),PRIX);
gtk_entry_set_text(GTK_ENTRY(nomHotelEntry),nom);
gtk_entry_set_text(GTK_ENTRY(PaysEntry),pays);
gtk_entry_set_text(GTK_ENTRY(nombre_etoiles),nbr);
gtk_entry_set_text(GTK_ENTRY(chambres_disponibles),chb);
gtk_entry_set_text(GTK_ENTRY(arrive),arr);
gtk_entry_set_text(GTK_ENTRY(depart),dep);

}

//ajout
void
on_Ajouter_clicked                     (GtkWidget       *widget,
                                        gpointer         user_data)
{
GtkWidget* ajout_hotel;
GtkWidget* widget_to_hide;
ajout_hotel=create_ajout_hotel();
widget_to_hide=lookup_widget(widget,"espace_agent");  
gtk_widget_hide(GTK_WIDGET(lookup_widget(widget,"espace_agent")));
gtk_widget_show(ajout_hotel);
// this code above shows the ajout interface after clicking on the ajouter button.

	/*hotel h;
	GtkWidget *current;
	GtkWidget *treeview1;
	GtkEntry *prixEntry;
	GtkEntry *nomHotelEntry;
	GtkEntry *PaysEntry;	
	GtkEntry *nombre_etoiles;
	GtkEntry *chambres_disponibles;

	current=lookup_widget(widget,"espace_agent");
	treeview1=lookup_widget(widget,"treeview2");

	nomHotelEntry=lookup_widget(current,"entry2");
	prixEntry=lookup_widget(current,"entry6");
	PaysEntry=lookup_widget(current,"entry3");
	nombre_etoiles=lookup_widget(current,"entry4");
	chambres_disponibles=lookup_widget(current,"entry5");


  	strcpy(h.nomHotel,gtk_entry_get_text(GTK_ENTRY(nomHotelEntry)));
  	strcpy(h.nbrEtoiles,gtk_entry_get_text(GTK_ENTRY(nombre_etoiles)));
  	strcpy(h.pays,gtk_entry_get_text(GTK_ENTRY(PaysEntry)));
 	strcpy(h.nbrChambres,gtk_entry_get_text(GTK_ENTRY(chambres_disponibles)));
  	strcpy(h.prix,gtk_entry_get_text(GTK_ENTRY(prixEntry)));


  	ajouter_Hotel(h);
  	affichage_Hotels (treeview1);*/
}


void
on_Afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}

//modification
void
on_Modifier_clicked                    (GtkWidget       *widget,
                                        gpointer         user_data)
{
        hotel h;
	GtkWidget *current;
	//GtkWidget *treeview1;

	GtkWidget* modifier_hotel;	
        GtkEntry *prixEntry;
	GtkEntry *nomHotelEntry;
	GtkEntry *PaysEntry;	
	GtkEntry *nombre_etoiles;
	GtkEntry *chambres_disponibles;
	GtkEntry *arrive;
	GtkEntry *depart;

	GtkEntry *prixEntry1;
	GtkEntry *nomHotelEntry1;
	GtkEntry *PaysEntry1;	
	GtkEntry *nombre_etoiles1;
	GtkEntry *chambres_disponibles1;
	GtkEntry *arrive1;
	GtkEntry *depart1;

	current=lookup_widget(widget,"espace_agent");
	//treeview1=lookup_widget(widget,"treeview2");
	modifier_hotel=create_modifier_hotel();  

	nomHotelEntry=lookup_widget(current,"entry2");
	prixEntry=lookup_widget(current,"entry6");
	PaysEntry=lookup_widget(current,"entry3");
	nombre_etoiles=lookup_widget(current,"entry4");
	chambres_disponibles=lookup_widget(current,"entry5");
	arrive=lookup_widget(current,"entry17");
	depart=lookup_widget(current,"entry18");

	
  	strcpy(h.nomHotel_agent,gtk_entry_get_text(GTK_ENTRY(nomHotelEntry)));
  	strcpy(h.nbrEtoiles_agent,gtk_entry_get_text(GTK_ENTRY(nombre_etoiles)));
  	strcpy(h.pays_agent,gtk_entry_get_text(GTK_ENTRY(PaysEntry)));
 	strcpy(h.nbrChambres_agent,gtk_entry_get_text(GTK_ENTRY(chambres_disponibles)));
  	strcpy(h.prix_agent,gtk_entry_get_text(GTK_ENTRY(prixEntry)));
	strcpy(h.arrivee_agent,gtk_entry_get_text(GTK_ENTRY(arrive)));
	strcpy(h.depart_agent,gtk_entry_get_text(GTK_ENTRY(depart)));


	nomHotelEntry1=lookup_widget(modifier_hotel,"entry10");
	prixEntry1=lookup_widget(modifier_hotel,"entry14");
	PaysEntry1=lookup_widget(modifier_hotel,"entry12");
	nombre_etoiles1=lookup_widget(modifier_hotel,"entry11");
	chambres_disponibles1=lookup_widget(modifier_hotel,"entry13");
	arrive1=lookup_widget(modifier_hotel,"entry15");
	depart1=lookup_widget(modifier_hotel,"entry16");

  	
	gtk_entry_set_text(GTK_ENTRY(nomHotelEntry1),h.nomHotel_agent);
	gtk_entry_set_text(GTK_ENTRY(prixEntry1),h.prix_agent);
	gtk_entry_set_text(GTK_ENTRY(PaysEntry1),h.pays_agent);
	gtk_entry_set_text(GTK_ENTRY(nombre_etoiles1),h.nbrEtoiles_agent);
	gtk_entry_set_text(GTK_ENTRY(chambres_disponibles1),h.nbrChambres_agent);
	gtk_entry_set_text(GTK_ENTRY(arrive1),h.arrivee_agent);
	gtk_entry_set_text(GTK_ENTRY(depart1),h.depart_agent);



	gtk_widget_hide(current);
	gtk_widget_show(modifier_hotel);

}

//supprimer
void
on_Supprimer_clicked                   (GtkWidget       *widget,
                                        gpointer         user_data)
{
        char nomhotel[50];
	GtkWidget *current;
	GtkWidget *treeview1;
	GtkEntry *nomHotelEntry;

	current=lookup_widget(widget,"espace_agent");
	treeview1=lookup_widget(widget,"treeview2");

	nomHotelEntry=lookup_widget(current,"entry2");
	


  	strcpy(nomhotel,gtk_entry_get_text(GTK_ENTRY(nomHotelEntry)));


  	supprimer_hotel(nomhotel);
  	affichage_Hotels (treeview1);

}





void
on_Mon_profil_clicked                  (GtkWidget       *widget,
                                        gpointer         user_data)
{

}


/*void
on_se_deconnecter_clicked              (GtkButton       *widget,
                                        gpointer         user_data)
{
GtkWidget* Login;
GtkWidget* widget_to_hide;
Login=create_Login();
widget_to_hide=lookup_widget(widget,"espace_agent");  
gtk_widget_hide(GTK_WIDGET(lookup_widget(widget,"espace_agent")));
gtk_widget_show(Login);
}

*/




//login
void
on_login_button_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

  GtkWidget *input1;  
  GtkWidget *input2;
  GtkWidget *output;
  GtkWidget *loginn; 
  GtkWidget *EspaceAgent;
  GtkWidget *treeview1;
   GtkWidget *treeview8;
   GtkWidget *treeview12;
  GtkWidget *treeview13;
  GtkWidget *EspaceAdmin;
  GtkWidget *EspaceClient;




  char login[20];
  char password[20];
  int logg;
  
  input1=lookup_widget(objet_graphique,"identifiant_entry");
  strcpy(login,gtk_entry_get_text(GTK_ENTRY(input1)));

  input2=lookup_widget(objet_graphique,"password_entry"); 
  strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));

  output=lookup_widget(objet_graphique,"output_login"); 
  logg=verifier(login,password);
switch(logg)
{
case 1:EspaceAgent= create_espace_agent();
  loginn =lookup_widget(objet_graphique,"Login");
  treeview1=lookup_widget(EspaceAgent,"treeview2");
  affichage_Hotels (treeview1);
treeview8=lookup_widget(EspaceAgent,"treeview8");
  affichage_vols (treeview8);
treeview12=lookup_widget(EspaceAgent,"treeview12");
  affichage_voiture (treeview12);
treeview13=lookup_widget(EspaceAgent,"treeview13");
  affichage_sejours (treeview13);
  gtk_widget_hide (loginn);  
  gtk_widget_show (EspaceAgent);

  break;
case 2:EspaceAdmin= create_Espace_admin();
  loginn =lookup_widget(objet_graphique,"Login");
  gtk_widget_hide (loginn);  
  gtk_widget_show (EspaceAdmin);
  break;
case 3:EspaceClient= create_espace_client();
  loginn =lookup_widget(objet_graphique,"Login");
  gtk_widget_hide (loginn);  
  gtk_widget_show (EspaceClient);
  break;
default :gtk_label_set_text(GTK_LABEL(output),"Verifier vos paramètres !!");

}
}




void
on_valider_ajouthotel_clicked          (GtkWidget       *widget,
                                        gpointer         user_data)
{
hotel h;
	GtkWidget *current;
	GtkWidget *treeview1;
	GtkEntry *prixEntry;
	GtkEntry *nomHotelEntry;
	GtkEntry *PaysEntry;	
	GtkEntry *nombre_etoiles;
	GtkEntry *chambres_disponibles;
        GtkEntry *arrivee_hotel_ajout_agent;
	GtkEntry *depart_hotel_ajout_agent;
	GtkWidget *notebook;
GtkWidget* espace_agent;
	int retour=5;

	current=lookup_widget(widget,"ajout_hotel");

	

	nomHotelEntry=lookup_widget(current,"nomhotel_entry_ajout_agent");
	prixEntry=lookup_widget(current,"entry_prixchbrhotel_ajout_agent");
	PaysEntry=lookup_widget(current,"pasyhotel_entry_ajout_agent");
	nombre_etoiles=lookup_widget(current,"entry1_nbreetoiles_ajout_hotel_agent");
	chambres_disponibles=lookup_widget(current,"entry_nbrechbrdsipo_ajout_agent");
	arrivee_hotel_ajout_agent=lookup_widget(current,"entry_arriveehotel_ajout_agent");
	depart_hotel_ajout_agent= lookup_widget(current,"entry_departhotel_ajout_agent");


  	strcpy(h.nomHotel_agent,gtk_entry_get_text(GTK_ENTRY(nomHotelEntry)));
  	strcpy(h.nbrEtoiles_agent,gtk_entry_get_text(GTK_ENTRY(nombre_etoiles)));
  	strcpy(h.pays_agent,gtk_entry_get_text(GTK_ENTRY(PaysEntry)));
 	strcpy(h.nbrChambres_agent,gtk_entry_get_text(GTK_ENTRY(chambres_disponibles)));
  	strcpy(h.prix_agent,gtk_entry_get_text(GTK_ENTRY(prixEntry)));
	strcpy(h.arrivee_agent,gtk_entry_get_text(GTK_ENTRY(arrivee_hotel_ajout_agent)));
	strcpy(h.depart_agent,gtk_entry_get_text(GTK_ENTRY(depart_hotel_ajout_agent)));





  	retour=ajouter_Hotel(h);

  	affichage_Hotels (treeview1);
if (retour ==0 ) {
}
else if (retour ==1){
espace_agent=create_espace_agent(); 
treeview1=lookup_widget(espace_agent,"treeview2");
notebook=lookup_widget(espace_agent,"notebook1");
gtk_notebook_set_current_page(notebook,1);
gtk_widget_hide (current);
gtk_widget_show(espace_agent);
affichage_Hotels(treeview1);

 

}
else{

}

}




void
on_modifier_hotel_clicked              (GtkWidget       *widget,
                                        gpointer         user_data)
{
	hotel h;
	GtkWidget *current;
	GtkWidget *treeview1;

	GtkWidget* espace_agent;
	GtkWidget* notebook;	
        GtkEntry *prixEntry;
	GtkEntry *nomHotelEntry;
	GtkEntry *PaysEntry;	
	GtkEntry *nombre_etoiles;
	GtkEntry *chambres_disponibles;
	GtkEntry *arrive;
	GtkEntry *depart;

	current=lookup_widget(widget,"modifier_hotel");
	espace_agent=create_espace_agent();  

	nomHotelEntry=lookup_widget(current,"entry10");
	prixEntry=lookup_widget(current,"entry14");
	PaysEntry=lookup_widget(current,"entry12");
	nombre_etoiles=lookup_widget(current,"entry11");
	chambres_disponibles=lookup_widget(current,"entry13");
	arrive=lookup_widget(current,"entry15");
	depart=lookup_widget(current,"entry16");


	
  	strcpy(h.nomHotel_agent,gtk_entry_get_text(GTK_ENTRY(nomHotelEntry)));
  	strcpy(h.nbrEtoiles_agent,gtk_entry_get_text(GTK_ENTRY(nombre_etoiles)));
  	strcpy(h.pays_agent,gtk_entry_get_text(GTK_ENTRY(PaysEntry)));
 	strcpy(h.nbrChambres_agent,gtk_entry_get_text(GTK_ENTRY(chambres_disponibles)));
  	strcpy(h.prix_agent,gtk_entry_get_text(GTK_ENTRY(prixEntry)));
	strcpy(h.arrivee_agent,gtk_entry_get_text(GTK_ENTRY(arrive)));
	strcpy(h.depart_agent,gtk_entry_get_text(GTK_ENTRY(depart)));


	notebook=lookup_widget(espace_agent,"notebook1");
	gtk_notebook_set_current_page(notebook,1);
	treeview1=lookup_widget(espace_agent,"treeview2");
	modifier_hotel(h);
	affichage_Hotels(treeview1);		
	gtk_widget_hide(current);
	gtk_widget_show(espace_agent);
}


void
on_retour_ajout_hotelagent_clicked     (GtkWidget       *widget,
                                        gpointer         user_data)
{

GtkWidget* espace_agent;
GtkWidget* treeview1;
GtkWidget* notebook;
espace_agent=create_espace_agent();  
gtk_widget_hide(GTK_WIDGET(lookup_widget(widget,"ajout_hotel")));
treeview1=lookup_widget(espace_agent,"treeview2");
affichage_Hotels(treeview1);
notebook=lookup_widget(espace_agent,"notebook1");
gtk_notebook_set_current_page(notebook,1);
gtk_widget_show(espace_agent);
}


void
on_retour_modif_hotelagent_clicked     (GtkWidget       *widget,
                                        gpointer         user_data)
{
GtkWidget* espace_agent;
GtkWidget* treeview1;
GtkWidget* notebook;
espace_agent=create_espace_agent();  
gtk_widget_hide(GTK_WIDGET(lookup_widget(widget,"modifier_hotel")));
treeview1=lookup_widget(espace_agent,"treeview2");
affichage_Hotels(treeview1);
notebook=lookup_widget(espace_agent,"notebook1");
gtk_notebook_set_current_page(notebook,1);
gtk_widget_show(espace_agent);
}


void
on_sedeconnecter_agent_clicked         (GtkButton       *widget,
                                        gpointer         user_data)
{
GtkWidget* Login;
GtkWidget* widget_to_hide;
Login=create_Login();
widget_to_hide=lookup_widget(widget,"espace_agent");  
gtk_widget_hide(GTK_WIDGET(lookup_widget(widget,"espace_agent")));
gtk_widget_show(Login);
}


void
on_Rechercher_hotel_agent_clicked     

(GtkButton       *button,
                                        gpointer         user_data)
{
char t[20];
        GtkWidget *treeview2;
        GtkWidget *input1;
	input1=lookup_widget(button,"rechercher_entry");
	treeview2=lookup_widget(button,"treeview2");
	strcpy(t,gtk_entry_get_text(GTK_ENTRY(input1)));
	rechercher_hotel_par_agent (treeview2,t);
}

/*
 (GtkButton       *widget,
                                        gpointer         user_data)
{ GtkWidget *current;
GtkWidget *entry_rech;
GtkWidget *treeviewrech;
GtkWidget *searchentry

current=lookup_widget(widget,"espace_agent");
entry_rech=lookup_widget(widget,"rechercher_entry");
treeviewrech=lookup_widget(current,"treeview2");
rechercher_hotel_par_agent(treeviewrech);
searchentry=gtk_get_text(GTK_ENTRY(entry));
}
*/

/*
(GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{GtkWidget *EspaceAdmin;
GtkWidget *treeview11;
EspaceAdmin=lookup_widget(objet_graphique,"EspaceAdmin");
treeview11=lookup_widget(EspaceAdmin,"treeview11");
afficher_cam (treeview11);
  /*GtkWidget* resultat_recherche_hotel_agent;
  GtkWidget* treeview_recherche_hotel_agent;
GtkWidget *widgettohide;
GtkWidget *input1;
//GtkWidget *objet_graphique;

	widgettohide=lookup_widget(widget,"espace_agent");
input1=lookup_widget(widget,"rechercher_entry");
resultat_recherche_hotel_agent=create_resultat_recherche_client();  
treeview_recherche_hotel_agent=lookup_widget(widget,"treeview_recherche_hotel_agent");
gtk_widget_hide(GTK_WIDGET(widgettohide));

 gtk_widget_show(resultat_recherche_hotel_agent);
  affichage_Hotels(treeview_recherche_hotel_agent);

}
*/

void
on_actualiser_recherche_hotel_agent_clicked
                                        (GtkWidget       *button,
                                        gpointer         user_data)
{/*
GtkWidget *trevieewrecherchehotelagent;
GtkWidget *espace_agent;
GtkWidget *notebook;
espace_agent=create_espace_agent();
gtk_widget_show(espace_agent);
notebook=lookup_widget(espace_agent,"notebook1");
gtk_notebook_set_current_page(notebook,1);
trevieewrecherchehotelagent=lookup_widget(espace_agent,"treeview2");
affichage_Hotels(trevieewrecherchehotelagent);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espace_agent")));
//gtk_widget
*/

GtkWidget *tree;

tree=lookup_widget(button,"treeview2");
affichage_Hotels(tree);
}




void
on_calendar1_day_selected_double_click (GtkWidget     *widget,
                                        gpointer         user_data)
{
char buffer[256];
char yearr[20];
char monthh[10];
char dayy[10];
char yeardate[50];
guint year;
guint month;
guint day;
GtkWidget *Calendar;
GtkLabel *message;

Calendar=lookup_widget(widget,"calendar1");
gtk_calendar_get_date(GTK_CALENDAR(Calendar),&year,&month,&day);
message=lookup_widget(widget,"testCalendarLabel");

sprintf(yearr,"%d",year);
sprintf(monthh,"%d",month+1);
sprintf(dayy,"%d",day);
strcat(yeardate,"the year is: ");
strcat(yeardate,dayy);
strcat(yeardate,"/");
strcat(yeardate,monthh);
strcat(yeardate,"/");
strcat(yeardate,yearr);
gtk_label_set_text(GTK_LABEL(message),yeardate);

}


void
on_seConnecterFirstInterface_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data)
{

GtkWidget* login;
GtkWidget* widget_to_hide;
login=create_Login();
widget_to_hide=lookup_widget(widget,"first_interface");  
gtk_widget_hide(widget_to_hide);
gtk_widget_show(login);
}


void
on_rechercher_hotel_client_guest_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}







void
on_valider_inscription_client_clicked  (GtkWidget       *widget,
                                        gpointer         user_data)
{
	Client c;
	GtkWidget *current;
	GtkWidget *firstInterface;	

	GtkEntry *nom;
	GtkEntry *prenom;
	GtkEntry *numero;	
	GtkEntry *adresse;
	GtkEntry *mdp;
	GtkEntry *date_entry;
	GtkWidget *radiobutton1;
	GtkWidget *radiobutton2;
	
	current=lookup_widget(widget,"inscription_client");
	nom=lookup_widget(widget,"entrynom__duclient_inscription");
	prenom=lookup_widget(widget,"entry__prenom_duclient_inscription");
	numero=lookup_widget(widget,"entrynumtel__duclient_inscription");
	adresse=lookup_widget(widget,"entryadresse__duclient_inscription");
	mdp=lookup_widget(widget,"entry_motdepasse__duclient_inscription");
	radiobutton1=lookup_widget(widget,"radiobutton_homme__duclient_inscription");
	radiobutton2= lookup_widget(widget,"radiobutton_femme__duclient_inscription");
	date_entry=lookup_widget(widget,"hidden_entry_for_date");

 	 if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(radiobutton1))==TRUE)
  	{strcpy(c.sexe,"Homme");;}
  	else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(radiobutton2))==TRUE)
  	{strcpy(c.sexe,"Femme");;}



  	strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
  	strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
 	strcpy(c.tel,gtk_entry_get_text(GTK_ENTRY(numero)));
  	strcpy(c.adresse,gtk_entry_get_text(GTK_ENTRY(adresse)));
	strcpy(c.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));
	strcpy(c.date,gtk_entry_get_text(GTK_ENTRY(date_entry)));





	int retour=ajouter_Client(c);

	if (retour ==0 ) {
	}
	else if (retour ==1){
	espace_client=create_espace_client();
	gtk_widget_hide (current);
	gtk_widget_show(espace_client);
	}
	else{

	}


}


void
on_Retour_inscription_client_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_calendar_inscription_client_day_selected_double_click
                                        (GtkWidget     *widget,
                                        gpointer         user_data)
{



char buffer[256];
char yearr[20];
char monthh[10];
char dayy[10];
char yeardate[50];
guint year;
guint month;
guint day;
GtkWidget *Calendar;
GtkEntry *entry_date;

Calendar=lookup_widget(widget,"calendar_inscription_client");


gtk_calendar_get_date(GTK_CALENDAR(Calendar),&year,&month,&day);
entry_date=lookup_widget(widget,"hidden_entry_for_date");

sprintf(yearr,"%d",year);
sprintf(monthh,"%d",month+1);
sprintf(dayy,"%d",day);
strcat(yeardate,dayy);
strcat(yeardate,"/");
strcat(yeardate,monthh);
strcat(yeardate,"/");
strcat(yeardate,yearr);
gtk_entry_set_text(GTK_ENTRY(entry_date),yeardate);




}


void
on_SinscrireFirstInterface_clicked     (GtkWidget       *widget,
                                        gpointer         user_data)
{
GtkWidget* Inscription_client;
GtkWidget* widget_to_hide;
Inscription_client=create_inscription_client();
widget_to_hide=lookup_widget(widget,"first_interface");  
gtk_widget_hide(widget_to_hide);
gtk_widget_show(Inscription_client);
}




				
void
on_button_deconnecter_admin_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{
	Espace_admin=lookup_widget(button,"Espace_admin");
	gtk_widget_destroy(Espace_admin);
	Login=create_Login();
	gtk_widget_show(Login);
	
}


void
on_button_profil_admin_clicked         (GtkWidget       *button,
                                        gpointer         user_data)
{


profil_admin=create_profil_admin();
gtk_widget_show(profil_admin);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"Espace_admin")));

GtkWidget *output1;
GtkWidget *output2;
GtkWidget *output3;
GtkWidget *output4;
GtkWidget *output5;
GtkWidget *output6;
GtkWidget *output7;




char nom[20];
char prenom [20];
char sexe [20];
char num_tel [10];
char num_CIN [10] ;
char date[20];

FILE *f;
f=fopen("admin.txt","a+");
if (f!=NULL)
	{
	    while(fscanf(f,"%s %s %s %s %s %s %s \n",nom,prenom,sexe,num_CIN,num_tel,date)!=EOF)
		{ output1=lookup_widget(profil_admin,"label_nom_admin");
		  gtk_label_set_text(GTK_LABEL(output1),nom);
		  output2=lookup_widget(profil_admin,"label_prenom_admin");
		  gtk_label_set_text(GTK_LABEL(output2),prenom);
		  output3=lookup_widget(profil_admin,"label_sexe_admin");
		  gtk_label_set_text(GTK_LABEL(output3),sexe);
		  output4=lookup_widget(profil_admin,"label_numcin_admin");
		  gtk_label_set_text(GTK_LABEL(output4),num_CIN);
		  output5=lookup_widget(profil_admin,"label_numtel_admin");
		  gtk_label_set_text(GTK_LABEL(output5),num_tel);
		  output6=lookup_widget(profil_admin,"label_datenaiss_admin");
		  gtk_label_set_text(GTK_LABEL(output6),date);
		  }
		fclose(f);}
	
}


void
on_button_supprimer_agents_par_admin_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data)
{
	
	char num_CIN [10] ;
	
	GtkWidget *current;
	GtkWidget *treeview1;
	
	GtkEntry *cin_agent;

	current=lookup_widget(widget,"Espace_admin");
	treeview1=lookup_widget(widget,"treeview_liste_agents_par_admin");

	cin_agent=lookup_widget(current,"entry4");
	


  	strcpy(num_CIN,gtk_entry_get_text(GTK_ENTRY(cin_agent)));


  	supprimer_agents(num_CIN);
  	afficher_agents (treeview1);
}


void
on_button_modifier_agents_par_admin_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data)
{
	agents a;
	GtkWidget *current;
	GtkWidget *treeview1;

	GtkWidget* Modifier_agent;	
        
	GtkEntry *nom_agent;
	GtkEntry *prenom_agent;
	GtkEntry *sexe_agent;	
	GtkEntry *tel_agent;
	GtkEntry *cin_agent;
        GtkEntry *date_agent;

	GtkEntry *nom_agent1;
	GtkEntry *prenom_agent1;
	GtkEntry *sexe_agent1;	
	GtkEntry *tel_agent1;
	GtkEntry *cin_agent1;
        GtkEntry *date_agent1;

	current=lookup_widget(widget,"Espace_admin");
	treeview1=lookup_widget(widget,"treeview_liste_agents_par_admin");
	Modifier_agent=create_Modifier_agent();  

	nom_agent=lookup_widget(current,"entry1");
	prenom_agent=lookup_widget(current,"entry2");
	sexe_agent=lookup_widget(current,"entry3");
	cin_agent=lookup_widget(current,"entry4");
	tel_agent=lookup_widget(current,"entry5");
	date_agent=lookup_widget(current,"entry6");


	strcpy(a.nom,gtk_entry_get_text(GTK_ENTRY(nom_agent)));
  	strcpy(a.prenom,gtk_entry_get_text(GTK_ENTRY(prenom_agent)));
  	strcpy(a.sexe,gtk_entry_get_text(GTK_ENTRY(sexe_agent)));
  	strcpy(a.num_tel,gtk_entry_get_text(GTK_ENTRY(tel_agent))); 	
	strcpy(a.num_CIN,gtk_entry_get_text(GTK_ENTRY(cin_agent)));
	strcpy(a.date,gtk_entry_get_text(GTK_ENTRY(date_agent)));


	nom_agent1=lookup_widget(Modifier_agent,"entry_modif_nom_agent");
	prenom_agent1=lookup_widget(Modifier_agent,"entry_modif_prenom_agent");
	sexe_agent1=lookup_widget(Modifier_agent,"entry_modif_sexe_agent");
	cin_agent1=lookup_widget(Modifier_agent,"entry_modif_numcin_agent");
	tel_agent1=lookup_widget(Modifier_agent,"entry_modif_numtel_agent");
	date_agent1=lookup_widget(Modifier_agent,"entry_modif_datenaiss_agent");


  	
	gtk_entry_set_text(GTK_ENTRY(nom_agent1),a.nom);
	gtk_entry_set_text(GTK_ENTRY(prenom_agent1),a.prenom);
	gtk_entry_set_text(GTK_ENTRY(sexe_agent1),a.sexe);
	gtk_entry_set_text(GTK_ENTRY(cin_agent1),a.num_CIN);
	gtk_entry_set_text(GTK_ENTRY(tel_agent1),a.num_tel);
	gtk_entry_set_text(GTK_ENTRY(date_agent1),a.date);




	gtk_widget_hide(current);
	gtk_widget_show(Modifier_agent);
}


void
on_button_ajouter_agents_par_admin_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data)
{
GtkWidget* Ajout_agent;
GtkWidget* widget_to_hide;
Ajout_agent=create_Ajout_agent();
widget_to_hide=lookup_widget(widget,"Espace_admin");  
gtk_widget_hide(GTK_WIDGET(lookup_widget(widget,"Espace_admin")));
gtk_widget_show(Ajout_agent);
}


void
on_button_afficher_agents_par_admin_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Espace_admin;
GtkWidget *treeview_liste_agents_par_admin;
Espace_admin=lookup_widget(objet_graphique,"Espace_admin");
treeview_liste_agents_par_admin=lookup_widget(Espace_admin,"treeview_liste_agents_par_admin");
afficher_agents (treeview_liste_agents_par_admin);
}


void
on_button_identifier_admin_clicked     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *input1;  
  GtkWidget *input2;
  GtkWidget *output;
  GtkWidget *loginn; 
  GtkWidget *Espace_admin;
  GtkWidget *treeview_liste_agents_par_admin;


  char login[20];
  char password[20];
  int logg;
  
  input1=lookup_widget(objet_graphique,"identifiant_entry");
  strcpy(login,gtk_entry_get_text(GTK_ENTRY(input1)));

  input2=lookup_widget(objet_graphique,"password_entry"); 
  strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));

  output=lookup_widget(objet_graphique,"output_login"); 
  logg=verifier(login,password);
switch(logg)
{
case 1:Espace_admin= create_Espace_admin();
  loginn =lookup_widget(objet_graphique,"Login");
  treeview_liste_agents_par_admin=lookup_widget(Espace_admin,"treeview_liste_agents_par_admin");
  //affichage_agents (treeview_liste_agents_par_admin);
  gtk_widget_hide (loginn);  
  gtk_widget_show (Espace_admin);
  break;
default :gtk_label_set_text(GTK_LABEL(output),"Verifier vos paramètres !!");

}
}


void
on_button_ajouuut_agent_clicked        (GtkWidget       *widget,
                                        gpointer         user_data)
{
 	agents a;
	GtkWidget *current;
	GtkWidget *treeview1;

	GtkEntry *nom_agent;
	GtkEntry *prenom_agent;
	GtkEntry *sexe_agent;	
	GtkEntry *tel_agent;
	GtkEntry *cin_agent;
        GtkEntry *date_agent;

	GtkWidget *notebook;
        GtkWidget* Espace_admin;
	int retour=5;

	current=lookup_widget(widget,"Ajout_agent");

	

	nom_agent=lookup_widget(current,"entry_ajout_nom_agent");
	prenom_agent=lookup_widget(current,"entry_ajout_prenom_agent");
	sexe_agent=lookup_widget(current,"entry_ajout_sexe_agent");
	tel_agent=lookup_widget(current,"entry_ajout_tel_agent");
	cin_agent=lookup_widget(current,"entry_ajout_cin_agent");
	date_agent=lookup_widget(current,"entry_ajout_date_agent");



  	strcpy(a.nom,gtk_entry_get_text(GTK_ENTRY(nom_agent)));
  	strcpy(a.prenom,gtk_entry_get_text(GTK_ENTRY(prenom_agent)));
  	strcpy(a.sexe,gtk_entry_get_text(GTK_ENTRY(sexe_agent)));
  	strcpy(a.num_tel,gtk_entry_get_text(GTK_ENTRY(tel_agent))); 	
	strcpy(a.num_CIN,gtk_entry_get_text(GTK_ENTRY(cin_agent)));
	strcpy(a.date,gtk_entry_get_text(GTK_ENTRY(date_agent)));



  	retour=ajouter_agents(a);

  	afficher_agents (treeview1);
if (retour ==0 ) {
}
else if (retour ==1){
Espace_admin=create_Espace_admin(); 
treeview1=lookup_widget(Espace_admin,"treeview_liste_agents_par_admin");
//notebook=lookup_widget(espace_agent,"notebook1");
//gtk_notebook_set_current_page(notebook,1);
gtk_widget_hide (current);
gtk_widget_show(Espace_admin);
afficher_agents(treeview1);

 

}
else{

}
}


void
on_button_retour_ajout_vers_admin_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data)
{
GtkWidget* Espace_admin;
GtkWidget* treeview_liste_agents_par_admin;
GtkWidget* notebook;
Espace_admin=create_Espace_admin();  
gtk_widget_hide(GTK_WIDGET(lookup_widget(widget,"Ajout_agent")));
treeview_liste_agents_par_admin=lookup_widget(Espace_admin,"treeview_liste_agents_par_admin");
//affichage_Hotels(treeview1);
notebook=lookup_widget(Espace_admin,"notebook1");
gtk_notebook_set_current_page(notebook,1);
gtk_widget_show(Espace_admin);
}


void
on_button_modiffff_agent_clicked       (GtkWidget       *widget,
                                        gpointer         user_data)
{
	agents a1;
	GtkWidget *current;
	GtkWidget *treeview1;

	GtkWidget* Espace_admin;
	GtkWidget* notebook;	
        
	GtkEntry *nom_agent;
	GtkEntry *prenom_agent;
	GtkEntry *sexe_agent;	
	GtkEntry *tel_agent;
	GtkEntry *cin_agent;
        GtkEntry *date_agent;

	current=lookup_widget(widget,"Modifier_agent");
	Espace_admin=create_Espace_admin();  

	nom_agent=lookup_widget(current,"entry_modif_nom_agent");
	prenom_agent=lookup_widget(current,"entry_modif_prenom_agent");
	sexe_agent=lookup_widget(current,"entry_modif_sexe_agent");
	cin_agent=lookup_widget(current,"entry_modif_numcin_agent");
	tel_agent=lookup_widget(current,"entry_modif_numtel_agent");
	date_agent=lookup_widget(current,"entry_modif_datenaiss_agent");


	strcpy(a1.nom,gtk_entry_get_text(GTK_ENTRY(nom_agent)));
  	strcpy(a1.prenom,gtk_entry_get_text(GTK_ENTRY(prenom_agent)));
  	strcpy(a1.sexe,gtk_entry_get_text(GTK_ENTRY(sexe_agent)));
  	strcpy(a1.num_tel,gtk_entry_get_text(GTK_ENTRY(tel_agent))); 	
	strcpy(a1.num_CIN,gtk_entry_get_text(GTK_ENTRY(cin_agent)));
	strcpy(a1.date,gtk_entry_get_text(GTK_ENTRY(date_agent)));


	//notebook=lookup_widget(Espace_admin,"notebook1");
	//gtk_notebook_set_current_page(notebook,1);
	treeview1=lookup_widget(Espace_admin,"treeview_liste_agents_par_admin");
	modifier_agents(a1);
	afficher_agents(treeview1);		
	gtk_widget_hide(current);
	gtk_widget_show(Espace_admin);
}


void
on_button_retour_modif_vers_admin_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeview_liste_agents_par_admin_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *name;
gchar *surname;
gchar *sex; 
gchar *cin;
gchar *tel;
gchar *datee;



GtkWidget *Espace_admin;
GtkWidget *current;
GtkTreeIter iter;

	GtkEntry *nom_agent;
	GtkEntry *prenom_agent;
	GtkEntry *sexe_agent;	
	GtkEntry *tel_agent;
	GtkEntry *cin_agent;
        GtkEntry *date_agent;




GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&name,1,&surname,2,&sex,3,&cin,4,&tel,5,&datee,-1);}

current=lookup_widget(treeview,"Espace_admin");

	nom_agent=lookup_widget(current,"entry1");
	prenom_agent=lookup_widget(current,"entry2");
	sexe_agent=lookup_widget(current,"entry3");
	cin_agent=lookup_widget(current,"entry4");
	tel_agent=lookup_widget(current,"entry5");
	date_agent=lookup_widget(current,"entry6");




	gtk_entry_set_text(GTK_ENTRY(nom_agent),name);
	gtk_entry_set_text(GTK_ENTRY(prenom_agent),surname);
	gtk_entry_set_text(GTK_ENTRY(sexe_agent),sex);
	gtk_entry_set_text(GTK_ENTRY(cin_agent),cin);
	gtk_entry_set_text(GTK_ENTRY(tel_agent),tel);
	gtk_entry_set_text(GTK_ENTRY(date_agent),datee);

}


void
on_button_valider_modif_admin_clicked  (GtkWidget       *objet,
                                        gpointer         user_data)
{
profil_admin=create_profil_admin();
gtk_widget_show(profil_admin);
gtk_widget_hide(GTK_WIDGET(lookup_widget(objet,"Modifier_admin")));

GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;


char nom[20];
char prenom [20];
char sexe [20];
char num_tel [10];
char num_CIN [10] ;
char date[20];


input1=lookup_widget(objet,"entry_modif_nom_admin");
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(objet,"entry_modif_prenom_admin");
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(objet,"entry_modif_sexe_admin");
strcpy(sexe,gtk_entry_get_text(GTK_ENTRY(input3)));
input4=lookup_widget(objet,"entry_modif_cin_admin");
strcpy(num_CIN,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(objet,"entry_modif_tel_admin");
strcpy(num_tel,gtk_entry_get_text(GTK_ENTRY(input5)));
input6=lookup_widget(objet,"entry_modif_date_admin");
strcpy(date,gtk_entry_get_text(GTK_ENTRY(input6)));


FILE *f;
f=fopen("admin.txt","w");
fprintf(f,"%s %s %s %s %s %s \n",nom,prenom,sexe,num_CIN,num_tel,date);
fclose(f); 

}


void
on_button_edit_profil_admin_clicked    (GtkWidget       *button,
                                        gpointer         user_data)
{
Modifier_admin=create_Modifier_admin();
gtk_widget_show(Modifier_admin);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"profil_admin")));

}


void
on_button_cam_agents_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
system("vlc cam.mp4");
}


void
on_button_rechercher_agent_par_admin_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	char t[20];
        GtkWidget *treeview_coord_agents;
        GtkWidget *input1;
	input1=lookup_widget(objet_graphique,"entry_recherche_cinagent");
	treeview_coord_agents=lookup_widget(objet_graphique,"treeview_coord_agents");
	strcpy(t,gtk_entry_get_text(GTK_ENTRY(input1)));
	afficher_coord_admin (treeview_coord_agents,t);
}




void
on_Mapview_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
system("./exemple2/mapview");
}


////amine


/*void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *DEPART; 
gchar *DESTINATION;
gchar *DATEDEPART;
gchar *DATERETOUR;



GtkWidget *payer_hotels;*GtkWidget *current;
GtkTreeIter iter;
GtkWidget *L17;
GtkWidget *L18;
GtkWidget *L19;
GtkWidget *E6;
GtkWidget *E7;
GtkWidget *E8;
GtkWidget *E9;
GtkWidget *E10;
GtkWidget *E14;
GtkWidget *E15;
GtkWidget *E16;

GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&DEPART,1,&DESTINATION,2,&DATEDEPART,3,&DATERETOUR,-1);}
payer_vols = create_payer_vols();

E6=lookup_widget(payer_vols,"departv");
E7=lookup_widget(payer_vols,"destinationv");
E8=lookup_widget(payer_vols,"datedepartv");
E9=lookup_widget(payer_vols,"dateretourv");

gtk_entry_set_text(GTK_ENTRY(E6),DEPART);
gtk_entry_set_text(GTK_ENTRY(E7),DESTINATION);
gtk_entry_set_text(GTK_ENTRY(E8),DATEDEPART);
gtk_entry_set_text(GTK_ENTRY(E9),DATERETOUR);
gtk_widget_show (payer_vols);


}*/


void
on_Rechercher_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}

/*
void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{


nomHotelEntry=lookup_widget(current,"entry2");
prixEntry=lookup_widget(current,"entry6");
PaysEntry=lookup_widget(current,"entry3");
nombre_etoiles=lookup_widget(current,"entry4");
chambres_disponibles=lookup_widget(current,"entry5");


gtk_entry_set_text(GTK_ENTRY(prixEntry),PRIX);
gtk_entry_set_text(GTK_ENTRY(nomHotelEntry),nom);
gtk_entry_set_text(GTK_ENTRY(PaysEntry),pays);
gtk_entry_set_text(GTK_ENTRY(nombre_etoiles),nbr);
gtk_entry_set_text(GTK_ENTRY(chambres_disponibles),chb);

}
*/

gboolean
on_Hotels_button_press_event           (GtkLabel        *label,
                                        gchar           *arg1,
                                        gpointer         user_data)
{

  return FALSE;
}

/*
void
on_treeview3_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}
*/
/*
void
on_treeview4_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
}
*/

void
on_envoyer_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_recmlamation;
espace_client=create_espace_client();
gtk_widget_show(espace_client);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espace_client")));
//gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"window_ajouter_recmlamation")));
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;

char nom[300];
char prenom[300];
char cin[300];
char date[300];
char message[300];



input1=lookup_widget(button,"nomc");
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(button,"prenomc");
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(button,"cinc");  
strcpy(cin,gtk_entry_get_text(GTK_ENTRY(input3)));
input4=lookup_widget(button,"datec");
strcpy(date,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(button,"messagec");
strcpy(message,gtk_entry_get_text(GTK_ENTRY(input5)));


FILE *f;
f=fopen("reclamation.txt","a+");
fprintf(f,"%s %s %s %s %s\n",nom,prenom,cin,date,message);
fclose(f); 

gtk_widget_show(Reclamation);
  treeview_hotels_client=lookup_widget(espace_client,"treeview_hotels_client");
  affichage_Hotelss (treeview_hotels_client);
  treeview_vols_client=lookup_widget(espace_client,"treeview_vols_client");
  affichage_vols (treeview_vols_client);
  treeview_location_voiture_client=lookup_widget(espace_client,"treeview_location_voiture_client");
  affichage_voiture (treeview_location_voiture_client);
  treeview_sejours_client=lookup_widget(espace_client,"treeview_sejours_client");
  affichage_sejours (treeview_sejours_client);
 treeview_reclamation_client=lookup_widget(espace_client,"treeview_reclamation_client");
  afficher_reclamation (treeview_reclamation_client);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"window_ajouter_recmlamation")));
notebook1=lookup_widget(espace_client,"notebook1");
	gtk_notebook_set_current_page(notebook1,4);

}


void
on_mon_profil_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{
/*espace_client=create_espace_client();
profile=create_profile();
gtk_widget_show(profile);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espace_client")));

GtkWidget *output1;
GtkWidget *output2;
GtkWidget *output3;
GtkWidget *output4;
GtkWidget *output5;
GtkWidget *output6;
GtkWidget *output7;

char nom[33];
char prenom[33];
char cin[33];
char date[33];
char tel[33];
char adresse[33];
char mdp[33];

affiche_profile(nom,prenom,cin,date,tel,adresse,mdp);
output1=lookup_widget(button,"nomp");
gtk_entry_set_text(GTK_ENTRY(output1),nom);
output2=lookup_widget(button,"prenomp");
gtk_entry_set_text(GTK_ENTRY(output2),prenom);
output3=lookup_widget(button,"sexep");  
gtk_entry_set_text(GTK_ENTRY(output3),cin);
output4=lookup_widget(button,"datep");
gtk_entry_set_text(GTK_ENTRY(output4),date);
output5=lookup_widget(button,"telp");
gtk_entry_set_text(GTK_ENTRY(output5),tel);
output6=lookup_widget(button,"adressep");
gtk_entry_set_text(GTK_ENTRY(output6),adresse);
output7=lookup_widget(button,"mdpp");
gtk_entry_set_text(GTK_ENTRY(output7),mdp);
*/
}


void
on_se_deconnecter_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
espace_client=lookup_widget(button,"espace_client");
		gtk_widget_destroy(espace_client);
		Login=create_Login();
		gtk_widget_show(Login);
}


void
on_payerhotels_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
payer_hotels=create_payer_hotels();
gtk_widget_show(payer_hotels);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"payer_hotels")));
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;


char nom[300];
char pays[300];
char nbe[300];
char prix[300];
char nb[300];
char adultes[300];
char enfants[300];
char bebes[300];
char tot[300];
int a,b;
a=atoi(prix);
b=atoi(nb);
input1=lookup_widget(button,"nomh");
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(button,"paysh");
strcpy(pays,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(button,"nbeh");  
strcpy(nbe,gtk_entry_get_text(GTK_ENTRY(input3)));
input4=lookup_widget(button,"prixh");
strcpy(prix,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(button,"nbh");
strcpy(nb,gtk_entry_get_text(GTK_ENTRY(input5)));
input6=lookup_widget(button,"adultesh");
strcpy(adultes,gtk_entry_get_text(GTK_ENTRY(input6)));
input7=lookup_widget(button,"enfantsh");
strcpy(enfants,gtk_entry_get_text(GTK_ENTRY(input7)));
input8=lookup_widget(button,"bebesh");  
strcpy(bebes,gtk_entry_get_text(GTK_ENTRY(input8)));
a=b*a;
sprintf(tot,a);
input9=lookup_widget(button,"toth");
strcpy(tot,gtk_entry_get_text(GTK_ENTRY(input9)));



FILE *f;
f=fopen("paiementhotels.txt","a+");
fprintf(f,"%s %s %s %s %s %s %s %s %s \n",nom,pays,nbe,prix,nb,adultes,enfants,bebes,tot);
fclose(f); 

gtk_widget_destroy(payer_hotels);

}

/*
void
on_login_button_clicked             (GtkButton	*objet_graphique,
                                        gpointer         user_data)
{
 GtkWidget *input1;  
  GtkWidget *input2;
  GtkWidget *output;
  GtkWidget *loginn; 

  




  char login[20];
  char password[20];
  int logg;
  
  input1=lookup_widget(objet_graphique,"identifiant_entry");
  strcpy(login,gtk_entry_get_text(GTK_ENTRY(input1)));

  input2=lookup_widget(objet_graphique,"password_entry"); 
  strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));

  output=lookup_widget(objet_graphique,"output_login"); 
  logg=verifier(login,password);
switch(logg)
{
case 2:espace_client= create_espace_client();

  loginn =lookup_widget(objet_graphique,"Login");
  treeview_hotels_client=lookup_widget(espace_client,"treeview_hotels_client");
  affichage_Hotels (treeview_hotels_client);
  treeview_vols_client=lookup_widget(espace_client,"treeview_vols_client");
  affichage_vols (treeview_vols_client);
  treeview_location_voiture_client=lookup_widget(espace_client,"treeview_location_voiture_client");
  affichage_voiture (treeview_location_voiture_client);
  treeview_sejours_client=lookup_widget(espace_client,"treeview_sejours_client");
  affichage_sejours (treeview_sejours_client);
  treeview_reclamation_client=lookup_widget(espace_client,"treeview_reclamation_client");
  afficher_reclamation (treeview_reclamation_client);
  gtk_widget_hide (loginn);  
  gtk_widget_show (espace_client);

  break;
default :gtk_label_set_text(GTK_LABEL(output),"Verifier vos paramètres !!");

}
}


*/

void
on_payervols_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
payer_vols=create_payer_vols();

gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"payer_vols")));
gtk_widget_show(payer_vols);
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *input12;
GtkWidget *input13;
GtkWidget *input14;
GtkWidget *input15;
GtkWidget *input16;



char depart[300];
char destination[300];
char datedepart[300];
char dateretour[300];
char nbrvoy[300];
char classsou[300];
char prix[300];





input10=lookup_widget(button,"departv");
strcpy(depart,gtk_entry_get_text(GTK_ENTRY(input10)));
input11=lookup_widget(button,"destinationv");
strcpy(destination,gtk_entry_get_text(GTK_ENTRY(input11)));
input12=lookup_widget(button,"datedepartv");  
strcpy(datedepart,gtk_entry_get_text(GTK_ENTRY(input12)));
input13=lookup_widget(button,"dateretourv");
strcpy(dateretour,gtk_entry_get_text(GTK_ENTRY(input13)));
input14=lookup_widget(button,"nbvoyv");
strcpy(nbrvoy,gtk_entry_get_text(GTK_ENTRY(input14)));
input15=lookup_widget(button,"classouv");
strcpy(classsou,gtk_entry_get_text(GTK_ENTRY(input15)));
input16=lookup_widget(button,"prixv");
strcpy(prix,gtk_entry_get_text(GTK_ENTRY(input16)));




FILE *f;
f=fopen("paiementvols.txt","a+");
fprintf(f,"%s %s %s %s %s %s %s \n",depart,destination,datedepart,dateretour,nbrvoy,classsou,prix);
fclose(f); 

gtk_widget_destroy(payer_vols);


}


void
on_payerlocationvoitures_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{
payer_location_voitures=create_payer_location_voitures();
gtk_widget_show(payer_location_voitures);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"payer_location_voitures")));

GtkWidget *input17;
GtkWidget *input18;
GtkWidget *input19;
GtkWidget *input20;
GtkWidget *input21;
GtkWidget *input22;
GtkWidget *input23;
GtkWidget *input24;
typedef struct

{

char payss[100];
char ville[100];
char agence[100];
char modele[100];
char prix[100];
char date[100];
char nombre[100];
char tot[100];    

}p;



p a;



input17=lookup_widget(button,"payl");
strcpy(a.payss,gtk_entry_get_text(GTK_ENTRY(input17)));

input18=lookup_widget(button,"vil");  
strcpy(a.ville,gtk_entry_get_text(GTK_ENTRY(input18)));
input19=lookup_widget(button,"agel");
strcpy(a.agence,gtk_entry_get_text(GTK_ENTRY(input19)));
input19=lookup_widget(button,"modl");
strcpy(a.modele,gtk_entry_get_text(GTK_ENTRY(input20)));
input21=lookup_widget(button,"pril");
strcpy(a.prix,gtk_entry_get_text(GTK_ENTRY(input21)));
input22=lookup_widget(button,"dpcl");
strcpy(a.date,gtk_entry_get_text(GTK_ENTRY(input22)));
input21=lookup_widget(button,"nbjl");
strcpy(a.nombre,gtk_entry_get_text(GTK_ENTRY(input21)));
input22=lookup_widget(button,"totl");
strcpy(a.tot,gtk_entry_get_text(GTK_ENTRY(input22)));




FILE *f;
f=fopen("paiementvoiture.txt","a+");
fprintf(f,"%s %s %s %s %s %s %s %s\n",a.payss,a.ville,a.agence,a.modele,a.prix,a.date,a.nombre,a.tot);
fclose(f); 

gtk_widget_destroy(payer_location_voitures);
}


void
on_modifier_clicked                    (GtkWidget     *button,
                                        gpointer         user_data)
{
//Modification_des_informations=create_Modification_des_informations();
//gtk_widget_show(Modification_des_informations);
//gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"Modification_des_informations")));


GtkWidget *output1;
GtkWidget *output2;
GtkWidget *output3;
GtkWidget *output4;
GtkWidget *output5;
GtkWidget *output6;
GtkWidget *output7;
GtkWidget *output8;
char nom[33];
char prenom[33];
char cin[33];
char date[33];
char tel[33];
char adresse[33];
char mdp[33];
char sexe[33];
affiche_profile(nom,prenom,sexe,date,tel,adresse,mdp,cin);
output1=lookup_widget(button,"nomp");
gtk_entry_set_text(GTK_ENTRY(output1),nom);
output2=lookup_widget(button,"prenomp");
gtk_entry_set_text(GTK_ENTRY(output2),prenom);
output3=lookup_widget(button,"sexep");  
gtk_entry_set_text(GTK_ENTRY(output3),sexe);
output4=lookup_widget(button,"datep");
gtk_entry_set_text(GTK_ENTRY(output4),date);
output5=lookup_widget(button,"telp");
gtk_entry_set_text(GTK_ENTRY(output5),tel);
output6=lookup_widget(button,"adressep");
gtk_entry_set_text(GTK_ENTRY(output6),adresse);
output7=lookup_widget(button,"mdpp");
gtk_entry_set_text(GTK_ENTRY(output7),mdp);

output8=lookup_widget(button,"cinp");
gtk_entry_set_text(GTK_ENTRY(output8),cin);
}



void
on_vols_button_enter                   (GtkButton       *button,
                                        gpointer         user_data)
{

char t[20];
        GtkWidget *treeview_vols_client;
        GtkWidget *input1;
	input1=lookup_widget(button,"rechercher_vols_entry");
	treeview_vols_client=lookup_widget(button,"treeview_vols_client");
	strcpy(t,gtk_entry_get_text(GTK_ENTRY(input1)));
	afficher_coord1 (treeview_vols_client,t);

}


void
on_hotels_button_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
char t[20];
        GtkWidget *treeview_hotels_client;
        GtkWidget *input1;
	input1=lookup_widget(button,"rechercher_hotel_entry");
	treeview_hotels_client=lookup_widget(button,"treeview_hotels_client");
	strcpy(t,gtk_entry_get_text(GTK_ENTRY(input1)));
	afficher_coordd (treeview_hotels_client,t);
}


void
on_voitures_button_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
char t[20];
        GtkWidget *treeview_location_voiture_client;
        GtkWidget *input1;
	input1=lookup_widget(button,"rechercher_voiture_entry");
	treeview_location_voiture_client=lookup_widget(button,"treeview_location_voiture_client");
	strcpy(t,gtk_entry_get_text(GTK_ENTRY(input1)));
	afficher_coord3 (treeview_location_voiture_client,t);
}


void
on_retourprofile_clicked               (GtkWidget      *button,
                                        gpointer         user_data)
{

profile=create_profile();
  Modification_des_informations =lookup_widget(button,"Modification_des_informations");
  gtk_widget_hide (Modification_des_informations);  
  gtk_widget_show (profile);

}


void
on_sejours_button_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
char t[20];
        GtkWidget *treeview_sejours_client;
        GtkWidget *input1;
	input1=lookup_widget(button,"rechercher_sejours_entry");
	treeview_sejours_client=lookup_widget(button,"treeview_sejours_client");
	strcpy(t,gtk_entry_get_text(GTK_ENTRY(input1)));
	afficher_coord4 (treeview_sejours_client,t);
}


void
on_payer_sejours_button_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{
payer_sejours=create_payer_sejours();
gtk_widget_show(payer_sejours);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"payer_sejours")));

GtkWidget *input17;
GtkWidget *input18;
GtkWidget *input19;
GtkWidget *input20;
GtkWidget *input21;
GtkWidget *input22;

typedef struct p

{
char nomm[10];
char payss[10];
char categoriee[10];
char p[10];
char fl[10];
char to[10];
    

}p;



p a;



input17=lookup_widget(button,"noms");
strcpy(a.nomm,gtk_entry_get_text(GTK_ENTRY(input17)));
input18=lookup_widget(button,"payss");  
strcpy(a.payss,gtk_entry_get_text(GTK_ENTRY(input18)));
input19=lookup_widget(button,"nbes");
strcpy(a.categoriee,gtk_entry_get_text(GTK_ENTRY(input19)));
input19=lookup_widget(button,"prixs");
strcpy(a.p,gtk_entry_get_text(GTK_ENTRY(input20)));
input21=lookup_widget(button,"flexibilite");
strcpy(a.fl,gtk_entry_get_text(GTK_ENTRY(input21)));
input22=lookup_widget(button,"tots");
strcpy(a.to,gtk_entry_get_text(GTK_ENTRY(input22)));





FILE *f;
f=fopen("paiementsejours.txt","a+");
fprintf(f,"%s %s %s %s %s %s \n",a.nomm,a.payss,a.categoriee,a.p,a.fl,a.to);
fclose(f); 

gtk_widget_destroy(payer_sejours);
}





void
on_retour_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
espace_client=create_espace_client();
  profile =lookup_widget(button,"profile");
  gtk_widget_hide (profile);  
  gtk_widget_show (espace_client);
  treeview_hotels_client=lookup_widget(espace_client,"treeview_hotels_client");
  affichage_Hotelss (treeview_hotels_client);
  treeview_vols_client=lookup_widget(espace_client,"treeview_vols_client");
  affichage_vols (treeview_vols_client);
  treeview_location_voiture_client=lookup_widget(espace_client,"treeview_location_voiture_client");
  affichage_voiture (treeview_location_voiture_client);
  treeview_sejours_client=lookup_widget(espace_client,"treeview_sejours_client");
  affichage_sejours (treeview_sejours_client);
}


void
on_profil_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
espace_client=create_espace_client();
profile=create_profile();
gtk_widget_show(profile);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espace_client")));

GtkWidget *output1;
GtkWidget *output2;
GtkWidget *output3;
GtkWidget *output4;
GtkWidget *output5;
GtkWidget *output6;
GtkWidget *output7;
GtkWidget *output8;
char nom[33];
char prenom[33];
char sexe[33];
char date[33];
char tel[33];
char adresse[33];
char mdp[33];
char cin[33];
affiche_profile(nom,prenom,sexe,date,tel,adresse,mdp,cin);
output1=lookup_widget(button,"nomp");
gtk_entry_set_text(GTK_ENTRY(output1),nom);
output2=lookup_widget(button,"prenomp");
gtk_entry_set_text(GTK_ENTRY(output2),prenom);
output3=lookup_widget(button,"sexep");  
gtk_entry_set_text(GTK_ENTRY(output3),sexe);
output4=lookup_widget(button,"datep");
gtk_entry_set_text(GTK_ENTRY(output4),date);
output5=lookup_widget(button,"telp");
gtk_entry_set_text(GTK_ENTRY(output5),tel);
output6=lookup_widget(button,"aressep");
gtk_entry_set_text(GTK_ENTRY(output6),adresse);
output7=lookup_widget(button,"mdpp");
gtk_entry_set_text(GTK_ENTRY(output7),mdp);
output8=lookup_widget(button,"cinp");
gtk_entry_set_text(GTK_ENTRY(output8),cin);
gtk_widget_show(profile);

on_modifier_clicked(profile,user_data);
}



void
on_actualiser_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
espace_client=create_espace_client();
gtk_widget_show(espace_client);
  treeview_hotels_client=lookup_widget(espace_client,"treeview_hotels_client");
  affichage_Hotelss (treeview_hotels_client);
  treeview_vols_client=lookup_widget(espace_client,"treeview_vols_client");
  affichage_vols (treeview_vols_client);
  treeview_location_voiture_client=lookup_widget(espace_client,"treeview_location_voiture_client");
  affichage_voiture (treeview_location_voiture_client);
  treeview_sejours_client=lookup_widget(espace_client,"treeview_sejours_client");
  affichage_sejours (treeview_sejours_client);
 treeview_reclamation_client=lookup_widget(espace_client,"treeview_reclamation_client");
  afficher_reclamation (treeview_reclamation_client);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espace_client")));
}


void
on_modifier1_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
profile=create_profile();
espace_client=create_espace_client();
//gtk_widget_hide(GTK_WIDGET(lookup_widget(objet,"Modifier_information")));
GtkEntry *input1;
GtkEntry *input2;
GtkEntry *input3;
GtkEntry *input4;
GtkEntry *input5;
GtkEntry *input6;
GtkEntry *input7;
GtkEntry *input8;
typedef struct profile
{
char Nom[30];
char Prenom[10];
char sexe[10];
char Date[300];
char tel[10];
char adresse[30];
char mot[30];
char cin[30];
}profile;
profile p,p1;
input1=lookup_widget(objet,"nomp");
strcpy(p.Nom,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(objet,"prenomp");
strcpy(p.Prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(objet,"sexp");
strcpy(p.sexe,gtk_entry_get_text(GTK_ENTRY(input3)));
input4=lookup_widget(objet,"datep");
strcpy(p.Date,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(objet,"telp");
strcpy(p.tel,gtk_entry_get_text(GTK_ENTRY(input5)));
input6=lookup_widget(objet,"adressep");
strcpy(p.adresse,gtk_entry_get_text(GTK_ENTRY(input6)));
input7=lookup_widget(objet,"mdpp");

strcpy(p.mot,gtk_entry_get_text(GTK_ENTRY(input7)));
input8=lookup_widget(objet,"cinp");

strcpy(p.cin,gtk_entry_get_text(GTK_ENTRY(input8)));
treeview_hotels_client=lookup_widget(espace_client,"treeview_hotels_client");
  affichage_Hotelss (treeview_hotels_client);
  treeview_vols_client=lookup_widget(espace_client,"treeview_vols_client");
  affichage_vols (treeview_vols_client);
  treeview_location_voiture_client=lookup_widget(espace_client,"treeview_location_voiture_client");
  affichage_voiture (treeview_location_voiture_client);
  treeview_sejours_client=lookup_widget(espace_client,"treeview_sejours_client");
  affichage_sejours (treeview_sejours_client);
 treeview_reclamation_client=lookup_widget(espace_client,"treeview_reclamation_client");
  afficher_reclamation (treeview_reclamation_client);

FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("profileclient.txt","a");
//f1=fopen("profileclient.tmp","w");
fprintf(f,"%s %s %s %s %s %s %s %s\n",p.Nom,p.Prenom,p.sexe,p.Date,p.tel,p.adresse,p.mot,p.cin) ;
/*
if (f!= NULL)
{
while (fscanf(f,"%s %s %s %s %s %s %s %s\n",p1.Nom,p1.Prenom,p1.sexe,p1.Date,p1.tel,p1.adresse,p1.mot,p1.cin)!=EOF) {
if (strcmp(p.Nom ,p1.Nom)==0)
{
fprintf(f1,"%s %s %s %s %s %s %s %s\n",p.Nom,p.Prenom,p.sexe,p.Date,p.tel,p.adresse,p.mot,p.cin) ;
}
else
fprintf(f1,"%s %s %s %s %s %s %s %s\n",p1.Nom,p1.Prenom,p1.sexe,p1.Date,p1.tel,p1.adresse,p1.mot,p1.cin) ;
}
*/
fclose(f);
//fclose(f1);
//remove("profileclient.txt");
//rename ("profileclient.tmp","profileclient.txt");
gtk_widget_show(espace_client);
}


void
on_valider_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeview_reclamation_client_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	gchar *name;
	gchar *surname;
	gchar *cin;
	gchar *datee;
	gchar *mes;



	GtkWidget *current;
	GtkTreeIter iter;


	GtkEntry *nom_client;
	GtkEntry *prenom_client;
	GtkEntry *cin_client;
	GtkEntry *date_client;
	GtkEntry *mes_client;




GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&name,1,&surname,2,&cin,3,&datee,4,&mes,-1);}

current=lookup_widget(treeview,"espace_client");


	cin_client=lookup_widget(current,"entry_cin_reclamation");
	gtk_entry_set_text(GTK_ENTRY(cin_client),cin);
	nom_client=lookup_widget(current,"entry_nom_reclamation");
	gtk_entry_set_text(GTK_ENTRY(nom_client),name);
	prenom_client=lookup_widget(current,"entry_prenom_reclamation");
	gtk_entry_set_text(GTK_ENTRY(prenom_client),surname);
	date_client=lookup_widget(current,"entry_date_reclamation");
	gtk_entry_set_text(GTK_ENTRY(date_client),datee);
	mes_client=lookup_widget(current,"entry_mes_reclamation");
	gtk_entry_set_text(GTK_ENTRY(mes_client),mes);
	
}


void
on_ajouter_reclamation_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window_ajouter_recmlamation;
window_ajouter_recmlamation=create_window_ajouter_recmlamation();
gtk_widget_show(window_ajouter_recmlamation);


gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espace_client")));
}


void
on_supprimer_reclamation_clicked       (GtkButton       *widget,
                                        gpointer         user_data)
{
	char num_CIN [10] ;
	
	GtkWidget *current;
	GtkWidget *treeview_vols_client;
	
	GtkEntry *cin_client_reclamation;

	current=lookup_widget(widget,"espace_client");
	treeview_vols_client=lookup_widget(widget,"treeview_reclamation_client");

	cin_client_reclamation=lookup_widget(current,"entry_cin_reclamation");
	


  	strcpy(num_CIN,gtk_entry_get_text(GTK_ENTRY(cin_client_reclamation)));


  	supprimer_reclamation (num_CIN);
  	afficher_reclamation (treeview_vols_client);
}

void
on_modifier_reclamation_clicked        (GtkWidget       *button,
                                        gpointer         user_data)
{
	agentss a;
	GtkWidget *current;
	
//GtkWidget *treeview1;	
        
	GtkEntry *nom_client;
	GtkEntry *prenom_client;	
	GtkEntry *mes_client;
	GtkEntry *cin_client;
        GtkEntry *date_client;

	GtkEntry *nom_client1;
	GtkEntry *prenom_client1;
	GtkEntry *mes_client1;
	GtkEntry *cin_client1;
        GtkEntry *date_client1;

	current=lookup_widget(button,"espace_client");
	//treeview1=lookup_widget(button,"treeview_reclamation_client");
	modifier_reclamation_client=create_modifier_reclamation_client();  

	nom_client=lookup_widget(current,"entry_nom_reclamation");
	prenom_client=lookup_widget(current,"entry_prenom_reclamation");
	cin_client=lookup_widget(current,"entry_cin_reclamation");
	mes_client=lookup_widget(current,"entry_mes_reclamation");
	date_client=lookup_widget(current,"entry_date_reclamation");


	strcpy(a.nom,gtk_entry_get_text(GTK_ENTRY(nom_client)));
  	strcpy(a.prenom,gtk_entry_get_text(GTK_ENTRY(prenom_client)));
  	strcpy(a.mes,gtk_entry_get_text(GTK_ENTRY(mes_client)));
	strcpy(a.num_CIN,gtk_entry_get_text(GTK_ENTRY(cin_client)));
	strcpy(a.date,gtk_entry_get_text(GTK_ENTRY(date_client)));

	nom_client1=lookup_widget(modifier_reclamation_client,"nomc_modif");
	prenom_client1=lookup_widget(modifier_reclamation_client,"prenomc_modif");
	mes_client1=lookup_widget(modifier_reclamation_client,"mesc_modif");
	cin_client1=lookup_widget(modifier_reclamation_client,"cinc_modif");
	date_client1=lookup_widget(modifier_reclamation_client,"datec_modif");


  	
	gtk_entry_set_text(GTK_ENTRY(nom_client1),a.nom);
	gtk_entry_set_text(GTK_ENTRY(prenom_client1),a.prenom);
	gtk_entry_set_text(GTK_ENTRY(mes_client1),a.mes);
	gtk_entry_set_text(GTK_ENTRY(cin_client1),a.num_CIN);
	gtk_entry_set_text(GTK_ENTRY(date_client1),a.date);




	gtk_widget_hide(current);
	gtk_widget_show(modifier_reclamation_client);
}


void
on_valider_reclamation_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

	agentss a1;
	GtkWidget *current;
	
		GtkWidget* notebook1;	
        
	GtkEntry *nom_rec;
	GtkEntry *prenom_rec;
	GtkEntry *mes;
	GtkEntry *cin_rec;
        GtkEntry *date_rec;

	current=lookup_widget(button,"modifier_reclamation_client");
	espace_client=create_espace_client();  

	nom_rec=lookup_widget(current,"nomc_modif");
	prenom_rec=lookup_widget(current,"prenomc_modif");
	cin_rec=lookup_widget(current,"cinc_modif");
	
	date_rec=lookup_widget(current,"datec_modif");
        mes=lookup_widget(current,"mesc_modif");

	strcpy(a1.nom,gtk_entry_get_text(GTK_ENTRY(nom_rec)));
  	strcpy(a1.prenom,gtk_entry_get_text(GTK_ENTRY(prenom_rec)));
	strcpy(a1.num_CIN,gtk_entry_get_text(GTK_ENTRY(cin_rec)));
        strcpy(a1.date,gtk_entry_get_text(GTK_ENTRY(date_rec))); 
	strcpy(a1.mes,gtk_entry_get_text(GTK_ENTRY(mes)));

	notebook1=lookup_widget(espace_client,"notebook1");
	gtk_notebook_set_current_page(notebook1,4);
	treeview_reclamation_client=lookup_widget(espace_client,"treeview_reclamation_client)");
	modifier_reclamation(a1);


treeview_hotels_client=lookup_widget(espace_client,"treeview_hotels_client");
  affichage_Hotelss (treeview_hotels_client);
  treeview_vols_client=lookup_widget(espace_client,"treeview_vols_client");
  affichage_vols (treeview_vols_client);
  treeview_location_voiture_client=lookup_widget(espace_client,"treeview_location_voiture_client");
  affichage_voiture (treeview_location_voiture_client);
  treeview_sejours_client=lookup_widget(espace_client,"treeview_sejours_client");
  affichage_sejours (treeview_sejours_client);
 treeview_reclamation_client=lookup_widget(espace_client,"treeview_reclamation_client");
  afficher_reclamation (treeview_reclamation_client);		
	gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"modifier_reclamation_client")));
	gtk_widget_show(espace_client);
gtk_widget_show(treeview_reclamation_client);
}

void
on_hist_payer_hotels_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
espace_client=lookup_widget(button,"espace_client");

		historique_payer_hotels=create_historique_payer_hotels();

treeview_payer_hotels=lookup_widget(historique_payer_hotels,"treeview_payer_hotels");
afficher_hist_hotels (treeview_payer_hotels);
		gtk_widget_show(historique_payer_hotels);
gtk_widget_show(treeview_payer_hotels);
}


void
on_treeview_payer_hotels_row_activated (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{


	gchar *nom;
	
	GtkWidget *current;
	GtkTreeIter iter;

	GtkWidget *nom_hotelss;


	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path))
	{
	gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&nom,-1);
	}

	current=lookup_widget(treeview,"historique_payer_hotels");

	nom_hotelss=lookup_widget(current,"nom_hotels");
	gtk_entry_set_text(GTK_ENTRY(nom_hotelss),nom);
}


void
on_modifier_payer_hotels_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_supprimer_payer_hotels_clicked      (GtkWidget       *button,
                                        gpointer         user_data)
{
	char nom1[10] ;
	GtkWidget *treeview_vols_client;
	GtkEntry *nom_hotels;
	
	treeview_vols_client=lookup_widget(button,"treeview_payer_hotels");
	nom_hotels=lookup_widget(button,"nom_hotels");
	

  	strcpy(nom1,gtk_entry_get_text(GTK_ENTRY(nom_hotels)));


  	supprimer_hist_hotels (nom1);
  	afficher_hist_hotels (treeview_vols_client);
}


void
on_treeview_vols_client_row_activated  (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{gchar *DEPART; 
gchar *DESTINATION;
gchar *DATEDEPART;
gchar *DATERETOUR;



GtkWidget *payer_hotels;
/*GtkWidget *current;*/
GtkTreeIter iter;
GtkWidget *L17;
GtkWidget *L18;
GtkWidget *L19;
GtkWidget *E6;
GtkWidget *E7;
GtkWidget *E8;
GtkWidget *E9;
GtkWidget *E10;
GtkWidget *E14;
GtkWidget *E15;
GtkWidget *E16;

GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&DEPART,1,&DESTINATION,2,&DATEDEPART,3,&DATERETOUR,-1);}
payer_vols = create_payer_vols();

E6=lookup_widget(payer_vols,"departv");
E7=lookup_widget(payer_vols,"destinationv");
E8=lookup_widget(payer_vols,"datedepartv");
E9=lookup_widget(payer_vols,"dateretourv");

gtk_entry_set_text(GTK_ENTRY(E6),DEPART);
gtk_entry_set_text(GTK_ENTRY(E7),DESTINATION);
gtk_entry_set_text(GTK_ENTRY(E8),DATEDEPART);
gtk_entry_set_text(GTK_ENTRY(E9),DATERETOUR);
gtk_widget_show (payer_vols);



}


void
on_treeview_hotels_client_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *NOMH; 
gchar *PAYSH;
gchar *NBEH;
gchar *PRIXH;



GtkWidget *payer_hotels;
/*GtkWidget *current;*/
GtkTreeIter iter;
GtkWidget *L17;
GtkWidget *L18;
GtkWidget *L19;
GtkWidget *E6;
GtkWidget *E7;
GtkWidget *E8;
GtkWidget *E9;
GtkWidget *E10;
GtkWidget *E14;
GtkWidget *E15;
GtkWidget *E16;

GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&NOMH,1,&PAYSH,2,&NBEH,3,&PRIXH,-1);}
payer_hotels = create_payer_hotels();

E6=lookup_widget(payer_hotels,"nomh");
E7=lookup_widget(payer_hotels,"paysh");
E8=lookup_widget(payer_hotels,"nbeh");
E9=lookup_widget(payer_hotels,"prixh");

gtk_entry_set_text(GTK_ENTRY(E6),NOMH);
gtk_entry_set_text(GTK_ENTRY(E7),NBEH);
gtk_entry_set_text(GTK_ENTRY(E8),PAYSH);
gtk_entry_set_text(GTK_ENTRY(E9),PRIXH);
gtk_widget_show (payer_hotels);

}


void
on_treeview_location_voiture_client_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *PAYS; 
gchar *VILLE;
gchar *AGENCE;
gchar *MODELE;



GtkWidget *payer_location_voitures;
/*GtkWidget *current;*/
GtkTreeIter iter;
GtkWidget *L17;
GtkWidget *L18;
GtkWidget *L19;
GtkWidget *E6;
GtkWidget *E7;
GtkWidget *E8;
GtkWidget *E9;
GtkWidget *E10;
GtkWidget *E14;
GtkWidget *E15;
GtkWidget *E16;

GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&PAYS,1,&VILLE,2,&AGENCE,3,&MODELE,-1);}
payer_location_voitures = create_payer_location_voitures();

E6=lookup_widget(payer_location_voitures,"payl");
E7=lookup_widget(payer_location_voitures,"vil");
E8=lookup_widget(payer_location_voitures,"agel");
E9=lookup_widget(payer_location_voitures,"modl");

gtk_entry_set_text(GTK_ENTRY(E6),PAYS);
gtk_entry_set_text(GTK_ENTRY(E7),VILLE);
gtk_entry_set_text(GTK_ENTRY(E8),AGENCE);
gtk_entry_set_text(GTK_ENTRY(E9),MODELE);
notebook1=lookup_widget(espace_client,"notebook1");
	gtk_notebook_set_current_page(notebook1,4);
gtk_widget_show (payer_location_voitures);

}


void
on_treeview_sejours_client_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *HOTELS; 
gchar *VILLES;
gchar *CATEGORIES;
GtkWidget *payer_sejours;
/*GtkWidget *current;*/
GtkTreeIter iter;
GtkWidget *L17;
GtkWidget *L18;
GtkWidget *L19;
GtkWidget *E6;
GtkWidget *E7;
GtkWidget *E8;
GtkWidget *E9;
GtkWidget *E10;
GtkWidget *E14;
GtkWidget *E15;
GtkWidget *E16;

GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&HOTELS,1,&VILLES,2,&CATEGORIES,-1);}
payer_sejours = create_payer_sejours();

E6=lookup_widget(payer_sejours,"noms");
E7=lookup_widget(payer_sejours,"payss");
E8=lookup_widget(payer_sejours,"nbes");


gtk_entry_set_text(GTK_ENTRY(E6),HOTELS);
gtk_entry_set_text(GTK_ENTRY(E7),VILLES);
gtk_entry_set_text(GTK_ENTRY(E8),CATEGORIES);

gtk_widget_show (payer_sejours);


}


void
on_valider_modifier_payer_hotels_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}

