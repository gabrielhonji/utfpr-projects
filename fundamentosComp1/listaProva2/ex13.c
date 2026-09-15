/**
 * @file ex13.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 13 - Lista de exercícios - Prova 2
 * @version 0.1
 * @date 2026-06-10
 * 
 * @copyright Copyright (c) 2026
 * 
 * Utilizando uma matriz de pontos (cada linha é um ponto contendo as colunas X e Y) faça o que se pede:
 * a) Em uma função, faça um programa que receba os valores de 10 pontos no espaço cartesiano 2D
 * b) Receba os dados referentes a 2 pontos (V1 e V2) que representam os vértices de um Retângulo.
 * c) Em uma função, preencha e exiba um outro vetor de pontos contendo apenas os pontos que estão dentro do retângulo formado pelos pontos V1 e V2.
 * d) Faça uma função que exiba os pontos armazenados no vetor2
 * 
 */

#include <stdio.h>

/***
 * A função recebe pontos e define a partir deles suas coordenadas num plano
 * \param argPoints é uma matriz de pontos
 * \return void
 */

void readCoordinates(int argPoints[10][2]) {
    for (int row = 0; row < 10; row++) {
        printf("Coordenadas do %dº ponto:\nX: ", row + 1);
        scanf("%d", &argPoints[row][0]);
        
        printf("Y: ");
        scanf("%d", &argPoints[row][1]);
    }
}

int pointsInside(int argPoints[10][2], int argVertices[2][2], int argArray2[10][2]) {
    int minX, maxX, minY, maxY, insideCounter = 0;

    minX = (argVertices[0][0] > argVertices[1][0] ? argVertices[1][0] : argVertices[0][0]);
    maxX = (argVertices[0][0] < argVertices[1][0] ? argVertices[1][0] : argVertices[0][0]);

    minY = (argVertices[0][1] > argVertices[1][1] ? argVertices[1][1] : argVertices[0][1]);
    maxY = (argVertices[0][1] < argVertices[1][1] ? argVertices[1][1] : argVertices[0][1]);

    for (int row = 0; row < 10; row++) {
        if(argPoints[row][0] >= minX && argPoints[row][0] <= maxX && argPoints[row][1] >= minY && argPoints[row][1] <= maxY) {
            argArray2[insideCounter][0] = argPoints[row][0];
            argArray2[insideCounter][1] = argPoints[row][1];
            insideCounter++;
        }
    }

    return insideCounter;
}

void showPoints(int argArray2[10][2], int arrayLength) {
    printf("Houveram %d pontos dentro do retângulo, esses são:\n", arrayLength);
    for (int row = 0; row < arrayLength; row++) {
        printf("O %dº ponto: (%d, %d).\n", row + 1, argArray2[row][0], argArray2[row][1]);
    }
}

int main() {
    int matrix[10][2], rectangleVertices[2][2], array2[10][2], arrayLength;
    
    readCoordinates(matrix);

    for (int row = 0; row < 2; row ++) {
        printf("Coordenadas do V%d:\nX: ", row + 1);
        scanf("%d", &rectangleVertices[row][0]);
        printf("Y: ");
        scanf("%d", &rectangleVertices[row][1]);
    }

    arrayLength = pointsInside(matrix, rectangleVertices, array2);

    showPoints(array2, arrayLength);

    return 0;
}
