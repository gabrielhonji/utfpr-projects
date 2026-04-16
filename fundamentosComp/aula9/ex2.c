/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 9
 * @version 0.1
 * @date 2026-04-16
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba valores enquanto eles estiverem no intervalo de 500 a 1000. Ao receber um valor fora da faixa, o programa deverá parar de solitar valores, exibir quantos valores válidos foram digitados e finalizar.
 * 
 */

#include <stdio.h>

int main() {
    int counter = 0, choice;

    do {
        printf("Digite um valor de 500 a 1000: ");
        scanf("%d", &choice);
        if(choice >= 500 && choice <= 1000)
            counter++;
    } while (choice >= 500 && choice <= 1000);

    printf("O usuário digitou %d valores válidos.\n", counter);

    return 0;
}
