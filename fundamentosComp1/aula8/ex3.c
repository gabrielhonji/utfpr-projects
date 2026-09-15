/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 3 - Aula 8
 * @version 0.1
 * @date 2026-04-09
 *
 * @copyright Copyright (c) 2026
 *
 * Crie um algoritmo que exiba todos os números múltiplos de 3 no intervalo de 1 a 322.
 *
 */

#include <stdio.h>

int main()
{
    int index = 1;

    while (index <= 322)
    {
        if (index % 3 == 0) // Os números cujo a divisão por 3 tem resto 0 são seus múltiplos
            printf("%d\n", index);
        index++;
    }

    return 0;
}
