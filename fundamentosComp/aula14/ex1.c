/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Aula 14
 * @version 0.1
 * @date 2026-06-09
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um algoritmo que implemente uma função que receba 3 números inteiros e retorne o maior valor
 * 
 */

#include <stdio.h>

 /***
  * Recebe 3 valores e retorna o maior
  * \param num1 primeiro valor
  * \param num2 segundo valor
  * \param num3 terceiro valor
  * \return o maior valor
  */

int BiggerNum(int agrNum1, int agrNum2, int agrNum3) {
    if (agrNum1 > agrNum2 && agrNum1 > agrNum3)
        return agrNum1;
    else if (agrNum2 > agrNum3)
        return agrNum2;
    else
        return agrNum3;
}

int main() {
    int num1, num2, num3, biggerNum;

    // Recebe 3 números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Recebe os 3 números e retorna o maior
    biggerNum = BiggerNum(num1, num2, num3);
    printf("O maior número entre %d, %d e %d, é: %d\n", num1, num2, num3, biggerNum);

    return 0;
}
