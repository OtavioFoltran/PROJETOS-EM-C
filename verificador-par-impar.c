#include <stdio.h>

int main()
{

int n1;
printf("Digite um número: ");
scanf("%d", &n1);

if(n1 % 2 == 0){
    
    printf("Esse número é par");
    
}else{
    
    printf("Esse número é impar");
}
    return 0;
}