/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 12
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e retorne a soma dos elementos da sua diagonal principal e da sua diagonal secundária;
 * 
 */

#include <stdio.h>
#define matrixSize 3

int main() {
    int matrix[matrixSize][matrixSize] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    int mainSum = 0, secondarySum = 0;

    for(int row = 0; row < matrixSize; row++) {
        for(int col = 0; col < matrixSize; col++) {
            if(row == col) { // Valida se é um elemento da diagonal principal
                mainSum += matrix[row][col];
            }
            if (row + col == matrixSize - 1) { // Valida se é um elemento da diagonal secundária
                secondarySum += matrix[row][col];
            }
        }
    }

    printf("A soma da diagonal principal é: %d\nJá a soma da diagonal secundária é: %d\n", mainSum, secondarySum);

    return 0;
}
