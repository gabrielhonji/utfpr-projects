/**
 * @file ex01.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Aula 6
 * @version 0.1
 * @date 2026-03-30
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que receba como entrada a nota de um aluno. O programa deve exibir "aprovado" caso a nota seja igual ou superior a 6, ou exibir "reprovado" caso contrário.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade;

    printf("Digite a nota do aluno: ");
    scanf("%f", &grade);

    if (grade >= 6)
        printf("O aluno que obteve a nota %.2f, aprovado", grade);
    else
        printf("O aluno que obteve a nota %.2f, reprovado", grade);

    return 0;
}
