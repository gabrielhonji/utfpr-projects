/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 1 - Aula 14
 * @version 0.1
 * @date 2026-08-21
 *
 * @copyright Copyright (c) 2026
 *
 * Crie uma estrutura Jogador para representar o perfil de um jogador de videogame. A estrutura deve conter: nome e pontuação.
 * Em seguida, declare e leia do teclado os dados de dois jogadores.
 * Ao final, calcule e exiba a diferença entre as pontuações dos dois jogadores.
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a estrutura do Jogador
typedef struct
{
    char name[20];
    int points;
} Player;

int main()
{
    Player players[2];
    int diff;

    // Popule os jogadores
    for (int i = 0; i < 2; i++)
    {
        printf("Digite o nome do %d jogador: ", i + 1);
        fgets(players[i].name, 20, stdin);
        players[i].name[strcspn(players[i].name, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digite os pontos do %d jogador: ", i + 1);
        scanf("%d", &players[i].points);
        setbuf(stdin, NULL);
    }

    // Compara qual dos jogadores tem mais pontos que o segundo
    if (players[0].points == players[1].points)
    {
        printf("Ambos os jogadores tiveram a mesma quantidade de pontos.\n");
    }
    else if (players[0].points > players[1].points)
    {
        diff = players[0].points - players[1].points;
        printf("O primeiro jogador tem %d mais pontos do que o segundo.\n", diff);
    }
    else
    {
        diff = players[1].points - players[0].points;
        printf("O segundo jogador tem %d mais pontos do que o primeiro.\n", diff);
    }

    return 0;
}
