/**
 * @file revisao.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Revisão para o segundo semestre
 * @version 0.1
 * @date 2026-08-19
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que receba do teclado e armazene os nomes e a quantidade de gols de quatro atletas da Copa do Mundo de 2026. Cada nome pode ter até 20 caracteres e a quantidade de gols é um valor inteiro.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char names[4][20], search[20], artTag[] = " artilheiro";
    int gols[4], find = 0, mostGols, artId;
    float golsRate[4];

    // Recebe os jogadores
    for (int i = 0; i < 4; i++)
    {
        // Recebe o nome
        printf("Digite o nome do %d jogador: ", i + 1);
        fgets(names[i], 20, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
        setbuf(stdin, NULL);

        // Receber qtd gols
        printf("Digite o número de gols do %d jogador: ", i + 1);
        scanf("%d", &gols[i]);
        setbuf(stdin, NULL);
    }

    // Exibe os jogadores
    for (int i = 0; i < 4; i++)
    {
        printf("| %-20s | %-2d |\n", names[i], gols[i]);
    }

    // Busca o jogador
    printf("Digite o nome do jogador a ser buscado: ");
    fgets(search, 20, stdin);
    search[strcspn(search, "\n")] = '\0';
    setbuf(stdin, NULL);

    for (int i = 0; i < 4; i++)
    {
        // Compara o nome buscado os dos jogadores
        if (strcmp(names[i], search) == 0) {
            printf("O jogador tem %d gols.\n", gols[i]);
            find++;
            break;
        }
    }
    // Exibe que não foi encontrado o jogador
    if (find == 0)
        printf("Jogador não encontrado.\n");

    // Define e busca o artilheiro
    mostGols = gols[0];

    for (int i = 0; i < 4; i++) {
        if (gols[i] > mostGols) {
            mostGols = gols[i];
            artId = i;
        }
    }
    // Concatena o nome
    strcat(names[artId], artTag);
    printf("O artilheiro é : '%s' com %d gols.\n", names[artId], gols[artId]);

    return 0;
}
