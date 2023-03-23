#include<stdio.h>
int cuadrado(int numero1);
int main(){
   int numero1, valor;
   printf("Ingrese un numero entero:\n");
   scanf("%d",&numero1);
   valor=cuadrado(numero1);
   printf("El cuadrado de ese numero es :%d",valor);
   return 0;
}

int cuadrado(int numero1){
    int valor;
    valor=(numero1*numero1);

    return valor;
}