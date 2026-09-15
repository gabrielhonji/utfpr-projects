/**
 * @file ex02.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 06
 * @version 0.1
 * @date 2026-03-30
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um progama que receba um número e determine se ele é número par ou ímpar
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0) // % is used to return the remainder of the division
        printf("O número %i é par", num);
    else
        printf("O número %i é impar", num);
    
    return 0;
}
