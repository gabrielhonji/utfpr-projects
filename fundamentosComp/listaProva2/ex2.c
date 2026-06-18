/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie um programa que receba um número positivo Z e imprima todos os números de Z até 1 e no final exiba quais são os números múltiplos de 4, quantos números são múltiplos de 3 e a média dos números múltiplos de 5.
 * 
 */

#include <stdio.h>

int main() {
    int num, amountMultipleOfFive = 0, amountMultipleOfFour = 0, amountMultipleOfThree = 0, sumMultipleOfFive = 0, averageMultipleOfFive = 0;

    do {
        printf("Digite um número inteiro positivo diferente de zero: ");
        scanf("%d", &num);
        if (num < 1)
            printf("Número inválido, tente novamente.\n");
    } while (num < 1);

    int multipleOfFour[num / 4]; // Vetor que armazena os multiplos de 4

    for (int index = num; index > 0; index--) {
        printf("%d", index);
        if (index % 5 == 0) {
            // printf(" - Multiplo de 5");
            sumMultipleOfFive += index;
            amountMultipleOfFive++;
        }
        if (index % 4 == 0) {
            // printf(" - Multiplo de 4");
            multipleOfFour[amountMultipleOfFour] = index;
            amountMultipleOfFour++;
        }
        if (index % 3 == 0) {
            // printf(" - Multiplo de 3");
            amountMultipleOfThree++;
        }
        printf("\n");
    }

    averageMultipleOfFive = sumMultipleOfFive / amountMultipleOfFive;

    printf("Quais são os multiplos de 4 do número %d:\n", num);
    for (int arrayIndex = amountMultipleOfFour - 1; arrayIndex > 0; arrayIndex--) {
        printf("%dº) %d\n",arrayIndex, multipleOfFour[arrayIndex]);
    }

    printf("O número %d tem %d multiplos de 3.\nA média dos multiplos de 5 é %d.\n", num, amountMultipleOfThree, averageMultipleOfFive);

    return 0;
}
