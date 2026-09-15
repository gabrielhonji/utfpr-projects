/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 2 - Aula 15
 * @version 0.1
 * @date 2026-08-26
 *
 * @copyright Copyright (c) 2026
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int day, month, year;
} Birthday;

typedef enum
{
    brasileiro = 1,
    estrangeiro
} Nationality;

typedef struct
{
    char name[50];
    int age;
    float weight;
    Birthday birthday;
    Nationality nationality;
    union
    {
        char cpf[20];
        char passport[20];
    } doc;

} Info;

int main()
{
    Info info[5];

    for (int i = 0; i < 5; i++)
    {
        // Nome
        printf("\nInsira as informações do %dº indivíduo.\nNome: ", i + 1);
        fgets(info[i].name, 50, stdin);
        info[i].name[strcspn(info[i].name, "\n")] = '\0';
        setbuf(stdin, NULL);

        // Idade
        do
        {
            printf("Idade: ");
            scanf("%d", &info[i].age);
            if (info[i].age <= 0)
                printf("Idade inválida, tente novamente.\n");
        } while (info[i].age <= 0);

        // Peso
        do
        {
            printf("Peso: ");
            scanf("%f", &info[i].weight);
            if (info[i].weight <= 0)
                printf("Peso inválido, tente novamente.\n");
        } while (info[i].weight <= 0);

        // Data de nascimento
        printf("Data de nascimento.\n");
        do
        {
            printf("Dia: ");
            scanf("%d", &info[i].birthday.day);
            if (info[i].birthday.day < 1 || info[i].birthday.day > 31)
                printf("Dia inválido, tente novamente.\n");
        } while (info[i].birthday.day < 1 || info[i].birthday.day > 31);
        do
        {
            printf("Mês: ");
            scanf("%d", &info[i].birthday.month);
            if (info[i].birthday.month < 1 || info[i].birthday.month > 12)
                printf("Mês inválido, tente novamente.\n");
        } while (info[i].birthday.month < 1 || info[i].birthday.month > 12);
        do
        {
            printf("Ano: ");
            scanf("%d", &info[i].birthday.year);
            if (info[i].birthday.year < 1)
                printf("Ano inválido, tente novamente.\n");
        } while (info[i].birthday.year < 1);

        // Nacionalidade
        do
        {
            printf("Nacionalidade do indivíduo, 1 (Brasileiro), 2 (Estrangeiro): ");
            scanf("%d", &info[i].nationality);
            setbuf(stdin, NULL);
            if (info[i].nationality < 1 || info[i].nationality > 2)
                printf("Digito inválido, tente novamente.\n");
        } while (info[i].nationality < 1 || info[i].nationality > 2);

        // Documento (cpf ou passport)
        switch (info[i].nationality)
        {
        case brasileiro:
            printf("Digite o cpf: ");
            fgets(info[i].doc.cpf, 20, stdin);
            info[i].doc.cpf[strcspn(info[i].doc.cpf, "\n")] = '\0';
            setbuf(stdin, NULL);
            break;
        case estrangeiro:
            printf("Digite o passaporte: ");
            fgets(info[i].doc.passport, 20, stdin);
            info[i].doc.passport[strcspn(info[i].doc.passport, "\n")] = '\0';
            setbuf(stdin, NULL);
            break;
        }
    }

    printf("\nOs 5 individos cadastrados foram:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%dº - %s nascido em %d/%d/%d (%d anos), tem %.2f KGs. ", i + 1, info[i].name, info[i].birthday.day, info[i].birthday.month, info[i].birthday.year, info[i].age, info[i].weight);
        if (info[i].nationality == 1)
            printf("É brasileiro, com cpf: %s.\n", info[i].doc.cpf);
        else
            printf("É estrangeiro, com passaporte: %s.\n", info[i].doc.passport);
    }

    return 0;
}
