TOP=	.

SUBDIR=	src

all:		all-subdir
install:	install-subdir
deinstall:	deinstall-subdir
clean:		clean-subdir
cleandir:	cleandir-subdir
depend:		depend-subdir

reconfigure:
	rm -f configure
	cat configure.in | mkconfigure > configure
	chmod 755 configure


include ${TOP}/mk/build.subdir.mk
