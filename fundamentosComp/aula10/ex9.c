/**
 * @file ex9.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 9 - Aula 10
 * @version 0.1
 * @date 2026-05-04
 *
 * @copyright Copyright (c) 2026
 *
 * Desenvolva um programa que receba um numero tamanho e exiba um quadrado de tamanho tamanho utilizando o carácter # 
 *
 */

#include <stdio.h>

int main()
{
    int size;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &size);

    for (int height = 0; height < size; height++) {
        for (int lenght = 0; lenght < size; lenght++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
