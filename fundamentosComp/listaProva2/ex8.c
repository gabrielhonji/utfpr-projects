/**
 * @file ex8.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 8 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba o nome e o preço de custo de 3 produtos. Para isso, crie, além da matriz com os nomes (tamanho 20), uma matriz 3x3 de preços de produtos onde cada coluna representa: coluna 0 é o preço de custo (digitado pelo usuário), coluna 1 será o preço à vista calculado (preço de custo acrescido em 10%), coluna 2 é o preço a prazo calculado (preço de custo acrescido em 20%).  Para tanto, relacione o índice/linha da matriz de preços com o índice/linha de um vetor bidimensional de strings que armazenará o nome dos produtos.
 * O programa deve exibir, um por um, o nome do produto e a sua tabela com todos os preços (custo, à vista e a prazo).
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char productsNames[3][20];
    float productsPrices[3][3], productPrice;

    // Popula as matrizes de preço e nome dos produtos
    for (int productIndex = 0; productIndex < 3; productIndex++) {
        // Recebe o nome de cada produto
        printf("Digite o nome do %dº produto: ", productIndex + 1);
        fgets(productsNames[productIndex], 20, stdin);
        productsNames[productIndex][strcspn(productsNames[productIndex], "\n")] = '\0';
        setbuf(stdin, NULL);
        
        // Recebe o preço de cada produto e previne que receba valores negativos
        do {
            printf("Digite o preço de custo do %dº produto: ", productIndex + 1);
            scanf("%f", &productPrice);
            setbuf(stdin, NULL);
            if (productPrice <= 0)
                printf("Valor inválido digitado, insira um valor positivo diferente de 0, tente novamente.\n");
        } while (productPrice <= 0);

        // Calcula e define os respectivos preços
        productsPrices[productIndex][0] = productPrice;
        productsPrices[productIndex][1] = productPrice * 1.1;
        productsPrices[productIndex][2] = productPrice * 1.2;
    }

    // Exibe os nomes dos produtos com seus respectivos preços
    for (int productIndex = 0; productIndex < 3; productIndex++) {
        printf("\nO %dº produto é '%s', e seus respectivos preços são:\n1. Preço de custo: R$ %.2f.\n2. Proço a vista: R$ %.2f.\n3. Preço a prazo: %.2f.\n", productIndex + 1, productsNames[productIndex], productsPrices[productIndex][0], productsPrices[productIndex][1], productsPrices[productIndex][2]);
    }

    return 0;
}
