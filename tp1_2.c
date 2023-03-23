#include<stdio.h>
int cuadrado(int numero1);
void cuadrado2(int numero1, int *puntero_num1);
int main(){
   int numero1, valor;
   int *puntero_num1;
   puntero_num1=&numero1;
   printf("Ingrese un numero entero:\n");
   scanf("%d",&numero1);
   valor=cuadrado(numero1);
   printf("El cuadrado de ese numero es :%d\n",valor);
   cuadrado2(numero1,puntero_num1);
   printf("El cuadrado de ese numero es :%d\n",numero1);

   return 0;
}

int cuadrado(int numero1){
    int valor;
    valor=(numero1*numero1);

    return valor;
}

void cuadrado2(int numero1 ,int *puntero_num1){
    *puntero_num1=(numero1*numero1);


}