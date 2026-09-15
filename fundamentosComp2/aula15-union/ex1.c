/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 1 - Aula 15
 * @version 0.1
 * @date 2026-08-26
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>
#include <stdlib.h>

enum PokemonType {Fogo = 1, Agua, Grama};

int main() {
    enum PokemonType pokemonType;

    do {
        printf("Escolha qual o seu tipo pokemon:\nDigite '1' para Fogo, '2' para Agua e '3' para Grama: ");
        scanf("%d", &pokemonType);
        if (pokemonType < 1 || pokemonType > 3)
            printf("Escolha incorreta, tente novamente.\n");
    } while (pokemonType < 1 || pokemonType > 3);

    switch(pokemonType) {
        case Fogo:
            printf("Você escolheu o caminho ardente da vitória!\n");
            break;
        case Agua:
            printf("A correnteza te levará ao topo!\n");
            break;
        case Grama:
            printf("O crescimento e a estratégia são suas armas!\n");
            break;
    }

    return 0;
}
