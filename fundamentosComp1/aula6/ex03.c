/**
 * @file ex03.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief
 * @version 0.1
 * @date 2026-03-30
 *
 * @copyright Copyright (c) 2026
 *
 * Faça um programa que receba os coeficientes a, b e c de uma equação do segundo grau e terne as raízes da equação (se existirem)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float coefficientA, coefficientB, coefficientC, sqrtDelta;

    printf("Insira o valor do coeficiente a: ");
    scanf("%f", &coefficientA);

    printf("Insira o valor do coeficiente b: ");
    scanf("%f", &coefficientB);

    printf("Insira o valor do coeficiente c: ");
    scanf("%f", &coefficientC);

    sqrtDelta = sqrt(pow(coefficientB, 2) - 4 * coefficientA * coefficientC);

    // split the calculation for each root amount from sqrtDelta
    if (isnan(sqrtDelta))
        printf("A equação não apresenta raizes reais");
    else if (sqrtDelta == 0) {
        float root1;
        root1 = (-coefficientB + sqrtDelta) / 2 * coefficientA;
        printf("A equação %.2fx²+(%.2f)x+(%.2f) tem raiz de delta igual a 0, logo suas duas raizes tem o mesmo valor %.2f", coefficientA, coefficientB, coefficientC, root1);
    } else {
        float root1, root2;
        root1 = (-coefficientB + sqrtDelta) / 2 * coefficientA;
        root2 = (-coefficientB - sqrtDelta) / 2 * coefficientA;
        printf("A equação %.2fx²+(%.2f)x+(%.2f) tem raiz de delta positivo, suas raizes são: raiz(1) = %.2f, raiz(2) = %.2f", coefficientA, coefficientB, coefficientC, root1, root2);
    }

    return 0;
}
