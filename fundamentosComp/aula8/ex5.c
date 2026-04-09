/**
 * @file ex5.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 5 - Aula 8
 * @version 0.1
 * @date 2026-04-09
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que receba um número real, calcule e exiba o quadrado dele. O programa deverá repetir esse procedimento para 10 números, um de cada vez.
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int index = 1;
    float num, sqrNum;

    while (index <= 10)
    {
        printf("(%d) - Digite um número real: ", index);
        scanf("%f", &num);
        sqrNum = pow(num, 2);

        printf("-> %.2f²=%.2f\n", num, sqrNum);

        index++;
    }

    return 0;
}
