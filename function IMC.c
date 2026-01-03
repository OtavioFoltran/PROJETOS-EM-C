#include <stdio.h>
    void valor_imc(){
        
        float peso;
        float altura;

        printf("Digite o Peso: ");
        scanf("%f", &peso);
        printf("Digite a Altura: ");
        scanf("%f", &altura);
        
        float resultado = peso/(altura*altura);
        printf("o IMC é: %.2f\n", resultado);
        
        if(resultado < 18.5){
            printf("Abaixo do Peso\n");
        }else if(resultado < 24.9){
        printf("Peso normal (saudável)\n");
        }else if(resultado < 29.9){
            printf("Soprepeso\n");
        }else if(resultado < 34.9 ){
            printf("Obesidade grau 1\n");
        }else if(resultado < 39.9){
            printf("Obesidade grau 2\n");
        }else{
            printf("Obesidade grau 3\n");
        }
        
       
}

int main()
{
    valor_imc(); 
    
    return 0;
}