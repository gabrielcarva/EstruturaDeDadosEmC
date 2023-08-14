/*

Operador ternário - ?
Este operador, avalia a expr1, caso seja verdadeira, executa a expr2, senão, executa a expr3:

*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	int a, b;
	printf("Informe um numero: \n");
	scanf(" %d", &a);
	
	b = (a > 12)? 100 : 200;

	printf("Valor de b: %d \n \n \n", b);

	system("pause");
	return 0;
}