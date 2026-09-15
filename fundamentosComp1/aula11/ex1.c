/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Aula 11
 * @version 0.1
 * @date 2026-05-05
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que leia e armazene dois vetores de tamanho 5. Ao final o programa deve calcular e exibir o vetor soma.
 * 
 */

#include <stdio.h>

int main() {
    int index, array1[5], array2[5], arraySum[5]; // Declarar arrays com tamanho 5

    // Definindo os valores do primeiro vetor
    for (index = 0; index < 5; index++) {
        printf("Qual o %dº valor do primeiro vetor: ", index);
        scanf("%d", &array1[index]);
    }
    
    // Definindo os valores do segundo vetor
    for (index = 0; index < 5; index++) {
        printf("Qual o %dº valor do segundo vetor: ", index);
        scanf("%d", &array2[index]);
    }

    // Definindo e exibindo os valores do vetor soma
    printf("Vetor resultante:\n");
    for (index = 0; index < 5; index++) {
        arraySum[index] = array1[index] + array2[index];
        printf("%d. %d\n", index, arraySum[index]);
    }

    return 0;
}
