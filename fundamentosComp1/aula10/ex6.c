/**
 * @file ex6.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 6 - Aula 10
 * @version 0.1
 * @date 2026-05-04
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que receba 10 números e calcule o quadrado desse número (um de cada vez)
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int userNum, userNumSqr;

    for (int index = 1; index <= 10; index++)
    {
        printf("%d. Digite um número: ", index);
        scanf("%d", &userNum);

        userNumSqr = pow(userNum, 2);
        printf("%d² = %d\n", userNum, userNumSqr);
    }

    return 0;
}
