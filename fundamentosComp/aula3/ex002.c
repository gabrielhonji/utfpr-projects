/**
 * @file ex002.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief 
 * @version 0.1
 * @date 2026-03-19
 * 
 * @copyright Copyright (c) 2026
 * 
 * Declare duas variáveis inteiras A e B e atribua valores diferentes. Em seguida, efetue a troca dos valores de forma
que, a variável A passe a possuir o valor da variável B, e que a variável B passe a possuir o valor da variável A. Apresente os valores iniciais e finais de A e B.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numA = 14;
    int numB = 28;
    int temp; // Variable to hold the value of numA during the swap

    printf("Valor inicial de A: %d e B: %d\n", numA, numB);

    temp = numA;
    numA = numB;
    numB = temp;

    printf("Novo valor de A: %d e B: %d\n", numA, numB);

    return 0;
}
