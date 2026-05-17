/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 3 - Aula 12
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Construa um programa que leia uma matriz de tamanho 5x5 e escreva: O valor e localização (linha, coluna) do maior valor encontrado na matriz
 * 
 */

#include <stdio.h>
#define matrixSize 5

int main() {
    int matrix[matrixSize][matrixSize];
    int biggerNum, biggerNumPosition[2];

    // Popula a matriz
    for(int row = 0, counter = 1; row < matrixSize; row++) {
        for(int col = 0; col < matrixSize; col++, counter++) {
            matrix[row][col] = counter;
        }
    }
    
    // Escaneia e define o valor do maior número
    for(int row = 0; row < matrixSize; row++) {
        for(int col = 0; col < matrixSize; col++) {
            if(row == 0 && col == 0) {
                biggerNum = matrix[row][col];
                biggerNumPosition[0] = 0;
                biggerNumPosition[1] = 0;
            } // Define um primeiro valor para se comparar, não podemos definir 0 como default pois a matriz pode ser de números negativos
            else if(matrix[row][col] > biggerNum) {
                biggerNum = matrix[row][col];
                biggerNumPosition[0] = row + 1; // Define a posição x do número
                biggerNumPosition[1] = col + 1; // Define a posição y do número
            }
        }
    }

    printf("O maior número encontrado foi %d, na %dª linha e %dª coluna.\n", biggerNum, biggerNumPosition[0], biggerNumPosition[1]);

    return 0;
}
