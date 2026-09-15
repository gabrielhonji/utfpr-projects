/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Aula 8
 * @version 0.1
 * @date 2026-04-09
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um algoritmo que exiba todos númeors de 1 a 100.
 *
 */

#include <stdio.h>

int main()
{
    int index = 1;

    while (index <= 100)
    {
        printf("%d\n", index);
        index++;
    }

    return 0;
}
