/**
 * @file ex01.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Aula 7 
 * @version 0.1
 * @date 2026-04-02
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie um programa que forneça um menu com duas opções. Caso o usuário digite 1, o programa solicitará um número e verificará se o valor é par ou impar. Caso o usuário digite 2, o programa solicitará uma idade e verificará se pessoa é maior ou menor de idade.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, number, age;

    printf("Menu do programa:\n1 - Verifica se o número é impar ou par\n2 - Verifica se a pessoa é maior ou menor de idade\nDigite sua opção: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Digite o número: ");
            scanf("%d", &number);

            if (number % 2 == 0)
                printf("O número %i é par", number);
            else
                printf("O número %i é impar", number);
        break;
        case 2:
            printf("Digite a idade do indivíduo: ");
            scanf("%d", &age);

            if (age >= 18)
                printf("O indivíduo com %d anos é maior de idade.", age);
            else
                printf("O indivíduo com %d anos é menor de idade.", age);
        break;
        default:
            printf("Nenhuma opção ofertada foi escolhida.");
        break;
    }
    
    return 0;
}
