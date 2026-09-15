/**
 * @file ex8.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 8 - Aula 10
 * @version 0.1
 * @date 2026-05-04
 *
 * @copyright Copyright (c) 2026
 *
 * Utilizando a estrutura do laço for aninhado, crie um programa que exiba a tabuada de todos os números de 1 a 10 no seguinte formato: 
 *
 */

#include <stdio.h>

int main()
{
    int multiplicationN1,  multiplicationN2, result;

    for (multiplicationN1 = 1; multiplicationN1 <= 10; multiplicationN1++) {
        printf("Tabuada do %d:\n", multiplicationN1);

        for (multiplicationN2 = 1; multiplicationN2 <= 10; multiplicationN2++) {
            result = multiplicationN1 * multiplicationN2;
            printf("- %d x %d = %d\n", multiplicationN1, multiplicationN2, result);
        }
    }

    return 0;
}
