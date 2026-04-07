/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Lista 1
 * @version 0.1
 * @date 2026-04-06
 * 
 * @copyright Copyright (c) 2026
 * 
 * 1) Sabendo-se que 200 quilowatts de energia custa um quarto do salário mínimo, faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e mostre: a) O valor em reais de cada quilowatt; b) O valor em reais a ser pago pelos quilowatts gasto; c) O novo valor a ser pago por essa residência com um desconto de 12%;
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float minimumWage, kwhConsumption, kwhPrice, kwhSpent;

    printf("Digite o salário mínimo: ");
    scanf("%f", &minimumWage);
    printf("Digite a quantia de quilowatts gasta: ");
    scanf("%f", &kwhConsumption);

    kwhPrice = minimumWage / 800;
    kwhSpent = kwhPrice * kwhConsumption;

    printf("O valor cada quilowatt para um salário mínimo de R$ %.2f é de R$ %.2f\nO valor a ser pago é de R$ %.2f\nCom um desconto de 12%% o novo valor a ser pago é de R$ %.2f\n", minimumWage, kwhPrice, kwhSpent, kwhSpent * 0.88);

    return 0;
}
