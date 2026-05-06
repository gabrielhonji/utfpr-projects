/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 3 - Aula 11
 * @version 0.1
 * @date 2026-05-05
 * 
 * @copyright Copyright (c) 2026
 * 
 * Leia um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um programa que conte e exiba a quantidade de pessoas que possuem idade superior a 35 anos.
 * 
 */

#include <stdio.h>

int main() {
    int i, counterAdult = 0, arrayAge[10];

    // Popula o vetor de idade
    for (i = 0; i < 10; i++) {
        printf("Digite a idade da %dª pessoa: ", i);
        scanf("%d", &arrayAge[i]);
    }

    // Conta a quantidade de adultos no array
    for (i = 0; i < 10; i++) {
        if (arrayAge[i] > 35)
            counterAdult++;
    }

    printf("Houveram %d pessoas com idade superior a 35 anos.\n", counterAdult);

    return 0;
}
