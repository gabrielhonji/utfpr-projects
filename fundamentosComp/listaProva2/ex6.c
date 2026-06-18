/**
 * @file ex6.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 6 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que leia e armazene as notas (valores reais) de 10 alunos.
 * O programa somente deverá aceitar notas entre 0 e 10 (inclusive), solicitando uma nova digitação quando uma nota inválida for digitada. Após leitura o programa deve:
 * a) Contar e exibir quantos alunos foram reprovados (nota < 6.0);
 * b) Exibir as notas dos alunos que foram aprovados (nota >= 6.0);
 * c) Calcular e exibir a média geral de todas as notas;
 * d) Calcular e exibir a porcentagem de alunos aprovados;
 * e) Exibir a nota mais alta e a mais baixa.
 * 
 */

#include <stdio.h>

int main() {
    int studentsFailed = 0, studentsApproved = 0;
    float studentsGrades[10], studentGradeInput, studentsGradesSum = 0, highestGrade = 0, lowestGrade = 10, averageGrade, approvedRate;

    // Popula as notas dos 10 estudentes
    for (int studentIndex = 0; studentIndex < 10; studentIndex++) {
        do {
            printf("Digite a nota (entre 0 a 10 inclusive) do %dº aluno: ", studentIndex + 1);
            scanf("%f", &studentGradeInput);

            // Previne notas inválidas
            if (studentGradeInput < 0 || studentGradeInput > 10) {
                printf("Valor inválido digitado, tente novamente.\n");
                studentIndex--;
                break;
            }

            studentsGrades[studentIndex] = studentGradeInput;

        } while (studentGradeInput < 0 || studentGradeInput > 10);
    }

    // Válida cada variável percorrendo o vetor
    for (int studentIndex = 0; studentIndex < 10; studentIndex ++) {
        // Contador de aprovações ou reprovações
        if (studentsGrades[studentIndex] >= 6)
            studentsApproved++;
        else
            studentsFailed++;

        // Define a maior nota com base em comparação
        if (studentsGrades[studentIndex] > highestGrade)
        highestGrade = studentsGrades[studentIndex];
        // Define a menor nota com base em comparação
        if (studentsGrades[studentIndex] < lowestGrade)
            lowestGrade = studentsGrades[studentIndex];

        studentsGradesSum += studentsGrades[studentIndex];
    }

    averageGrade = studentsGradesSum / 10; // Calcula a média geral das notas
    approvedRate = studentsApproved * 10; // Calcula a porcentagem de aprovação

    // Exibição das estatísticas requisitadas
    printf("\nSumário:\na) Um total de %d alunos foram reprovados.\n", studentsFailed); // a) exibe quantos alunos foram reprovados

    printf("\nb) Os alunos aprovados foram:\n"); // b) exibe quais alunos foram aprovados
    for (int studentIndex = 0; studentIndex < 10; studentIndex++) {
        if (studentsGrades[studentIndex] >= 6)
            printf("%dº aluno aprovado com nota %.1f.\n", studentsApproved, studentsGrades[studentIndex]);
    }

    printf("\nc) A média geral de todas as notas foi de %.1f.\n\nd) A porcentagem de alunos aprovados foi de %.1f%%.\n\ne) A maior nota foi %.1f e a menor foi %.1f.\n", averageGrade, approvedRate, highestGrade, lowestGrade); // exibe os pedidos de 'c' a 'e'

    
    return 0;
}
