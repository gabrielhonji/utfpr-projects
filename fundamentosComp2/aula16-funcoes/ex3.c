/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 3 - Aula 16
 * @version 0.1
 * @date 2026-09-04
 *
 * @copyright Copyright (c) 2026
 *
 * Implemente uma função que receba como parâmetros as três notas de um aluno e uma letra
 *     Se a letra for A, a função deve calcular a média aritmética das três notas.
 *     Se a letra for P, a função deve calcular a média ponderada, utilizando os pesos 5, 3 e 2, respectivamente.
 *     Se a letra for S, a função deve calcular a soma das três notas.
 * A função deve retornar o valor calculado.
 * Na função main, leia as três notas e a letra, chame a função e apresente o resultado.
 *
 */

#include <stdio.h>
#include <ctype.h>

/**
 * @brief Retorna um valor dependendo da entrada do usuário
 *
 * @param choice Define qual das 3 opções a função irá realizar.
 * @param grade1 Nota 1 do aluno.
 * @param grade2 Nota 2 do aluno.
 * @param grade3 Nota 3 do aluno.
 *
 * @return Ou a média ou a soma das notas.
 */
float gradeAlgorithm(char choice, float grade1, float grade2, float grade3)
{
    float gradeResult = 0;

    switch (choice)
    {
    case 'a':
        gradeResult = (grade1 + grade2 + grade3) / 3;
        break;
    case 'p':
        gradeResult = (grade1 * 5 + grade2 * 3 + grade3 * 2) / 10;
        break;
    case 's':
        gradeResult = grade1 + grade2 + grade3;
        break;
    }

    return gradeResult;
}

int main()
{
    char choice;
    float grades[3];

    do
    {
        printf("Qual operação você deseja realizar?\n'A' - Calcular a média aritmética de três notas;\n'P' - Calcular a média ponderada, utilizando os pesos 5, 3 e 2, respectivamente;\n'S' - Calcular a soma de três notas.\nDigite sua escolha: ");
        scanf(" %c", &choice);
        choice = tolower(choice);

        if (choice != 'a' && choice != 'p' && choice != 's')
            printf("Escolha inválida. Tente novamente.\n");
    } while (choice != 'a' && choice != 'p' && choice != 's');

    for (int i = 0; i < 3; i++)
    {
        do
        {
            printf("Digite a %dº nota do aluno: ", i + 1);
            scanf(" %f", &grades[i]);

            if (grades[i] < 0)
                printf("Nota inválida. Tente novamente.\n");
        } while (grades[i] < 0);
    }

    printf("A operação '%c' das notas %.2f, %.2f e %.2f tem o resultado de %.2f.\n", choice, grades[0], grades[1], grades[2], gradeAlgorithm(choice, grades[0], grades[1], grades[2]));

    return 0;
}
