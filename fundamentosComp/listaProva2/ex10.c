/**
 * @file ex10.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 10 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba e armazene 10 nomes de carros (tamanho máximo: 20 caracteres). Em seguida, o programa deverá permitir a busca pelos nomes. Ao receber um carro, o sistema deverá informar se o carro está ou não na lista e quantas vezes ele está na lista. O programa deverá finalizar se for feita a busca por "Fusca", que deve ser informado também se está ou não na lista.
 * Exemplo da busca:
 * Digite o carro a ser buscado: Gol
 * O carro está na lista 1 vez.
 * Digite o carro a ser buscado: Vectra
 * O carro não está na lista.
 * Digite o carro a ser buscado: Fusca
 * O carro está na lista 2 vezes.
 * Fim de programa.
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char cars[10][20], search[20], stopKey[] = "Fusca";
    int carCounter;

    // Popula a matriz de carros
    for (int carIndex = 0; carIndex < 10; carIndex++) {
        printf("Digite o nome do %dº carro: ", carIndex + 1);
        fgets(cars[carIndex], 20, stdin);
        cars[carIndex][strcspn(cars[carIndex], "\n")] = '\0';
        setbuf(stdin, NULL);
    }

    // Busca se o carro aparece na lista
    do {
        carCounter = 0;

        printf("Digite o nome de um carro: ");
        fgets(search, 20, stdin);
        search[strcspn(search, "\n")] = '\0';

        // Busca pelo carro buscado
        for (int carIndex = 0; carIndex < 10; carIndex++) {
            if (strcmp(search, cars[carIndex]) == 0)
                carCounter++;
        }

        // Exibe a quantidade de vezes que o elemento aparece na lista
        switch (carCounter) {
            case 0:
                printf("Não existe '%s' na lista de carros listados.\n", search);
                break;
            case 1:
                printf("Foi encontrada %d ocorrencia de '%s' na lista.\n", carCounter, search);
                break;
            default:
                printf("Foram encontradas %d ocorrencias de '%s' na lista.\n", carCounter, search);
                break;
        }

    } while (strcmp(search, stopKey) != 0);

    printf("A palavra 'Fusca' foi digitada. Fim do programa.\n");

    return 0;
}
