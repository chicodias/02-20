all: lista.o main.o
	gcc -std=c99 -Wall lista.o main.o -o sacolas

lista.o:
	gcc -c -std=c99 -Wall lista.c

main.o:
	gcc -c -std=c99 -Wall main.c

run:
	./sacolas;
