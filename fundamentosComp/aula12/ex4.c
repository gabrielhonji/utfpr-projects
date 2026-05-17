/**
 * @file ex4.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 4 - Aula 12
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que multiplique por 5 a matriz A (preenchida a partir do teclado) para gerar a matriz C
 * 
 */

#include <stdio.h>
#define matrixSize 3
#define scalar 5

int main() {
    int matrixA[matrixSize][matrixSize], matrixC[matrixSize][matrixSize];

    // Popula a matriz
    for(int row = 0, matrixValue; row < matrixSize; row++) {
        for(int col = 0; col < matrixSize; col++) {
            printf("Digite o valor da posição [%d][%d] da matriz: ", row, col);
            scanf("%d", &matrixValue);

            matrixA[row][col] = matrixValue;
        }
    }
    
    // Define a matriz C
    for(int row = 0; row < matrixSize; row++) {
        for(int col = 0; col < matrixSize; col++) {
            matrixC[row][col] = matrixA[row][col] * scalar;
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
