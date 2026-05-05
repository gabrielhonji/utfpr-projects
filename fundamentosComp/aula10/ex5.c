/**
 * @file ex5.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 5 - Aula 10
 * @version 0.1
 * @date 2026-05-04
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que calcule o fatorial de um número a ser digitado.
 * 
 */

#include <stdio.h>

int main() {
    int factorial, resultFactorial = 1;

    printf("Digite um número para calcular seu fatorial: ");
    scanf("%d", &factorial);

    for (int index = factorial; index > 1; index--) {
        resultFactorial = resultFactorial * index; // resultFactorial é usado com o index para fazer o produto regressivo do fatorial
    }

    printf("O fatorial %d! = %d.\n", factorial, resultFactorial);

    return 0;
}
