/**
 * @file ex03.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 03 - Aula 5
 * @version 0.1
 * @date 2026-03-25
 *
 * @copyright Copyright (c) 2026
 *
 * Tendo como entrada de dados o total vendido por um funcionário no mês, calcule a sua comissão e o salário bruto no mês. Para isso, considere um salário base de R$1.200,00 e comissão de 10% sobre o total vendido.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total_sold, commission, gross_salary;

    printf("Digite o total de vendas no mes: ");
    scanf("%f", &total_sold);

    commission = total_sold * 0.10;
    gross_salary = 1200.00 + commission;

    printf("A comissao e: R$%.2f e o salario bruto e: R$%.2f", commission, gross_salary);
    return 0;
}
