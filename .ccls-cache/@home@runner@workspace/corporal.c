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
  float alt;
  float mas;
  int N;
  if (argc < 4) {
    printf("Uso: %s <alt> <mas> <N>\n",argv[0]);
    return 1;
  }

   alt = atof(argv[1]);
   mas = atof(argv[2]); 
   N = atoi(argv[3]);

  printFuntion();

  float imc=imcFuncion(mas, alt);
  printf("el indice de masa corporal es: %.2f\n", imc);
  printf("*****************************\n\n\n\n");

  printf("*****************************\n");
  printf("*            matrices        *\n");
  printf("*****************************\n");
  float *m1=(float *)malloc(N * N *sizeof(float));
  float *m2=(float *)malloc(N * N *sizeof(float));
  float *mC=(float *)malloc(N * N *sizeof(float));
  if(m1==NULL||m2==NULL||mC==NULL){
    printf("error al guardar en memoria\n");
    return 1;
  }

  llenarMatriz(N,m1,m2);
  printf("\nmatriz A:\n");
  impMatrix(m1,N);
  printf("\nmatriz B:\n");
  impMatrix(m2,N);

  matrixMult( N, m1, m2, mC);
  printf("\nEl resultado de la mltiplicacion\n");
  impMatrix(mC,N);

  free(m1);
  free(m2);
  free(mC);

  return 0;
  
}