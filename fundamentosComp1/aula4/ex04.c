/**
 * @file ex04.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 04 - Aula 4 - Fundamentos de Computação
 * @version 0.1
 * @date 2026-03-22
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tendo a altura da pessoa definida como uma constate, calcule seu peso ideal usando a seguinte fórmula: peso ideal = 72,7 x altura -58
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#define HEIGHT 1.80 // Define a constant for height

int main()
{
    double idealWeight = 72.7 * HEIGHT - 58;

    printf("Para uma altura de %.2f metros, o peso ideal de uma pessoa utilizando a formula 'peso ideal = 72,7 x altura - 58' e: %.2f kg\n", HEIGHT, idealWeight);

    return 0;
}
