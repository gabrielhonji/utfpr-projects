/**
 * @file ex9.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 9 - Aula 8
 * @version 0.1
 * @date 2026-04-09
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que simule um jogo, onde o usuário deverá descobrir um número aleatório escolhido pelo computador (de 1 a 100). O usuário poderá realizar até 6 tentativas, o programa deverá retornar as mensagens "muito alto", "muito baixo" até o usuário acertar o número ou esgotar o número maximo de tentativas.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int computerNum, userNum;
    int chances = 6;

    srand(time(NULL)); // srand() é utilizado para atribuir valores distintos a cada rand(), o time(NULL) é utilizado como seed
    computerNum = (rand() % 100) + 1; // O "% 100" define o valor máximo, o "+ 1" atribui um valor mínimo

    while (chances > 0) {
        printf("Digite seu chute: ");
        scanf("%d", &userNum);

        if (userNum == computerNum) {
            printf("Parabéns! O computador havia escolhido %d.\n", computerNum);
            return 0;
        }
        else if (userNum > computerNum)
            printf("O computador escolheu um número menor.\n");
            else
        printf("O computador escolheu um número maior.\n");

        chances--;
    }

    printf("Acabaram as chances, o número era %d.\n", computerNum);

    return 0;
}
