/**
 * @file ex5.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 5 - Aula 14
 * @version 0.1
 * @date 2026-06-09
 * 
 * @copyright Copyright (c) 2026
 *
 * Crie uma função que que receba o valor de um inteiro positivo N, calcule e retorne o fatorial desse número.
 * 
 */

#include <stdio.h>

int Factorial(int argNumIndex) {
    int factorial = 1;
    for (; argNumIndex > 1; argNumIndex--) {
        factorial *= argNumIndex;
    }
    return factorial;
}

int main() {
    int numIndex, resultFactorial;
    
    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numIndex);
        if (numIndex < 0)
            printf("O número deve ser um inteiro positivo, tente novamente\n");
    } while (numIndex < 0);
    
    resultFactorial = Factorial(numIndex);

    printf("O fatorial de '%d' é '%d'.\n", numIndex, resultFactorial);

    return 0;
}
