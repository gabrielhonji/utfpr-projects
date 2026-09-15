/**
 * @file ex001.c
 * @author Gabriel Honji
 * @brief Exercício 001 - Aula 3
 * @version 0.1
 * @date 2026-03-19
 * 
 * @copyright Copyright (c) 2026
 * 
 * Elabore um programa que exiba o seu nome na primeira linha e o seu e-mail segunda. Em seguida, exiba uma mensagem solicitando para o usuário pressionar uma tecla. Quando o usuário pressionar, exiba em uma nova linha o nome do seu amigo e, em outra, o e-mail dele.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char userName[] = "Gabriel Honji"; // Brackets are used to declare an array of characters, this is because strings in C are represented as arrays of characters, the size of the array is determined by the number inside the brackets
    char userEmail[] = "gabriel.honji@alunos.utfpr.edu.br";

    printf("O nome do usuário é: %s e o e-mail é: %s", userName, userEmail);

    getchar(); // Wait for the user to press a key

    char friendName[] = "Murilo Cabral";
    char friendEmail[] = "murilo.cabral@alunos.utfpr.edu.br";

    printf("O nome do amigo é: %s e o e-mail é: %s\n", friendName, friendEmail);

    return 0;
}
