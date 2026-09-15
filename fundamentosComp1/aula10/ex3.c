/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 3 - Aula 10
 * @version 0.1
 * @date 2026-05-04
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie um algoritimo que exiba todos os números múltiplos de 5 no intervalo de 1 a 500
 * 
 */

#include <stdio.h>

int main() {
    for (int index = 1; index <= 500; index++) {
        if (index % 5 == 0)
            printf("Index: %d\n", index);
    }

    return 0;
}
