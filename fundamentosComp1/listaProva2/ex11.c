/**
 * @file ex11.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 11 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba uma palavra e em seguida gere e exiba uma outra string contendo a palavra concatenada da mesma palavra invertida, porém em maiúscula. Dica: usar a função toupper() da biblioteca ctype.h para transformar uma letra na sua letra maiúscula.
 * Exemplo:
 * Digite uma palavra: Brasil
 * BrasilLISARB
 * 
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char rawWord[20], reverseWord[20];
    int rawWordSize;

    // Recebe uma palavra
    printf("Digite uma palavra: ");
    fgets(rawWord, 20, stdin);
    rawWord[strcspn(rawWord, "\n")] = '\0';
    setbuf(stdin, NULL);

    // Calcula o tamanho da palavra
    rawWordSize = (int) strnlen(rawWord, 20);

    // Inverte a palavra
    for (int invertedIndex = 0, rawIndex = rawWordSize - 1; invertedIndex <= rawWordSize; invertedIndex++, rawIndex--) {
        reverseWord[invertedIndex] = toupper(rawWord[rawIndex]);

        if (rawIndex == rawWordSize)
            reverseWord[invertedIndex + 1] = '\0';
    }

    // Concatena a nova palavra e exibe-a
    strcat(rawWord, reverseWord);
    printf("A palavra ficou: %s.\n", rawWord);
    
    return 0;
}
