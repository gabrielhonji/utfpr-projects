/**
 * @file ex01.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 01 - Aula 4 - Fundamentos de Computação
 * @version 0.1
 * @date 2026-03-21
 *
 * @copyright Copyright (c) 2026
 *
 * Escreva um programa para determinar a quantidade de litros de combustível gastos em uma viagem por um automóvel que faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem é de 35 min e a velocidade média do automóvel é de 80 km/h.
 *
 * Litros ?
 * Tempo gasto = 35 min
 * Velocidade média = 80 km/h
 * Consumo = 12 km/litro
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int timeMin = 35;
    int speedKmH = 80;
    int consumptionKmL = 12;

    float distanceKm = (float) speedKmH * timeMin / 60; // Calculates distance in kilometers (S = V * t)

    float fuelL = distanceKm / consumptionKmL;

    printf("Um carro que faz em media %d Km/L gastara %.2f Litros de combustivel para uma viagem de %d minutos a uma velocidade media de %d Km/h.\n", consumptionKmL, fuelL, timeMin, speedKmH);

    return 0;
}
