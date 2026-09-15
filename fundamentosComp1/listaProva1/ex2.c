/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 2 - Lista 1
 * @version 0.1
 * @date 2026-04-06
 * 
 * @copyright Copyright (c) 2026
 * 
 * Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois pontos no plano, através da seguinte fórmula: d=(x2−x1)2+(y2−y1)2−−−−−−−−−−−−−−−−−−−√
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float coordinateX1, coordinateX2, coordinateY1, coordinateY2, distance;

    printf("Digite a coordenada x do primeiro ponto: ");
    scanf("%f", &coordinateX1);
    printf("Digite a coordenada y do primeiro ponto: ");
    scanf("%f", &coordinateY1);

    printf("Digite a coordenada x do segundo ponto: ");
    scanf("%f", &coordinateX2);
    printf("Digite a coordenada y do segundo ponto: ");
    scanf("%f", &coordinateY2);

    distance = sqrt(pow((coordinateX2 - coordinateX1), 2) + pow((coordinateY2 - coordinateY1), 2));

    printf("A distância entre os pontos A(%.2f,  %.2f) e B(%.2f, %.2f) é de %.2f unidades de medida.", coordinateX1, coordinateY1, coordinateX2, coordinateY2, distance);

    return 0;
}
