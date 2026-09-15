/**
 * @file ex04.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 04 - Aula 5
 * @version 0.1
 * @date 2026-03-26
 * 
 * @copyright Copyright (c) 2026
 * 
 * Calcule a média aritmética de 4 números reais que o usuário digitar. Imprima a média na tela apenas com 2 casas decimais.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4, average;
    printf("Digite 4 numeros reais separados por espaco: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    average = (num1 + num2 + num3 + num4) / 4;
    printf("A media aritmetica e: %.2f", average);

    return 0;
}
