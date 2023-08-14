/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char escolha;
    printf("Quer continuar? [sim - s / nao - n ]? \n");
    scanf(" %c", &escolha);
    
    switch(escolha){
        case 's': // aspas simples para caracteres
            printf("Voce quer parar");
            break;
        case 'n':
            printf("Voce quer parar");
            break;
        default:
            printf("Escolha invalida");
            break;
    }
    printf("\n \n \n");
    system("pause");
    return 0;
}
