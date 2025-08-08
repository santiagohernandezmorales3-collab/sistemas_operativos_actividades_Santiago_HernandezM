/********************************************************
 *                    pontificia Universidad javeriana
 *                    --------------=------------------
 * Autor: Santiago Hernandez Morales.
 * fecha: 31 de julio 2025
 *Docente: J.corredor
 *objetivo: punteros en C
 **********************************************************/
// librerias a usar
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// FUNCION PRINCIPAL.

// Se lee la altura, la masa y el tamaño de las matrices desde la linea de
// comandos. el arreglo argv[] contiene los argumentos ingresados por el
// usuario. argc representa el numero de argumentos ingresados por el usuario.
int main(int argc, char *argv[]) {
  // alt= altura, mas=masa, N=tamaño de la matrices cuadradas (NXN)
  float alt;
  float mas;
  int N;
  if (argc < 4) {
    // se verifica que el numero de argumentos sea el correcto
    printf("Uso: %s <alt> <mas> <N>\n", argv[0]);
    // se imprime el uso correcto del programa
    // el programa retorna 1 si no se ingresan los argumentos correctos
    return 1;
  }
  // atof convierte la variable de tipo char a float y lo almacena en la
  // variable alt
  alt = atof(argv[1]);
  // atof convierte la variable de tipo char a float y lo almacena en la
  // variable mas
  mas = atof(argv[2]);
  // atoi convierte la variable de tipo char a int y lo almacena en la variable
  // N.
  N = atoi(argv[3]);
  // se ejecuta la funcion printFuntion() y se imprime el titulo del taller.
  printFuntion();
  // se ejecuta la funcion imcFuncion() y se imprime el indice de masa corporal.
  float imc = imcFuncion(mas, alt);
  printf("el indice de masa corporal es: %.2f\n", imc);
  printf("*****************************\n\n\n\n");
  // se imprime el enunciado de matrices.

  printf("*****************************\n");
  printf("*            matrices        *\n");
  printf("*****************************\n");
  // sizeof retorna el tamaño en bytes de la variable float, y se multiplica por
  // el tamaño de la matriz N luego malloc reserva el espacio de memoria
  // necesario para almacenar la matriz y float es el tipo de dato que se va a
  // almacenar en la matriz.
  // m1 es un puntero que apunta a la matriz A y m2 es un puntero que apunta a
  // la matriz B y mC es un puntero que apunta a la matriz C.
  float *m1 = (float *)malloc(N * N * sizeof(float));
  float *m2 = (float *)malloc(N * N * sizeof(float));
  float *mC = (float *)malloc(N * N * sizeof(float));
  // se verifica que el espacio de memoria se haya reservado correctamente, de
  // lo contrario se imprime un mensaje de error y el programa retorna 1.
  if (m1 == NULL || m2 == NULL || mC == NULL) {
    printf("error al guardar en memoria\n");
    return 1;
  }
  // se llena las matrices A y B con valores aleatorios.

  llenarMatriz(N, m1, m2);
  printf("\nmatriz A:\n");
  // se imprime la matriz A.
  impMatrix(m1, N);
  printf("\nmatriz B:\n");
  // se imprime la matriz B.
  impMatrix(m2, N);
  // se multiplican las matrices A y B y se almacena el resultado en la matriz
  // C.
  matrixMult(N, m1, m2, mC);
  printf("\nEl resultado de la mltiplicacion\n");
  // se imprime la matriz resultante de multiplicar A y B.
  impMatrix(mC, N);

  // se libera el espacio de memoria reservado para las matrices A, B Y C.
  free(m1);
  free(m2);
  free(mC);

  // el programa retorna 0 si se ejecuta de manera correcta.
  return 0;
}