## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = espace-agent

espace_agent_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
	Hotels.c Hotels.h \
	users.c users.h	\
	inscriptionClient.c inscriptionClient.h	\
	login.c login.h \
	agents.c agents.h \
	coordonnees.c coordonnees.h \
	Hotels1.c Hotels1.h \
	vols.c vols.h \
	voiture.c voiture.h \
	sejours.c sejours.h \
	coordonnees1.c coordonnees1.h \
	cordvoiture.c cordvoiture.h \
	cordvol.c cordvol.h \
	cordsejours.c cordsejours.h \
	profile.c profile.h \
	rec.c rec.h \
	hist_hotels.c hist_hotels.h	

espace_agent_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

