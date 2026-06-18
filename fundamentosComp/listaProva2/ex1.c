/**
 * @file ex1.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 1 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Crie um algoritmo que imprima uma tabela de conversão de polegadas para centímetros. Deseja-se que na tabela conste valores de 1 polegada ate 20 polegadas inteiras. (Para isso considere: 1 polegada = 2,54 cm)
 * Exemplo de saída:
 * 1” equivale a 2,54 cm
 * 2” equivalem a 5,08 cm
 * 3” equivalem a 7,62 cm
 * 
 */

#include <stdio.h>

/***
 * A função exibe uma tabela de polegadas para centimetros até um certo limite definido pelo usuário
 * \param agrInchLimit é o limite que o usuário define para a tabela
 * \return devolve 0
 */

int InchesConvertionTable(int argInchLimit) {
    float inchConvertion = 2.54;
    printf("1” equivale a %.2f cm\n", inchConvertion);
    for (int inchIndex = 2; inchIndex <= argInchLimit; inchIndex++) {
        printf("%d” equivalem a %.2f cm\n", inchIndex, inchConvertion * inchIndex);
    }
    
    return 0;
}

int main() {
    int inchLimit;

    do {
        printf("Digite até qual valor a tabela deve converter de polegadas a centimetros (no intervalo fechado de 1 a 20): ");
        scanf("%d", &inchLimit);
        if (inchLimit < 1 || inchLimit > 20)
            printf("Limite inválido, foi digitado um valor fora do intervalo [1, 20], tente novamente.\n");
    } while (inchLimit < 1 || inchLimit > 20);

    InchesConvertionTable(inchLimit);

    return 0;
}
