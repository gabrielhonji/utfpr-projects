/**
 * @file ex4.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 4 - Aula 8
 * @version 0.1
 * @date 2026-04-09
 *
 * @copyright Copyright (c) 2026
 *
 * Crie um algoritmo que exiba todos os números pares entre 240 e 730 inclusive.
 *
 */

#include <stdio.h>

int main()
{
    int index = 240;

    while (index <= 730)
    {
        if (index % 2 == 0) // Os números cujo a divisão por 2 tem resto 0 são seus múltiplos, logo, pares
            printf("%d\n", index);
        index++;
    }

    return 0;
}
