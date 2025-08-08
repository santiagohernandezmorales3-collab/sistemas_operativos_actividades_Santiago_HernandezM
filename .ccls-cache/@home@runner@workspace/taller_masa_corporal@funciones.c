/********************************************************
 *                    pontificia Universidad javeriana
 *                    --------------=------------------
 * Autor: Santiago Hernandez Morales.
 * fecha: 31 de julio 2025
 *Docente: J.corredor
 *objetivo: punteros en C
 **********************************************************/

/***************************Modulo funciones*****************/

// LIBRERIAS A USAR
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// imprime el titulo de el taller.
int printFuntion() {
  printf("*****************************\n");
  printf("Calculadora de Masa Corporal\n");
  printf("*****************************\n");
  return 0;
}
// la funcion utiliza la formula imc=masa/(altura*altura) para calcular el
// indice de masa corporal.
//  donde la masa y la altura son los parametros de la funcion y el imc es el
//  valor que retorna la funcion.
float imcFuncion(float masa, float altura) { return masa / (altura * altura); }
// se imprime la matriz A de tamaño NXN.
void impMatrix(float *mA, int N) {
  // el ciclo recorre las filas de la matriz.
  for (int i = 0; i < N; i++) {
    // el ciclo recorre las columnas de la matriz.
    for (int j = 0; j < N; j++) {
      // se imprime cada elemento de la matriz usando 7 espacion y dos
      // decimales.
      // la posicion de cada elemento de la matriz de calcula usando la
      // expresion i*N+j Donde i es el numero de fila, j el numero de la columna
      // y N el tamaño de la matriz. posicionElemento=i*N+j
      printf("%7.2f ", mA[i * N + j]);
    }
    printf("\n");
  }
}
// La funcion se encarga de multiplicar las matrices A y B y guarda el resultado
// en la matriz C.
//  los parametros de la funcion son los tamaños de las matrices (N) y los
//  punteros a que apuntan a las matrices A, B y C.
void matrixMult(int N, float *mA, float *mB, float *mC) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      // se inicializa cada elemento de la matriz C en 0 antes de realizar la
      // multiplicacion entre las matrices A y B.
      mC[i * N + j] = 0;
      for (int t = 0; t < N; t++) {
        // Se realiza la multiplicacion entre las filas de la matriz A y las
        // columnas de la matriz B y se almacena el resultado de la
        // multiplicacion en C. la posicion de cada elemento de la matriz se
        // calcula usando la expresion i*N+j.
        mC[i * N + j] += mA[i * N + t] * mB[t * N + j];
      }
    }
  }
}
// Esta funcion se encarga de llenar las matrices A y B con valores aleatorios.
void llenarMatriz(int N, float *mA, float *mB) {
  // el ciclo recorre las filas de las matrices.
  for (int i = 0; i < N; i++) {
    // el ciclo recorre las columnas de las matrices.
    for (int j = 0; j < N; j++) {
      // se llenan los espacios de la matriz A con valores aleatorios que van de
      // 0 a 1.1979. debido a que se multiplica el numero aleatorio por 0.0121
      mA[i * N + j] = (float)(rand() % 100) * 0.0121;
      // se llenan los espacios de la matriz B con valores aleatorios que van de
      // 0 a 99.debido a que se toma el modulo 100 del numero aleatorio
      mB[i * N + j] = (float)(rand() % 100);
    }
  }
}