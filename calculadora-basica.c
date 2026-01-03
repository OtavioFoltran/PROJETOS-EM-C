#include <stdio.h>

int main() {
    float num1, num2;
    char codigo;
    
    printf("Digite o Primeiro Número: ");
    scanf("%f", &num1);
    printf("Digite o Segundo Número: ");
    scanf("%f", &num2);
    
    printf(" \n \
    1 - Soma \n \
    2 - Subtração \n \
    3 - Multiplicação \n \
    4 - Divisão \n \
    \n \
    Escolhe um número para executar uma operação: ");

    scanf(" %c", &codigo);
    
    if(codigo=='1' || codigo=='2' || codigo=='3' || codigo=='4'){
        
        if(codigo=='1')printf("O valor do resultado é: %.f", num1+num2);
        if(codigo=='2')printf("O valor do resultado é: %.f", num1-num2);
        if(codigo=='3')printf("O valor do resultado é: %.f", num1*num2);
        if(codigo=='4')printf("O valor do resultado é: %.f", num1/num2);
    }else{
        printf("o código informado é inválido");
    }

    return 0;
}