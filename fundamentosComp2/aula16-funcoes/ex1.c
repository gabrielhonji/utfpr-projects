/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 1 - Aula 16
 * @version 0.1
 * @date 2026-09-04
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que implemente uma função que receba três números inteiros como parâmetros e retorne o maior deles. No programa principal, leia os três números, chame a função e apresente o maior valor.
 *
 */

#include <stdio.h>

/**
 * @brief Retorna o maior valor entre três números inteiros.
 *
 * A função compara os três valores recebidos e determina qual deles
 * possui o maior valor.
 *
 * @param num1 Primeiro número inteiro.
 * @param num2 Segundo número inteiro.
 * @param num3 Terceiro número inteiro.
 *
 * @return O maior valor entre num1, num2 e num3.
 */
int biggestNum(int num1, int num2, int num3)
{
    int bigNum = num1;

    if (bigNum < num2)
        bigNum = num2;
    if (bigNum < num3)
        bigNum = num3;

    return bigNum;
}

int main()
{
    int nums[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nO maior valor entre %d, %d e %d é: %d.\n", nums[0], nums[1], nums[2], biggestNum(nums[0], nums[1], nums[2]));

    return 0;
}
