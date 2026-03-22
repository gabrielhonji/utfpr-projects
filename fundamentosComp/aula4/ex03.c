/**
 * @file ex03.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 03 - Aula 4 - Fundamentos de Computação
 * @version 0.1
 * @date 2026-03-21
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um progama com 2 variáveis, A e B, onde A terá o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B, AxB e A/B. Em seguida, faça B incrementar de uma unidade e repita as 4 operações.
 *
 */

#include <stdio.h>
#include <stdlib.h>

void printOperations(int numA, int numB) // Separate function to prevent code repetition
{
    printf("Operacoes entre A = %d e B = %d:\n", numA, numB);
    printf("A+B=%d\nA-B=%d\nA*B=%d\n", numA + numB, numA - numB, numA * numB);
    if (numB != 0) // Check to prevent division by zero
    {
        printf("A/B=%d\n", numA / numB);
    }
    else
    {
        printf("A/B=indefinido (Divisao por zero nao e permitida.)\n");
    }
}

int main()
{
    int numA = 40;
    int numB = -1;

    printOperations(numA, numB);

    numB++; // Increase B by 1

    printf("Apos incrementar(++) B:\n");
    printOperations(numA, numB);

    return 0;
}
