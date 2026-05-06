/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 11
 * @version 0.1
 * @date 2026-05-05
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie um algoritimo que receba 10 números e os armazene em um vetor A. Em seguida, gere o vetor B onde cada elemento é o quadrado do valor da mesma posição do vetor A.
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {
    int i, arrayA[10], arrayB[10];

    // Define os valores do vetor A
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &arrayA[i]);
    }

    // Define e exibe o vetor B, tendo ele o quadrado dos valores de A
    printf("Vetor B:\n");
    for (i = 0; i < 10; i++) {
        arrayB[i] = pow(arrayA[i], 2);
        printf("%d. %d\n", i, arrayB[i]);
    }

    return 0;
}
