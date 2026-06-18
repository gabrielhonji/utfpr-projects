/**
 * @file ex9.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 9 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba e armazene uma matriz de números inteiros de tamanho 4x3, em seguida o programa deverá exibir:
 * a) A soma de todos os elementos pares positivos da matriz;
 * b) A média de todos os elementos da matriz;
 * c) A quantidade de todos os elementos impares da matriz;
 * d) A soma dos elementos da segunda linha da matriz;
 * e) O maior elemento da terceira coluna da matriz;
 * 
 */

#include <stdio.h>

int main() {
    int matrix[4][3], sumEven = 0, sumAll = 0, averageAll = 0, counterOdd = 0, sumSecondRow = 0, biggerNumCol = 0;

    // Popula a matrix
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 3; col++) {
            printf("Digite o valor da posição (%d, %d) da matriz: ", row, col);
            scanf("%d", &matrix[row][col]);
        }
    }

    // Calcula e define cada uma das variaveis
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 3; col++) {
            if (matrix[row][col] % 2 != 0) // Verifica se é impar
                counterOdd++;
            else if (matrix[row][col] >= 0) // Verifica se é positivo
                sumEven += matrix[row][col];

            if (row == 1) // Soma elementos segunda linha
                sumSecondRow += matrix[row][col];

            if (col == 2 && (matrix[row][col] > biggerNumCol || biggerNumCol == 0)) // Define o maior valor da 3 coluna
                biggerNumCol = matrix[row][col];

            sumAll += matrix[row][col]; // Soma valor de todos os elementos
        }
    }

    // Calcula a média
    averageAll = sumAll / 12;

    // Exibe todos os dados requisitados
    printf("\nEstatísticas:\na) A soma de todos os elementos pares positivos é: %d.\nb) A média de todos os elementos é: %d.\nc) A quantidade de elementos ímpares é: %d.\nd) A soma dos elementos da segunda linha é: %d.\ne) O maior elemento da terceira coluna é: %d.\n", sumEven, averageAll, counterOdd, sumSecondRow, biggerNumCol);

    return 0;
}
