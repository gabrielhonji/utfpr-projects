/**
 * @file ex12.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 12 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Desenvolva um programa que receba uma frase. O programa deverá gerar e exibir uma nova string, contendo uma "palavra sim e outra não" da frase digitada, e exibir o número de palavras da frase original.
 * 
 * Exemplo:
 * Digite uma frase: A arte de programar consiste em organizar e dominar a complexidade.
 * Saída
 * A de consiste organizar dominar complexidade.
 * Número de palavras: 11
 * 
 * Obs: Considere que serão digitadas apenas letras na frase do usuário (não tem pontuação nem números)
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char rawString[100], strippedString[100];
    int wordCounter;

    // Recebe uma frase
    printf("Digite uma frase: ");
    fgets(rawString, 100, stdin);
    rawString[strcspn(rawString, "\n")] = '\0';
    setbuf(stdin, NULL);

    // Separa a frase pelos espaços
    char *strippedWord = strtok(rawString, " ");

    // Forma uma frase nova concatenando seus pedaços
    for (wordCounter = 0; strippedWord != NULL; wordCounter++) {
        if (wordCounter % 2 == 0) {
            strcat(strippedString, strippedWord);
            strcat(strippedString, " ");
        }

        strippedWord = strtok(NULL, " ");
    }

    printf("A frase ficou: '%s'. A frase original tinha %d palavras.\n", strippedString, wordCounter);


    return 0;
}
