#include <gtk/gtk.h>


void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_Ajouter_clicked                     (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_Afficher_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_Modifier_clicked                    (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_Supprimer_clicked                   (GtkWidget       *widget,
                                        gpointer         user_data);



void
on_Mon_profil_clicked                  (GtkWidget       *widget,
                                        gpointer         user_data);

/*void
on_se_deconnecter_clicked              (GtkButton       *widget,
                                        gpointer         user_data);*/
void
on_button1_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

gboolean
on_chambre_nbr_combo_button_press_event
                                        (GtkWidget       *widget,
                                        GdkEventButton  *event,
                                        gpointer         user_data);

void
on_chambre_nbr_combo_changed           (GtkComboBox     *combobox,
                                        gpointer         user_data);


gboolean
on_Hotels_button_press_event           (GtkLabel        *label,
                                        gchar           *arg1,
                                        gpointer         user_data);

void
on_login_button_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data);



void
on_valider_ajouthotel_clicked          (GtkWidget       *widget,
                                        gpointer         user_data);


void
on_modifier_hotel_clicked              (GtkWidget       *current,
                                        gpointer         user_data);

void
on_retour_ajout_hotelagent_clicked     (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_retour_modif_hotelagent_clicked     (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_sedeconnecter_agent_clicked         (GtkButton       *widget,
                                        gpointer         user_data);
void
on_Rechercher_hotel_agent_clicked      (GtkButton       *widget,
                                        gpointer         user_data);

void
on_actualiser_recherche_hotel_agent_clicked
                                        (GtkWidget       *button,
                                        gpointer         user_data);

void
on_calendar1_day_selected_double_click (GtkWidget     *widget,
                                        gpointer         user_data);



void
on_rechercher_hotel_client_guest_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);


void
on_seConnecterFirstInterface_clicked   (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_valider_inscription_client_clicked  (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_Retour_inscription_client_clicked   (GtkButton       *button,
                                        gpointer         user_data);

void
on_calendar_inscription_client_day_selected_double_click
                                        (GtkWidget 	*widget,
                                        gpointer         user_data);

void
on_SinscrireFirstInterface_clicked     (GtkWidget       *widget,
                                        gpointer         user_data);



void
on_button_deconnecter_admin_clicked    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_profil_admin_clicked         (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_supprimer_agents_par_admin_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_modifier_agents_par_admin_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_ajouter_agents_par_admin_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_afficher_agents_par_admin_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_identifier_admin_clicked     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_ajouuut_agent_clicked        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_retour_ajout_vers_admin_clicked
                                        (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_modiffff_agent_clicked       (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button_retour_modif_vers_admin_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview_liste_agents_par_admin_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_modifier_profil_admin_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_valider_modif_admin_clicked  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_valider_modif_admin_clicked  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_edit_profil_admin_clicked    (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button_cam_agents_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_rechercher_agent_par_admin_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_Mapview_clicked                     (GtkButton       *button,
                                        gpointer         user_data);


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_Rechercher_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

gboolean
on_Hotels_button_press_event           (GtkLabel        *label,
                                        gchar           *arg1,
                                        gpointer         user_data);

void
on_treeview3_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview4_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_envoyer_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_mon_profil_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);
void
on_se_deconnecter_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_payerhotels_clicked                 (GtkButton       *button,
                                        gpointer         user_data);



void
on_payervols_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_payerlocationvoitures_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_modifier_clicked                    (GtkWidget      *button,
                                        gpointer         user_data);

void
on_payervols_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_payervols_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_payer_sejours_clicked        (GtkButton       *button1,
                                        gpointer         user_data);

void
on_vols_button_enter                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_hotels_button_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_voitures_button_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_sejours_button_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_retourprofile_clicked               (GtkWidget       *button,
                                        gpointer         user_data);

void
on_sejours_button_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_payer_sejours_button_clicked        (GtkButton       *button,
                                        gpointer         user_data);


void
on_retour_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_profil_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_profil_activate                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_actualiser_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_modifier1_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_valider_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview_reclamation_client_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_ajouter_reclamation_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_supprimer_reclamation_clicked       (GtkButton       *widget,
                                        gpointer         user_data);

void
on_modifier_reclamation_clicked        (GtkWidget      *button,
                                        gpointer         user_data);

void
on_valider_reclamation_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_hist_payer_hotels_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview_payer_hotels_row_activated (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_modifier_payer_hotels_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_supprimer_payer_hotels_clicked      (GtkWidget       *button,
                                        gpointer         user_data);

void
on_treeview_vols_client_row_activated  (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview_hotels_client_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview_location_voiture_client_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview_sejours_client_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_valider_modifier_payer_hotels_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);
