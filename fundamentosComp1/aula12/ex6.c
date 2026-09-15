/**
 * @file ex6.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 6 - Aula 12
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que multiplique as matrizes A e D abaixo gerando a matriz AD
 * 
 */

#include <stdio.h>

int main() {
    int matrixA[2][3]={{3, 7, 10}, {1, 5, 0}}, matrixD[3][2]={{1, 2}, {5, 6}, {2, 3}};
    int sizeRowA = sizeof(matrixA) / sizeof(matrixA[0]); // Calcula a quantidade de linhas da matriz A
    int sizeColsA = sizeof(matrixA[0]) / sizeof(matrixA[0][0]); // Calcula a quantidade de colunas da matriz A
    int sizeRowsD = sizeof(matrixD) / sizeof(matrixD[0]); // Calcula a quantidade de linhas da matriz D
    int sizeColsD = sizeof(matrixD[0]) / sizeof(matrixD[0][0]); // Calcula a quantidade de colunas da matriz D

    if (sizeColsA == sizeRowsD) { // Condição do produto entre matrizes
        int matrixAD[sizeRowA][sizeColsD]; // Declara o tamanho da matriz AD a partir das proporções das outras matrizes

        for (int colD = 0; colD < sizeColsD; colD++) { // Laço das colunas da matrizAD
            for (int rowA = 0, sumPosition = 0; rowA < sizeRowA; rowA++) { // Laço das linhas da matrizAD
                sumPosition = 0;
                for (int index = 0, indexSum = 0; index < sizeColsA; index++) { // Laço do cálculo dos produtos
                    indexSum = matrixA[rowA][index] * matrixD[index][colD];
                    sumPosition += indexSum;
                }
                matrixAD[rowA][colD] = sumPosition;
            }
        }

        // Exibir a matriz AD
        printf("A matriz AD:\n");
        for(int row = 0; row < sizeRowA; row++) {
            for(int col = 0; col < sizeRowA; col++) {
                printf("%d ", matrixAD[row][col]);
            }
            printf("\n");
        }
    } else
        printf("As matrizes inseridas não atendem as condições do produto de matrizes.");

    return 0;
}
