/**
 * @file ex05.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 05 - Aula 5
 * @version 0.1
 * @date 2026-03-26
 * 
 * @copyright Copyright (c) 2026
 * 
 * Sabendo que a função sqrt(valor), que está na biblioteca math.h retorna a raiz quadrada do valor, calcule a raiz quadrada de um número que o usuário digitar.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float number;
    double result;
    printf("Digite um numero real para calcular sua raiz quadrada: ");
    scanf("%f", &number);

    result = sqrt(number);
    printf("A raiz quadrada de %.2f e: %lf", number, result);

    return 0;
}
