/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Aula 9
 * @version 0.1
 * @date 2026-04-16
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que calcule a média para 5 alunos, sendo que cada aluno tem 2 notas (reais). O programa somente deverá aceitar notas no intervalo fechado de 0 a 10, solicitanto nova digitação quando necessário.
 * 
 */

#include <stdio.h>

int main() {
    float grade, sumGrade = 0, averageGrade;
    int index = 0;

    do {
        printf("Digite uma das notas do aluno: ");
        scanf("%f", &grade);

        if (0 <= grade && grade <= 10) {
            sumGrade += grade;
            index++;
        }
        else
            printf("Digite uma nota no intervalo fechado de 0 a 10\n");
    } while (index < 10); // Duas notas por aluno, para 5 alunos

    averageGrade = sumGrade / 10;
    printf("A média entre os 5 alunos foi %.2f.\n", averageGrade);

    return 0;
}
