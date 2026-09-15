/**
 * @file ex2.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Atividade 2 - Aula 14
 * @version 0.1
 * @date 2026-08-21
 *
 * @copyright Copyright (c) 2026
 *
 * Você precisa organizar os dados de uma reunião de uma equipe de desenvolvimento, para isso, utilizando struct e typedef, crie os seguintes tipos de dados:
 *
 * Horario: composto por hora, minuto e segundo;
 * Data: composta por dia, mês e ano;
 * Reuniao: composta por título, local, data e horário.
 *
 * Em seguida, declare uma variável do tipo Reuniao e leia do teclado todas as suas informações.
 *
 * Ao final, exiba os dados da reunião de forma organizada.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int hour, min, sec;
} Time;

typedef struct
{
    int day, mouth, year;
} Date;

typedef struct
{
    char title[50], address[50];
    Time time;
    Date date;
} Meeting;

int main()
{
    Meeting meeting;

    // Horário
    printf("Insira os dados de horário da reunião:\n");
    printf("Hora: ");
    scanf("%d", &meeting.time.hour);
    printf("Minuto: ");
    scanf("%d", &meeting.time.min);
    printf("Segundo: ");

    scanf("%d", &meeting.time.sec);

    // Data
    printf("Insira a data da reinião:\n");
    printf("Dia: ");
    scanf("%d", &meeting.date.day);
    printf("Mês: ");
    scanf("%d", &meeting.date.mouth);
    printf("Ano: ");
    scanf("%d", &meeting.date.year);
    setbuf(stdin, NULL);

    // Endereço
    printf("Insira o endereço: ");
    fgets(meeting.address, 50, stdin);
    meeting.address[strcspn(meeting.address, "\n")] = '\0';
    setbuf(stdin, NULL);

    // Título
    printf("Para concluir, insira um título para a reunião: ");
    fgets(meeting.title, 50, stdin);
    meeting.title[strcspn(meeting.title, "\n")] = '\0';
    setbuf(stdin, NULL);

    // Exibição
    printf("\nA reunião: '%s', acontecerá no local '%s', no dia %d/%d/%d às %d:%d:%d.\n", meeting.title, meeting.address, meeting.date.day, meeting.date.mouth, meeting.date.year, meeting.time.hour, meeting.time.min, meeting.time.sec);

    return 0;
}
