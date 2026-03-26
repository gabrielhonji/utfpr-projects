/**
 * @file ex02.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 02 - Aula 5
 * @version 0.1
 * @date 2026-03-25
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que calcule e mostre a idade de uma pessoa a partir do ano em que a pessoa nasceu e do ano atual. Os valores serão digitados pelo usuário. Obs.: Considere que ela já fez aniversário neste ano.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int birth_year, current_year, age;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &birth_year);
    printf("Digite o ano atual: ");
    scanf("%d", &current_year);

    age = current_year - birth_year;
    printf("A idade da pessoa e: %d anos\n", age);

    return 0;
}
