/**
 * @file ex6.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 6 - Aula 13
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba um nome e um sobrenome. Ele deve construir uma nova string no formato americano (Sobrenome, Nome)
 * Exemplo: Silva, José
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char nameBR[50];
    char nameEUA[50];
    char firstName[25];
    char comma[2] = {',', ' '};

    // Digitar o nome
    printf("Digite o nome e sobrenome: ");
    fgets(nameBR, 50, stdin);
    nameBR[strcspn(nameBR, "\n")] = '\0';
    setbuf(stdin, NULL);

    // Separa o nome e sobrenome no ' '
    char *token = strtok(nameBR, " ");
    strcpy(firstName, token);
    token = strtok(NULL, " ");
    strcpy(nameEUA, token);

    // Concatena no formato americano
    strcat(nameEUA, comma);

    printf("O nome é %s nos EUA.\n", nameEUA);

    return 0;
}
