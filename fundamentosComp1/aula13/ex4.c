/**
 * @file ex4.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 4 - Aula 13
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba um nome, ele deve perguntar novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber um nome com 5 caracteres ou mais o programa exibe o nome e finaliza.
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int minLenght = 5;

    do {
        printf("Digite um nome (ao menos 5 caracteres): ");
        fgets(name, 100, stdin);
        name[strcspn(name, "\n")] = '\0';
        setbuf(stdin, NULL);
    } while ((int) strlen(name) < minLenght);
    printf("O nome foi: %s\n", name);

    return 0;
}
