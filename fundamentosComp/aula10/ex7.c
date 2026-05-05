/**
 * @file ex7.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 7 - Aula 10
 * @version 0.1
 * @date 2026-05-04
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que mostre n elementos da sequência de Fibonacci
 *
 */

#include <stdio.h>

int main()
{
    int stepsFibonacci, fibonacci, fibonacciN1 = 1, fibonacciN2 = 0;

    printf("Quantidade de digitos da sequência: ");
    scanf("%d", &stepsFibonacci);

    printf("0. 0 (0, 0)\n1. 1 (1, 0)\n"); // Por serem pré definidos esses valores não precisam ser calculados

    for (int index = 2; index < stepsFibonacci; index++)
    {
        fibonacci = fibonacciN1 + fibonacciN2; // Fn = Fn-1 + Fn-2
        fibonacciN2 = fibonacciN1;
        fibonacciN1 = fibonacci;
        printf("%d. %d (%d, %d)\n", index, fibonacci, fibonacciN1, fibonacciN2);
    }

    return 0;
}
