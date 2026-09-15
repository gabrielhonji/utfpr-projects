/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 13
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que armazene o nome e salário de 5 empregados. Em seguida calcule um aumento de 8% nos salários e exiba a nova folha de pagamentos.
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char employees[5][100];
    float salary[5];

    // Popula os arrays de empregados e seus respectivos salários
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do %dº funcionário: ", i + 1);
        fgets(employees[i], 100, stdin);
        employees[i][strcspn(employees[i], "\n")] = '\0';
        setbuf(stdin, NULL);
        
        printf("Digite o salário desse funcionário: ");
        scanf("%f", &salary[i]);
        setbuf(stdin, NULL);
    }

    // Aumento de 8% de salário
    for (int i = 0; i < 5; i++) {
        salary[i] *= 1.08;
    }

    // Imprime a junção dos vetores
    printf("A nova folha de pagamentos:\n");
    for (int i = 0; i < 5; i++) {
        printf("[%d]. Funcionário: %s / Salário: %.2f\n", i + 1, employees[i], salary[i]);
    }

    return 0;
}
