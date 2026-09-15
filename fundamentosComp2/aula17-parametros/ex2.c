/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 17
 * @version 0.1
 * @date 2026-09-10
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa em C que leia dois números inteiros e crie uma função chamada trocar. A função deverá receber os dois números e trocar seus valores. Faça uma função main para testar o funcionamento da função desenvolvida.
 * Exemplo:
 * Antes da troca:
 * A = 10
 * B = 20
 * Depois da troca:
 * A = 20
 * B = 10
 * Requisito: a função deverá utilizar passagem por referência, a alteração realizada na função deve afetar as variáveis originais.
 *
 */

#include <stdio.h>
#include <stdlib.h>

/***
 * @brief Função inverte os valores recebidos
 *
 * @param num1 Endereço de uma variável que armazena um inteiro (1)
 * @param num2 Endereço de uma variável que armazena um inteiro (2)
 */
void switchNum(int *num1, int *num2);

int main()
{
    int num[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf(" %d", &num[i]);
    }

    printf("\nO primeiro e segundo números originalmente eram: %d e %d.\n", num[0], num[1]);
    switchNum(&num[0], &num[1]);
    printf("Invertidos agora passam a ser respectivamente: %d e %d.\n", num[0], num[1]);

    return 0;
}

void switchNum(int *num1, int *num2)
{
    int storeNum = *num1;

    *num1 = *num2;
    *num2 = storeNum;
}
