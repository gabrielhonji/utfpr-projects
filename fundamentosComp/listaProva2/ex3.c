/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 3 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que solicite o tamanho de um quadrado e mostre a borda de um quadrado utilizando o caracter #. 
 * 
 */

#include <stdio.h>

int main() {
    int squareSize;
    
    do {
        printf("Digite o tamanho de um quadrado: ");
        scanf("%d", &squareSize);
        if (squareSize < 1)
            printf("Tamanho inválido, escolha um número positivo diferente de zero, tente novamente.\n");
    } while (squareSize < 1);

    for (int row = 1; row <= squareSize; row++) {
        for (int col = 1; col <= squareSize; col++) {
            if (row == 1 || row == squareSize || col == 1 || col == squareSize)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
