/**
 * @file ex01.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 01 - Aula 5
 * @version 0.1
 * @date 2026-03-25
 * 
 * @copyright Copyright (c) 2026
 * 
 * Faça um programa que receba a altura de uma pessoa e calcule e exiba seu peso ideal utilizando a seguinte: peso ideal = 72.7 * altura - 58
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float height, ideal_weight; // Height in meters and ideal weight in kilograms

    printf("Digite sua altura em metros: ");
    scanf("%f", &height);

    ideal_weight = 72.7 * height - 58;

    printf("Seu peso ideal levando em conta que sua altura e %.2f metros e: %.2f Kg\n", height, ideal_weight);

    return 0;
}
