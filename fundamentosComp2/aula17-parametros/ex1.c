/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Aula 17
 * @version 0.1
 * @date 2026-09-10
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa em C que leia um número inteiro e possua uma função chamada dobrar.
 * A função deverá receber o número como parâmetro e alterar seu valor, multiplicando-o por 2.
 * O programa deverá:
 *     Ler o número na main;
 *     Exibir o valor original;
 *     Chamar a função dobrar;
 *     Exibir o valor após a alteração.
 * Requisito: utilize passagem por referência para que a alteração realizada pela função seja refletida na variável original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Função recebe um número e o dobra
 * 
 * Multiplica por 2 o valor armazenado no endereço recebido como parâmetro, alterando diretamente a variável original.
 * 
 * @param num Endereço de uma variável que armazena um número inteiro
 */
void doubleNum(int *num);

int main()
{
    int num;

    printf("Digite um número: ");
    scanf(" %d", &num);

    printf("\nO número original é: %d.\n", num);
    doubleNum(&num);
    printf("O novo número é: %d.\n", num);

    return 0;
}

void doubleNum(int *num) {
    *num = (*num) * 2;
}
