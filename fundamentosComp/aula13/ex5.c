/**
 * @file ex5.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 5 - Aula 13
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba uma frase e depois exiba quantas vezes cada vogal aparece. Ele deve contar considerando o tamanho da String.
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char phrase[100];
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int vowelsCount[5] = {0};

    // Digitar a frase
    printf("Digite uma frase (limite de 100 caracteres): ");
    fgets(phrase, 100, stdin);
    phrase[strcspn(phrase, "\n")] = '\0';
    setbuf(stdin, NULL);

    // Laço para cada letra da frase e verifica se essa letra condiz com alguma vogal 
    for (int phraseIndex = 0; phraseIndex < (int) strlen(phrase); phraseIndex++) {
        for (int vowelIndex = 0; vowelIndex < 5; vowelIndex++) {
            if (phrase[phraseIndex] == vowels[vowelIndex]) {
                vowelsCount[vowelIndex]++;
                break;
            }
        }
    }

    // Imprime o vowelsCount
    printf("A frase inserida tem:\n");
    for (int vowelIndex = 0; vowelIndex < 5; vowelIndex++) {
        printf("%d. %d letras %c\n", vowelIndex + 1, vowelsCount[vowelIndex], vowels[vowelIndex]);
    }
    return 0;
}
