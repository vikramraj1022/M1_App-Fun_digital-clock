#MAKEFILE

all: main

main: main.o getTime.o
	gcc main.o getTime.o -o main

main.o: main.c
	gcc -c main.c

getTime.o: getTime.c
	gcc -c getTime.c

clean:
	rm -f *.o 