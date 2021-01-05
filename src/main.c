/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"
#include "vols.h"
#include "voiture.h"
#include "sejours.h"
int
main (int argc, char *argv[])
{
  GtkWidget *firstinterface;
  GtkWidget *treeview1;
  GtkWidget *treeview9;
  GtkWidget *treeview10;
  GtkWidget *treeview11;
 // GtkWidget *treeview1;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  firstinterface = create_first_interface  ();
  


gtk_widget_show (firstinterface);
treeview1=lookup_widget(firstinterface,"treeview7");
treeview9=lookup_widget(firstinterface,"treeview9");
  affichage_Hotels (treeview1);
  affichage_vols (treeview9);
treeview10=lookup_widget(firstinterface,"treeview10");
  affichage_voiture (treeview10);
treeview11=lookup_widget(firstinterface,"treeview11");
  affichage_sejours (treeview11);

  gtk_main ();
  return 0;
}
