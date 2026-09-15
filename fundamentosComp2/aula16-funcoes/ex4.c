/**
 * @file ex4.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 4 - Aula 16
 * @version 0.1
 * @date 2026-09-04
 *
 * @copyright Copyright (c) 2026
 *
 * Implemente uma função que receba como parâmetro a média final de um aluno e retorne seu conceito, de acordo com os seguintes intervalos:
 *     Média entre 9 e 10, incluindo os dois limites: conceito A.
 *     Média maior ou igual a 7 e menor que 9: conceito B.
 *     Média maior ou igual a 5 e menor que 7: conceito C.
 *     Média maior ou igual a 0 e menor que 5: conceito D.
 * Considere que a média final está entre 0 e 10.
 * O programa deve ser desenvolvido na seguinte ordem:
 *     Escreva o protótipo da função.
 *     Na função main, leia a média final, chame a função e apresente o conceito retornado.
 *     Implemente a função após a função main.
 * 
 *
 */

#include <stdio.h>
#include <ctype.h>

/**
 * @brief Retorna o conceito de um aluno com base em sua média final.
 *
 * @param averageGrade Média final do aluno.
 *
 * @return O conceito correspondente à média final, entre A e D.
 */
char studentConcept(float averageGrade);

int main()
{
    float averageGrade;

    do {
        printf("Digite a nota do aluno, no intervalo [0, 10]: ");
        scanf(" %f", &averageGrade);

        if (averageGrade < 0 || averageGrade > 10)
            printf("Nota inválida, tente novamente.\n");
    } while (averageGrade < 0 || averageGrade > 10);

    printf("O aluno com média %.1f obteve um conceito: '%c'.\n", averageGrade, studentConcept(averageGrade));

    return 0;
}

char studentConcept(float averageGrade) {
    char concept;

    if (averageGrade < 5)
        concept = 'D';
    else if (averageGrade < 7)
        concept = 'C';
    else if (averageGrade < 9)
        concept = 'B';
    else
        concept = 'A';

    return concept;
}
