/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 2 - Aula 16
 * @version 0.1
 * @date 2026-09-04
 *
 * @copyright Copyright (c) 2026
 *
 * Implemente uma função que receba como parâmetros o sexo (caractere) e a altura de uma pessoa (real), calcule e retorne seu peso ideal, utilizando as fórmulas a seguir:
 * Homens: (72.7 × altura) − 58
 * Mulheres: (62.1 × altura) − 44.7
 * Na função main, leia o sexo e a altura de uma pessoa, chame a função e apresente o peso ideal calculado.
 *
 */

#include <stdio.h>
#include <ctype.h>

/**
 * @brief Retorna o peso ideal de um indivíduo com base no seu sexo e altura
 *
 * @param sex Sexo do indivíduo.
 * @param height Altura do indivíduo.
 *
 * @return O peso ideal do indivíduo.
 */
float idealWeight(char sex, float height)
{
    float weight;

    if (sex == 'm')
        weight = (72.7 * height) - 58;
    else
        weight = (62.1 * height) - 44.7;

    return weight;
}
int main()
{
    char sex;
    char sexText[2][10] = {"MASCULINO", "FEMININO"}; // Armazena as strings para exibir ao final
    float height;

    do
    {
        printf("Calcule seu peso ideal.\nQual o seu sexo ('m': MASCULINO | 'f': FEMININO): ");
        scanf(" %c", &sex);
        sex = tolower(sex);
        setbuf(stdin, NULL);

        if (sex != 'm' && sex != 'f')
            printf("Sexo inválido. Tente novamente.\n");
    } while (sex != 'm' && sex != 'f');

    do
    {
        printf("Qual a sua altura em metros (utilize um ponto '.' para separar o metro do centimetro): ");
        scanf(" %f", &height);
        if (height <= 0)
            printf("Valor inválido para altura. Tente novamente.\n");
    } while (height <= 0);

    // Utiliza de um operador ternário para exibir "MASCULINO" ou "FEMININO"
    printf("O indivíduo do sexo %s, com %.2f m de altura, tem como %.2f seu peso ideal.\n", sex == 'm' ? sexText[0] : sexText[1], height, idealWeight(sex, height));

    return 0;
}
