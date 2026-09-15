/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 3 - Aula 17
 * @version 0.1
 * @date 2026-09-10
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa em C que leia dois números inteiros e crie uma função chamada maiorMenor. A função deverá receber os dois números e determinar:
 *     qual é o maior;
 *     qual é o menor.
 * Os dois resultados deverão ser enviados de volta à função main por meio dos parâmetros da função.
 * Requisito: utilize passagem por referência (retorno por referencia) para retornar os dois resultados.
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
