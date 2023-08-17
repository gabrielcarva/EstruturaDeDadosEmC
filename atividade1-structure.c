/******************************************************************************

Programa que usa Structure para capturar dados de 5 funcionário do usuário e
exibe o relatório final dos funcionários cadastrados usando for

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
    int ID;
    char nome[30];
    int idade;
    float salario;
};

int main()
{
    struct funcionario f[4];
    int i = 0;

    for ( i = 0 ; i < 5 ; i++) {
        printf("\n----- DADOS DO FUNCIONARII N %d -----\n\n", i+1);
        printf("Digite o ID do funcionario: ");
        scanf(" %d", &f[i].ID);
        getchar();
        printf("Digite o nome: ");
        fgets(f[i].nome, 30, stdin);
        printf("Digite a sua idade: ");
        scanf(" %d", &f[i].idade);
        printf("Digite o salario: ");
        scanf(" %f", &f[i].salario);
    }
    i = 0;

    printf("\n---- RELATORIO FINAL DOS FINCIONARIOS : ----\n\n");

    for ( i = 0 ; i < 5 ; i++ ) {
        printf("ID.......: %d \n", f[i].ID);
        printf("Nome.....: %s", f[i].nome);
        printf("Idade....: %d \n", f[i].idade);
        printf("Salario..: %.2f \n\n", f[i].salario);
    }
    system("pause")
    return 0;
}
