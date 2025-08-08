/********************************************************
 *                    pontificia Universidad javeriana
 *                    --------------=------------------
 * Autor: Santiago Hernandez Morales.
 * fecha: 31 de julio 2025
 *Docente: J.corredor
 *objetivo: punteros en C
 **********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

int main(int argc, char *argv[]) {
  if (argc < 4) {
    printf("$./ejecutable valor1 valor2 valor3\n");
    exit(0);
  }

  float altura = (float)atof(argv[1]);
  float masacorporal = (float)atof(argv[2]); 
  int N = atoi(argv[3]);

  printFuntion();

  float valorIMC = imcFuncion(masacorporal, altura);
  printf("el indice de masa corporal es: %f\n", valorIMC);
  printf("*****************************\n\n\n\n");

  printf("*****************************\n");
  printf("*            matrices        *\n");
  printf("*****************************\n");
  float m1, m2, m3;
  llenarMatriz(N, m1, m2);
  impMatrix(m1, N);
  impMatrix(m2, N);

  float mC = matrixMult(N, m1, m2);
  impMatrix(mC, N);
  impMatrix(mC, N);
  return 0;
}