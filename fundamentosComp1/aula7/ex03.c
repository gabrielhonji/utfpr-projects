/**
 * @file ex03.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 3 - Aula 7
 * @version 0.1
 * @date 2026-04-02
 *
 * @copyright Copyright (c) 2026
 *
 * Altere o exercício anterir para receber oos 3 valores no mesmo scanf.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    float num1, num2;

    printf("Digite a conta a ser realizada: ");
    scanf("%f%c%f", &num1, &choice, &num2);

    switch (choice)
    {
    case '+':
        printf("O resultado é: %.2f", num1 + num2);
        break;
    case '-':
        printf("O resultado é: %.2f", num1 - num2);
        break;
    case '*':
        printf("O resultado é: %.2f", num1 * num2);
        break;
    case '/':
        printf("O resultado é: %.2f", num1 / num2);
        break;
    default:
        printf("Nenhuma opção ofertada foi escolhida.");
        break;
    }

    return 0;
}
