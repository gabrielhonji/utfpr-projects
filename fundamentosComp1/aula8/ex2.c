/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 8
 * @version 0.1
 * @date 2026-04-09
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um algoritmo que exiba todos númeors de 100 a 1.
 *
 */

#include <stdio.h>

int main()
{
    int index = 100;

    while (index >= 1)
    {
        printf("%d\n", index);
        index--;
    }

    return 0;
}
