#ifndef FUNCIONES_H
#define FUNCIONES_H
// MODULO INTERFAZ FUNCIONES.

// esta funcion se encarga de imprime el titulo del  taller.
int printFuntion();
// Esta funcion se encarga de imprimir el indice de masa corporal utilizando la
// siguiente formula. imc=masa/(altura*altura);
float imcFuncion(float masa, float altura);
// imprime la matriz cuadrada de tamaño NxN
//  mA es el puntero que apunta a la matriz
// N representa el tamaño de la matriz cuadrada (NXN)
void impMatrix(float *mA, int N);
// Esta funcion se encarga de llenar las matrices A y B con valores aleatorios.
// N es el tamaño de las matrices cuadradas (NXN)
void llenarMatriz(int N, float *mA, float *mB);
// Esta funcion se encarga de multiplicar las matrices A y B y guardar el
// resultado en la matriz C. Donde C es la matriz resultante de multipliar A y
// B. N es el tamaño de las matrices cuadradas (NXN)
float matrixMult(int N, float *mA, float *mB, float *mC);

#endif