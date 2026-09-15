/**
 * @file ex7.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 7 - Aula 13
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 * Escreva um programa que receba uma sigla de um estado da região Sul ou Sudeste e exiba o nome completo do estado correspondente.
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char states[7][20] = {
        "Parana",
        "Santa Catarina",
        "Rio Grande do Sul",
        "Sao Paulo",
        "Rio de Janeiro",
        "Minas Gerais",
        "Espirito Santo"
    };
    char acronyms[7][3] = {
        "PR",
        "SC",
        "RS",
        "SP",
        "RJ",
        "MG",
        "ES"
    };
    char userChoice[4];

    printf("Digite a sigla de um estado da região Sul ou Sudeste (em MAIÚSCULO): ");
    fgets(userChoice, 4, stdin);
    userChoice[strcspn(userChoice, "\n")] = '\0';
    setbuf(stdin, NULL);

    for (int acronymsIndex = 0; acronymsIndex < 7; acronymsIndex++) {
        if (strcmp(acronyms[acronymsIndex], userChoice) == 0) {
            printf("O estado escolhido foi: %s-%s\n", states[acronymsIndex], acronyms[acronymsIndex]);
            return 0;
        }
    }

    printf("Nenhuma opção válida foi digitada\n");

    return 0;
}
