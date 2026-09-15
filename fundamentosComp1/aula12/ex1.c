/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Aula 12
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie uma matriz identidade com dimensões 5x5;
 * 
 */

#include <stdio.h>

int main() {
    int matrixIdentity[5][5];

    // Criar os elementos da matriz identidade
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 5; col++) {
            if(row == col) {
                matrixIdentity[row][col] = 1;
            } else {
                matrixIdentity[row][col] = 0;
            }
        }
    }

    // Exibir matriz
    printf("A matriz identidade:\n");
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 5; col++) {
            printf("%d ", matrixIdentity[row][col]);
        }
        printf("\n");
    }

    return 0;
}
