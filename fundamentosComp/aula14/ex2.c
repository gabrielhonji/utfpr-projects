/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 14
 * @version 0.1
 * @date 2026-06-09
 * 
 * @copyright Copyright (c) 2026
 * 
 * Elabore uma função que receba por parâmetro o sexo (caractere) e a altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso, utilize as fórmulas a seguir.
 * Para homens: (72.7 * altura) - 58
 * Para mulheres: (62.1 * altura) - 44.7
 * 
 */

#include <stdio.h>
#include <ctype.h>

 /***
  * Recebe o sexo e a altura de uma pessoa e retorna o seu peso ideal
  * \param agrSex recebe o sexo que define qual formula o progroma vai utilizar 
  * \param agrHeight recebe a altura da pessoa
  * \return o seu peso ideal
  */

float idealWeight(char agrSex, float argHeight) {
    float returnWeight;
    switch (agrSex) {
        case 'm':
            returnWeight = (72.7 * argHeight) - 58;
            break;
        case 'f':
            returnWeight = (62.1 * argHeight) - 44.7;
            break;
        default:
            printf("Nenhuma opção válida foi forrnecida.");
            break;
        }
    return returnWeight;
}

int main() {
    float height, weight;
    char sex;

    // Recebe as informações da pessoa
    do {
        printf("Digite o sexo da pessoa ('m': masculino / 'f': feminino): ");
        scanf("%c", &sex);
        setbuf(stdin, NULL);
        sex = tolower(sex);
        if (sex != 'm' && sex != 'f')
            printf("Nenhuma informação correta foi fornecida, tente novamente.\n");
    } while (sex != 'm' && sex != 'f');
    printf("Digite a altura da pessoa: ");
    scanf("%f", &height);

    weight = idealWeight(sex, height);

    // Passa a altura e o sexo e retorna o peso
    printf("Para um indivíduo com %.2fm e '%c', seu peso ideal seria %.2fKg\n", height, sex, weight);

    return 0;
}
