# -*- makefile -*-
#
# arch/parisc/Makefile
#
# Special rules for this architecture.  Note that this is actually
# included from the main Makefile, and that pathnames should be
# accordingly.
#

OPTFLAGS = -Os -fomit-frame-pointer
BITSIZE  = 32

archclean: