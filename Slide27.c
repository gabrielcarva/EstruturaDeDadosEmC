#include <stdio.h>
#include <stdlib.h>

int main(){
    int j = 5;
    
    if(j ==5){
        j++;
        goto imprime;
    }
    
    j = 1350; // esta atribuicao sera ignorada
    
    imprime:
        printf("Valor de j: %d", j);
    
    printf("\n \n");
    return 0;
}
