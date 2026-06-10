/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 3 - Aula 14
 * @version 0.1
 * @date 2026-06-09
 * 
 * @copyright Copyright (c) 2026
 * 
 * Escreva um procedimento que recebe por parâmetro as 3 notas de um aluno e uma letra. Se a letra for A, o procedimento calcula a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for S, a soma das notas. O valor calculado também deve ser retornado e exibido na função main.
 * 
 */

#include <stdio.h>
#include <ctype.h>

 /***
  * Recebe 3 notas e dependendo da opção escolhida retorna a média aritmética, média ponderada ou soma
  * \param argGrade1 é a entrada de 1 de 3 notas
  * \param argChoice define qual processo a função fará
  * \param argGrade2 é a entrada de 1 de 3 notas
  * \param argGrade3 é a entrada de 1 de 3 notas
  * \return o resultado da opção escolhida
  */

float GradeAlgorithm(char argChoice, float argGrade1, float argGrade2, float argGrade3) {
    float result;
    switch (argChoice) {
        case 'a':
            result = (argGrade1 + argGrade2 + argGrade3) / 3;
            break;
        case 'p':
            result = ((argGrade1 * 5) + (argGrade2 * 3) + (argGrade3 * 2)) / 3;
            break;
        case 's':
            result = argGrade1 + argGrade2 + argGrade3;
            break;
        default:
            printf("Nenhuma opção válida foi inserida.");
    }

    return result;
}

int main() {
    float grade1, grade2, grade3, gradeAlgorithmResult;
    char choice;

    // Define qual operação a função realizará
    do {
        printf("Escolha uma opção:\n'a' - Média aritimética\n'p' - Média ponderada\n's' - Soma das 3 notas\nQual você deseja: ");
        scanf("%c", &choice);
        setbuf(stdin, NULL);
        choice = tolower(choice);
        if (choice != 'a' && choice != 'p' && choice != 's')
            printf("Nenhuma opção válida foi digitada, tente novamente.\n");
    } while (choice != 'a' && choice != 'p' && choice != 's'); // Mantem o usuário em um loop ate que alguma opção válida seja fornecida
    
    // Recebe as três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &grade1);
    printf("Digite a segunda nota: ");
    scanf("%f", &grade2);
    printf("Digite a terceira nota: ");
    scanf("%f", &grade3);

    // Recebe o resultado da função em uma variável
    gradeAlgorithmResult = GradeAlgorithm(choice, grade1, grade2, grade3);

    switch (choice) {
        case 'a':
            printf("A média aritimética entre '%.2f', '%.2f' e '%.2f' é: %.2f\n", grade1, grade2, grade3, gradeAlgorithmResult);
            break;
        case 'p':
            printf("A média ponderada entre '%.2f', '%.2f' e '%.2f' é: %.2f\n", grade1, grade2, grade3, gradeAlgorithmResult);
            break;
        case 's':
            printf("A soma entre '%.2f', '%.2f' e '%.2f' é: %.2f\n", grade1, grade2, grade3, gradeAlgorithmResult);
            break;
        default:
            printf("Nenhuma escolha válida foi fornecida.\n");
    }

    return 0;
}
