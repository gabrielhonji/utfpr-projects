/**
 * @file ex4.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 4 - Aula 11
 * @version 0.1
 * @date 2026-05-05
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie e inicialize um vetor de inteiros de tamanho 8. Faça a soma dos seus elementos, e apresente o resultado.
 * 
 */

#include <stdio.h>

int main() {
    int i, arrayNum[8], sumArray;

    // Populando o vetor com os números
    for (i = 0; i < 8; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &arrayNum[i]);
    }

    // Somando cada elemento do vetor
    for (i = 0; i < 8; i++) {
        sumArray += arrayNum[i];
    }

    printf("A soma dos valores digitados é: %d\n", sumArray);

    return 0;
}
