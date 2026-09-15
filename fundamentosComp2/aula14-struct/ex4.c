/**
 * @file ex4.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 4 - Aula 14
 * @version 0.1
 * @date 2026-08-22
 *
 * @copyright Copyright (c) 2026
 *
 * Consumo de energia de um setup gamer
 * Crie uma estrutura Componente para representar um componente de computador.
 * Para cada componente, armazene: nome do componente e potência elétrica, em watts.
 * Em seguida, utilize um vetor de estruturas Componente capaz de armazenar os dados de 5 componentes.
 * Leia do teclado:
 *     os dados dos 5 componentes;
 *     a quantidade de horas que o computador permanece ligado por dia.
 * Calcule o consumo diário de energia de cada componente utilizando a fórmula:
 * consumo diário (Wh) = potência (W) × horas de uso por dia
 * Ao final, exiba:
 *     o consumo diário de cada componente, em Wh;
 *     o consumo diário total do computador, em Wh;
 *     a participação percentual de cada componente no consumo total.
 * Obs: Para calcular a participação percentual de cada componente, utilize:
 * participação (%) = consumo do componente / consumo total × 100
 * Apresente os valores percentuais com duas casas decimais.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    int power_consumption, daily_consumption_component;
    float relative_daily_consumption;
} Component;

int main()
{
    Component component[5] = {};
    int usage_time_daily, daily_consumption;

    // Insere o nome e o consumo de cada componente
    printf("Insira as informações dos 5 componentes do computador:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Nome do %dº componente: ", i + 1);
        fgets(component[i].name, 50, stdin);
        component[i].name[strcspn(component[i].name, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digite o consumo de energia do %dº componente (em W): ", i + 1);
        scanf("%d", &component[i].power_consumption);
        setbuf(stdin, NULL);
    }

    // Tempo de atividade do computador
    printf("\nQuanto tempo o dispositivo permanece ligado diariamente?: ");
    scanf("%d", &usage_time_daily);

    // Calcula o consumo diário de cada componente e incrementa o consumo diário total da máquina
    for (int i = 0; i < 5; i++)
    {
        component[i].daily_consumption_component = component[i].power_consumption * usage_time_daily;
        daily_consumption += component[i].daily_consumption_component;
    }

    // Calcula o consumo relativo de cada componente
    for (int i = 0; i < 5; i++)
    {
        component[i].relative_daily_consumption = (float) component[i].daily_consumption_component / daily_consumption * 100;
    }

    // Exibe as informações
    printf("\nO computador tem um consulmo total diário de %d Wh, no qual é dividido em:\n", daily_consumption);
    for (int i = 0; i < 5; i++)
    {
        printf("%dº peça -> nome: '%s' / consumo diário: %d Wh / participação percentual: %.2f%%.\n", i + 1, component[i].name, component[i].daily_consumption_component, component[i].relative_daily_consumption);
    }

    return 0;
}
