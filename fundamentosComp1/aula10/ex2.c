/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Aula 10
 * @version 0.1
 * @date 2026-05-04
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um algoritimo que exiba todos números de 100 a 1.
 * 
 */

#include <stdio.h>

int main() {
    for (int index = 100; index >= 1; index--) {
        printf("Index: %d\n", index);
    }

    return 0;
}
