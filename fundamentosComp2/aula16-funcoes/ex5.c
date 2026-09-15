/**
 * @file ex5.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 5 - Aula 16
 * @version 0.1
 * @date 2026-09-04
 *
 * @copyright Copyright (c) 2026
 *
 * Implemente uma função que receba como parâmetro um número inteiro não negativo valor e retorne o fatorial desse número.
 * Na função main, utilize argc e argv para receber valor, passe o valor recebido para a função e apresente o resultado.
 *
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Retorna o fatorial de um número inteiro não negativo.
 *
 * @param num Número cujo fatorial será calculado.
 *
 * @return O fatorial do número.
 */
int fatorialNum(int num);

// argc retorna a quantidade de parâmetros recebidos (+1)
// argv retorna um array com os parâmetros recebidos, com o index 0 sendo o nome do arquivo
int main(int argc, char *argv[])
{
    int num = 0;

    // Não permite que haja nem mais ou menos parâmetros
    if (argc != 2) {
        printf("Para utilizar: %s <número>\n", argv[0]);
        return 1;
    }

    // Converte o parâmetro de string para int
    num = atoi(argv[1]);

    if (num < 0)
    {
        printf("O valor deve ser um inteiro não negativo.\n");
        return 1;
    }

    printf("O fatorial de %d é: %d.\n", num, fatorialNum(num));

    return 0;
}

int fatorialNum(int num) {
    int fatorial = 1;

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    return fatorial;
}
