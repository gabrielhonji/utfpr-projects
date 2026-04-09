/**
 * @file ex7.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 7 - Aula 8
 * @version 0.1
 * @date 2026-04-09
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que calcule o fatorial de um número a ser digitado.
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int index, fatorial = 1;

    printf("Digite um número a ser fatorado: ");
    scanf("%d", &index);

    while (index > 1) // Teoricamente ele multiplica o 1, mas para otimizar o index nao chega a fazer essa operação com 1
    {
        fatorial = fatorial * index; // 5! = 5 * 4 * 3 * 2 * 1
        index--;
    }

    printf("O fatorial é %d\n", fatorial);

    return 0;
}
