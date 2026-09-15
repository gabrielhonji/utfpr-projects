/**
 * @file ex02.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 7 
 * @version 0.1
 * @date 2026-04-02
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie uma calculadora usando a instrução switch que pergunte qual das operações básicas quer fazer (+,-,*,/), em seguida peça os dois números e mostre o resultade da operação matemática entre eles.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char choice;
    float num1, num2;

    printf("Calculadora para dois valores reais:\n+ -> Para somar\n- -> Para subtrair\n* -> Para multiplicar\n/ -> Para dividir\nDigite sua opção: ");
    scanf("%c", &choice);

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("digite o segundo valor: ");
    scanf("%f", &num2);

    switch (choice) {
        case '+':
            printf("A conta: %.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
        case '-':
            printf("A conta: %.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
        case '*':
            printf("A conta: %.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
        case '/':
            printf("A conta: %.2f / %.2f = %.2f", num1, num2, num1 / num2);
        break;
        default:
            printf("Nenhuma opção ofertada foi escolhida.");
        break;
    }
    
    return 0;
}
