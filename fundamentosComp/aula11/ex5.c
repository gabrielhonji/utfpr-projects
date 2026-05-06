/**
 * @file ex5.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 5 - Aula 11
 * @version 0.1
 * @date 2026-05-05
 * 
 * @copyright Copyright (c) 2026
 * 
 * Dado dois vetores, A (4 elementos) e B (5 elementos), faça um programa em C que imprima todos os elementos comuns aos dois vetores.
 * 
 */

#include <stdio.h>

int main() {
    int i, indexA, indexB, arrayA[4], arrayB[5];

    // População dos vetores
    for (i = 0; i < 4; i++) {
        printf("Digite o %dº valor do primeiro vetor: ");
        scanf("%d", &arrayA[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor do segundo vetor: ");
        scanf("%d", &arrayB[i]);
    }

    // Validação
    for (indexA = 0; indexA < 4; indexA++) { // For que passa por todos os items do vetor A
        for (indexB = 0; indexB < 5; indexB++) { // For que passa por todos os items do vetor B
            if (arrayA[indexA] == arrayB[indexB]) // Validação de igualdade
                printf("%d\n", arrayA[indexA]);
        }
    }

    return 0;
}
