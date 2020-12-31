main: all.h main.o union.o intersection.o complement.o turnToString.o printSet.o
	    gcc -o main main.o union.o intersection.o complement.o turnToString.o printSet.o

main.o: all.h main.c turnToString.c printSet.c union.c intersection.c complement.c
	    gcc -c main.c turnToString.c printSet.c union.c intersection.c complement.c

union.o: all.h union.c printSet.c
	    gcc -c union.c printSet.c

intersection.o: all.h intersection.c printSet.c
	    gcc -c intersection.c printSet.c

complement.o: all.h complement.c printSet.c
	    gcc -c complement.c printSet.c

printSet.o: all.h printSet.c
	    gcc -c printSet.c
