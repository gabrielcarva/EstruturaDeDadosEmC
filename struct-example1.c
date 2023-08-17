/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    char nome[31];
    int idade;
};

int main()
{
    struct pessoa p[2];
    strcpy(p[0].nome, "Joao da Silva");
    p[0].idade = 35;
    strcpy(p[1].nome, "Maria Eduarda");
    p[1].idade = 27;
    
    printf("Dados pesoa 1: \n");
    printf("Nome ..: %s \n", p[0].nome);
    printf("Idade..: %d \n", p[0].idade);
    printf("\n\n");
    printf("Dados pesoa 2: \n");
    printf("Nome ..: %s \n", p[1].nome);
    printf("Idade..: %d \n", p[1].idade);
    printf("\n\n");
    system("pause");
    return 0;
}
