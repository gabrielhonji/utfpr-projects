/**
 * @file ex5.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 5 - Aula 12
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que some as matrizes A e B, gerando C
 * 
 */

#include <stdio.h>
#define matrixSize 3

int main() {
    int matrixA[matrixSize][matrixSize], matrixB[matrixSize][matrixSize], matrixC[matrixSize][matrixSize];

    // Popula a matriz
    for(int row = 0, counter = 1; row < matrixSize; row++) {
        for(int col = 0; col < matrixSize; col++, counter++) {
            matrixA[row][col] = counter;
            matrixB[row][col] = counter * 2;
        }
    }
    
    // Define a matriz C
    for(int row = 0; row < matrixSize; row++) {
        for(int col = 0; col < matrixSize; col++) {
            matrixC[row][col] = matrixA[row][col] + matrixB[row][col];
        }
    }

    // Exibir matriz
    printf("A matriz C:\n");
    for(int row = 0; row < matrixSize; row++) {
        for(int col = 0; col < matrixSize; col++) {
            printf("%d ", matrixC[row][col]);
        }
        printf("\n");
    }


    return 0;
}
