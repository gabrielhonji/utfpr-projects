/**
 * @file ex02.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 02 - Aula 4 - Fundamentos de Computação
 * @version 0.1
 * @date 2026-03-21
 *
 * @copyright Copyright (c) 2026
 *
 * Uma coonta de caderneta de poupança foi aberta com um depósito de R$ 500,00. Imagine que esta conta é remunerada em 1% de juros ao mês. Qual será o valor da conta após três meses?
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float initialDeposit = 500;
    float monthlyInterestRate = 0.01; // Percentage to decimal
    int months = 3;

    float finalAmount = initialDeposit * pow(1 + monthlyInterestRate, months);

    printf("O valor inicial de R$ %.2f, com juros de %.2f%% ao mes, apos %d meses, sera de R$ %.2f.\n", initialDeposit, monthlyInterestRate * 100, months, finalAmount); // %% is needed to print a literal '%' character

    return 0;
}
