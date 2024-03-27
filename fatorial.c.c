/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int numero; 
    long double fatorial;
    
//Recebe o múmero do usuário    
    puts("Digite um número para calcular seu fatorial.");
    scanf("%d",&numero);
    
//Inicializa a variável fatorial
    fatorial = 1;
    
//Calcula o fatorial a cada interação de i
    for(int i = 1; i <= numero; i++){
        fatorial *= i; 
    }
    
    printf("O fatorial de %d é: %Lf", numero, fatorial);

    return 0;
}
