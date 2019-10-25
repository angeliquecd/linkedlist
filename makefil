#define runner main
#define fns linkedlist
all: main.o linkedlist.o
	gcc -o program main.o linkedlist.o

runner.o: runner.c fns.h
	gcc -c runner.c

fns.o: fns.c fns.h
	gcc -c fns.c
run:
	./program
