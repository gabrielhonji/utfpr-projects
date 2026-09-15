/**
 * @file ex6.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 6 - Aula 11
 * @version 0.1
 * @date 2026-05-05
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba e armazene 20 números em um vetor. Em seguida exiba:
 * 
 */

#include <stdio.h>

int main() {
    int i, counterGreater, counterEqual, arraySum, arrayAverage, arrayInt[20];

    // População do vetor
    for (i = 0; i < 20; i++) {
        printf("Digite o %dº valor do vetor: ", i);
        scanf("%d", &arrayInt[i]);
    }

    // Validações
    // Items maiores que 30
    for (i = 0, counterGreater = 0, arraySum = 0; i < 20; i++) {
        if (arrayInt[i] == 30)
            counterGreater++;
        arraySum += arrayInt[i];
    }

    printf("Do vetor fornecido %d items são iguais a 30.\n", counterGreater);
    arrayAverage = arraySum / 20;
    
    // Items maiores e iguais a média
    for (i = 0, counterGreater = 0, counterEqual = 0; i < 20; i++) {
        if (arrayInt[i] > arrayAverage)
            counterGreater++;
        else if (arrayInt[i] == arrayAverage)
            counterEqual++;
    }
    printf("Do vetor fornecido %d items são maiores e %d são iguais a média (%d).\n", counterGreater, counterEqual, arrayAverage);


    return 0;
}
