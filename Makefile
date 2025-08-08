 	#	compilador que se va a usar
CC=gcc
	#	opciones de compilacion
CFLAGS= -Wall -std=c11
 	#	archivos que se generaran al compilar por separado
OBJ=prog01.o modulo.o

 	#	nombre del ejecutable:
all:programa

 	#	genera el ejecutable programa
programa: $(OBJ)
	$(CC) $(CFLAGS) -o programa $(OBJ)

 	#	forma de compilar prog01.c
prog01.o: prog01.c modulo.h
	$(CC) $(CFLAGS) -c prog01.c

 	#	forma de compilar modulo.c modulo.h
modulo.o: modulo.c modulo.h
	$(CC) $(CFLAGS) -c modulo.c

  #	clean limpia los archivos generados
	#	PHONY indica que un target no es un archivo real.
.PHONY: clean
clean:
	rm -f *.o programa



