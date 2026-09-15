/**
 * @file ex4.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 4 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que leia e armazene um vetor (VetorA) de inteiros e tamanho 10. Crie um VetorB, de mesmo tamanho, gerado a partir do Vetor A invertido (de trás para frente). Em seguida, calcule o VetorC que deverá ser o resultado do VetorA multiplicado pelo escalar 3 e em seguida subtraído do Vetor B.
 * 
 */

#include <stdio.h>

int main() {
    int arrayA[10], arrayB[10], arrayC[10];

    // Ler e armazenar um vetor a
    for (int arrayIndex = 0, arrayValue; arrayIndex < 10; arrayIndex++) {
        printf("Digite o %dº valor do vetor A: ", arrayIndex + 1);
        scanf("%d", &arrayValue);
        arrayA[arrayIndex] = arrayValue;
    }

    // Definir o vetor b
    printf("\nVetor B:\n");
    for (int arrayBIndex = 0, arrayAIndex = 9; arrayBIndex < 10; arrayAIndex--, arrayBIndex++) {
        arrayB[arrayBIndex] = arrayA[arrayAIndex];
        printf("%dº) %d\n", arrayBIndex + 1, arrayB[arrayBIndex]);
    }
    
    // Definir o vetor c
    printf("\nVetor C:\n");
    for (int arrayIndex = 0; arrayIndex < 10; arrayIndex++) {
        arrayC[arrayIndex] = (arrayA[arrayIndex] * 3) - arrayB[arrayIndex];
        printf("%dº) %d\n", arrayIndex + 1, arrayC[arrayIndex]);
    }

    return 0;
}
