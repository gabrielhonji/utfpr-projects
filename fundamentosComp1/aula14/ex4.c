/**
 * @file ex4.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 4 - Aula 14
 * @version 0.1
 * @date 2026-06-09
 * 
 * @copyright Copyright (c) 2026
 *
 * Faça uma função que receba a média final de um aluno por parâmetro e retorne o seu conceito, conforme a tabela abaixo 
 * 
 */

#include <stdio.h>

/***
 * Recebe uma nota e define seu resultado com base em intervalos definidos
 *  \param agrStudentGrade é a média final do aluno
 *  \return retorna o conceito com base na média final do aluno
 */

char StudentGradeConcept(float argStudentGrade) {
    char resultConcept = '!';
    if (argStudentGrade <= 10 && argStudentGrade >= 9)
        resultConcept = 'A';
    else if (argStudentGrade < 9 && argStudentGrade >= 7)
        resultConcept = 'B';
    else if (argStudentGrade < 7 && argStudentGrade >= 5)
        resultConcept = 'C';
    else if (argStudentGrade < 5 && argStudentGrade >= 0)
        resultConcept = 'D';
    else
        printf("Nenhuma nota válida fornecida.\n");
    return resultConcept;
}

int main() {
    float studentGrade;
    char concept;

    do {
        printf("Digite a média final do aluno: ");
        scanf("%f", &studentGrade);
        if (studentGrade < 0 || studentGrade > 10)
            printf("Nota inválida, digite uma nota real entre [0, 10], tente novamente.\n");
    } while (studentGrade < 0 || studentGrade > 10);

    concept = StudentGradeConcept(studentGrade);
    printf("O aluno com média final '%.2f' teve conceito '%c'\n", studentGrade, concept);

    return 0;
}
