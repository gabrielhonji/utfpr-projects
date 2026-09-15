/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Aula 13
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie um programa para armazenar 10 nomes  em um vetor e imprimir uma lista numerada
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char names[10][100];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº nome: ", i + 1);
        fgets(names[i], 100, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
        setbuf(stdin, NULL);
    }

    printf("Os nomes foram:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nome[%d]: %s\n", i + 1, names[i]);
    }

    return 0;
}
