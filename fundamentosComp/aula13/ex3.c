/**
 * @file ex3.c
 * @author Gabriel Honji (gabrielhonji@alunos.utfpr.edu.br)
 * @brief Exercício 3 - Aula 13
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 * Desenvolva um programa que armazene o nome e o telefone de 5 pessoas. Ao digitar a posição desejada, o programa deve exibir o nome e telefone daquela posição. O programa finaliza ao receber a entrada -1.
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char name[5][100];
    char phoneNumber[5][11];
    int choice = 0;

    // Popula os vetores com os nomes e telefones
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº nome: ", i + 1);
        fgets(name[i], 100, stdin);
        name[i][strcspn(name[i], "\n")] = '\0';
        setbuf(stdin, NULL);
        
        printf("Digite o telefone dessa pessoa: ");
        fgets(phoneNumber[i], 11, stdin);
        phoneNumber[i][strcspn(phoneNumber[i], "\n")] = '\0';
        setbuf(stdin, NULL);
    }

    // Buscar pessoa pelo index
    printf("Procure a pessoa pela agenda (para encerrar o programa digite '-1')\n");
    do {
        printf("Digite o index da pessoa (escolha de 0 a 4): ");
        scanf("%d", &choice);

        if (choice >= 0 && choice <= 4)
            printf("%d. Nome: %s / Telefone: %s\n", choice, name[choice], phoneNumber[choice]);
        else if (choice != -1 )
            printf("Nenhuma opção válida foi digitada, tente novamente.\n");
    } while (choice != -1);

    return 0;
}
