/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 3 - Aula 14
 * @version 0.1
 * @date 2026-08-22
 * 
 * @copyright Copyright (c) 2026
 * 
 * Ranking de uma competição de programação
 * Crie uma estrutura Participante contendo: nome, curso, pontuação obtida em 4 desafios, pontuação total e situação.
 * Leia do teclado o nome, o curso e as quatro pontuações de um participante.
 * Calcule a pontuação total e determine a situação do participante de acordo com as seguintes regras:
 *     pontuação total maior ou igual a 300: Classificado;
 *     pontuação total maior ou igual a 200 e menor que 300: Em avaliação;
 *     pontuação total menor que 200: Eliminado.
 * Ao final, exiba todas as informações do participante, incluindo a pontuação total e a situação.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50], course[50], status[20];
    int scores[4], total_score;
} Player;

int main() {
    Player player = {};

    // Informações do participante
    printf("Digite o nome do participante: ");
    fgets(player.name, 50, stdin);
    player.name[strcspn(player.name, "\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite seu curso: ");
    fgets(player.course, 50, stdin);
    player.course[strcspn(player.course, "\n")] = '\0';
    setbuf(stdin, NULL);

    for (int i = 0; i < 4; i++) {
        printf("Digite a pontuação do %dº desafio: ", i + 1);
        scanf("%d", &player.scores[i]);
        player.total_score += player.scores[i];
    }

    // Define o status do participante com base na sua pontuação total
    if (player.total_score >= 300)
        strcpy(player.status, "Classificado");
    else if (player.total_score >= 200)
        strcpy(player.status, "Em avaliação");
    else
        strcpy(player.status, "Eliminado");

    printf("\nO participante '%s' do curso '%s' obteve uma somatórial total de pontos igual a %d pontos, fazendo-o obter a situação de: '%s'.\n", player.name, player.course, player.total_score, player.status);
    
    return 0;
}
