/**
 * @file ex7.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 7 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba duas matrizes de números inteiros A e B, ambas 2x3. Em seguida calcule uma matriz C segundo a fórmula C = (A + B) * 2. Mostre a matriz C resultante.
 * 
 */

#include <stdio.h>

int main() {
    int matrixA[2][3], matrixB[2][3], matrixC[2][3];

    // Popula a matriz A
    printf("Insira os valores para a matriz A (2, 3):\n");
    for (int row = 0, cellValue; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("Digite o valor da célula (%d, %d) da matriz A: ", row + 1, col + 1);
            scanf("%d", &cellValue);
            matrixA[row][col] = cellValue;
        }
    }
    
    // Popula a matriz B
    printf("\nInsira os valores para a matriz B (2, 3):\n");
    for (int row = 0, cellValue; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("Digite o valor da célula (%d, %d) da matriz B: ", row + 1, col + 1);
            scanf("%d", &cellValue);
            matrixB[row][col] = cellValue;
        }
    }

    // Calcula a matriz C
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            matrixC[row][col] = (matrixA[row][col] + matrixB[row][col]) * 2;
        }
    }

    // Exibe a matriz C
    printf("\nA matriz resultante C a partir da fórmula C = (A + B) * 2:\n");
    for (int row = 0, rowPrinted = 0; row < 5; row++) {
        if (row % 2 == 0) {
            printf("-----------------------------------------------------------\n");
            continue;
        }

        for (int col = 0, colPrinted = 0; col < 7; col++) {
            if (col % 2 == 0) {
                printf("| ");
                continue;
            }

            printf("%d ", matrixC[rowPrinted][colPrinted]); // Para exibir os valores corretos da matriz C, dividi as coordenadas de C e da matriz sem nome que é responsável por desenhar as bordas internas e externas da matriz
            colPrinted++;
        }
        rowPrinted++;
        printf("\n");
    }

    return 0;
}
