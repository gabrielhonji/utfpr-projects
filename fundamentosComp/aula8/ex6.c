/**
 * @file ex6.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 6 - Aula 8
 * @version 0.1
 * @date 2026-04-09
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que receba um número real, calcule e exiba o quadradado dele. O programa devera calcular o quadrado de vários números e finalizar quando for digitado um número negativo ou zero.
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float sqrNum;
    float num = 1; // Começa atribuindo um valor para garantir que o while seja executado ao menos 1 vez

    while (num > 0)
    {
        printf("Digite um número real: ");
        scanf("%f", &num);
        sqrNum = pow(num, 2);

        printf("-> %.2f²=%.2f\n", num, sqrNum);
    }

    return 0;
}
