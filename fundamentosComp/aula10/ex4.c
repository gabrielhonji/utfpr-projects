/**
 * @file ex4.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 4 - Aula 10
 * @version 0.1
 * @date 2026-05-04
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie um algoritimo que exiba todos os números pares entre 240 e 730 inclusive.
 * 
 */

#include <stdio.h>

int main() {
    for (int index = 240; index <= 730; index++) {
        if (index % 2 == 0)
            printf("Index: %d\n", index);
    }

    return 0;
}
