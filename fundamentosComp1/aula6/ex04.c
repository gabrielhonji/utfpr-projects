/**
 * @file ex04.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 4 - Aula 06
 * @version 0.1
 * @date 2026-03-30
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que calcule o imposto de renda a ser pago tendo como entrada o salário de um empregado. O imposto deve ser calculado da seguinte maneira: imposto = salário x alíquota - parcela de dedução
 * 
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
    float tax, salary, taxRate, deduction;

    printf("Digite o salário do indivíduo: ");
    scanf("%f", &salary);

    // If condition to set taxRate and deduction from salary income
    if (salary < 1903.99) {
        printf("O salário de R$ %.2f é menor do que R$ 1.903,98, logo é isento de impostos.", salary);
        return 0; // this return is used to skip the rest of the code if its tax free
    } else if (salary < 2826.66) {
      taxRate = 0.075;
      deduction = 142.8;  
    } else if (salary < 3751.06) {
      taxRate = 0.15;
      deduction = 354.8;  
    } else if (salary < 4664.69) {
      taxRate = 0.225;
      deduction = 636.16;  
    } else {
      taxRate = 0.275;
      deduction = 869.36;  
    }

    tax = salary * taxRate - deduction;
    printf("taxRate %.2f, deduc %.2f", taxRate, deduction);
    printf("Sendo o salário de R$ %.2f, deverá ser pago R$ %.2f em impostos", salary, tax);

    return 0;
}
