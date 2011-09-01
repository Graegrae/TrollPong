
SUBDIRS = \
	data
## Process this file with automake to produce Makefile.in

## Created by Anjuta

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" $(PINGPONG_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = pingpong

pingpong_SOURCES = \
	main.cc \
	main_func.h \
	main_func.cxx \
	ball.h \
	ball.cc \
	score.h \
	score.cc

pingpong_LDFLAGS = 

pingpong_LDADD = $(PINGPONG_LIBS)


data_DATA = 
