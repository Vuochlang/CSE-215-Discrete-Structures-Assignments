main: all.h main.o getSum.o isPrime.o
	gcc -o main main.o getSum.o isPrime.o

isPrime.o: all.h isPrime.c
	gcc -c isPrime.c

getSum.o: all.h isPrime.c getSum.c
	gcc -c isPrime.c getSum.c

main.o: all.h main.c getSum.c
	gcc -c main.c getSum.c
