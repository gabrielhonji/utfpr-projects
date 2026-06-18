/**
 * @file ex5.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 5 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba 10 números inteiros. Em seguida o programa deverá permitir o usuário buscar números dentro do vetor, informando se o mesmo está ou não no vetor. O usuário poderá realizar quantas buscas quiser e finalizar ao solicitar a busca de um valor negativo.
 * 
 */

#include <stdio.h>

int main() {
    int arrayNum[10], numSearch, numCounter;
    
    // Populando o vetor númerico
    printf("Popule o vetor com 10 números inteiros positivos.\n");
    for (int arrayIndex = 0, arrayInput; arrayIndex < 10; arrayIndex++) {
        do {
            printf("Digite o %dº valor: ", arrayIndex + 1);
            scanf("%d", &arrayInput);

            if (arrayInput < 0) { // Previne o usuário de inserir um número negativo
                printf("Número negativo digitado, tente novamente.\n");
                break;
            }

            arrayNum[arrayIndex] = arrayInput;
        } while (arrayInput < 0);
    }

    // Buscar números no vetor
    do {
        numCounter = 0; // Reseta o contador de ocorrências do número no vetor

        printf("\nDigite um valor para ser buscado: ");
        scanf("%d", &numSearch);

        // Checa se o valor digitado é negativo, se for, encerra o programa
        if (numSearch < 0) {
            printf("Número negativo digitado, encerrando programa.\n");
            break;
        }

        // Procura e exibe se o número esta presente no vetor
        for (int arrayIndex = 0; arrayIndex < 10; arrayIndex++) {
            if (arrayNum[arrayIndex] == numSearch) {
                printf("O número %d esta presente no array na %dº posição.\n", numSearch, arrayIndex);
                numCounter++;
            }
        }
        
        // Informa se o número não teve ocorrência no vetor
        if (numCounter == 0)
            printf("O número %d não esta presente no vetor.\n", numSearch);
    } while (numSearch >= 0);

    return 0;
}
