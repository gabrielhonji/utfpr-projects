/**
 * @file ex8.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 8 - Aula 8
 * @version 0.1
 * @date 2026-04-09
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um menu que mostre 3 opções: Menu do programa: 1 - Teste 1; 2 - Teste 2; 3 - Sair do programa; Digite sua opção. A primeira e segunda opção imprimte os respectivos textos ("Teste1","Teste2") e mostra o menu novamente. A terceira finaliza o programa. Caso digite uma opção diferente, deve mostrar uma mensagem de erro e mostrar o menu novamente.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int choice = 1;

    while (choice != 3)
    {
        printf("Menu do programa:\n1 - Teste 1\n2 - Teste 2\n3 - Sair do programa\nDigite sua opção: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Teste1\n");
            break;
        case 2:
            printf("Teste3\n");
            break;
        case 3:
            printf("Programa encerrado\n");
            break;
        default:
            printf("Nenhuma opção ofertada foi escolhida, tente novamente.\n");
            break;
        }
    }

    return 0;
}
