#include<stdio.h>
int cuadrado(int numero1);
void cuadrado2(int numero1, int *puntero_num1);
void Invertir(int a,int b);//deberá devolver en el valor de a en la
//variable b, y en el valor de b el valor de a
int main(){
   int numero1, valor,a ,b;
   int *puntero_num1;
   puntero_num1=&numero1;
   printf("Ingrese un numero entero:\n");
   scanf("%d",&numero1);
   printf("Ingrese dos numeros para invertir:\n");
   scanf("%d",&a);
   scanf("%d",&b);

   valor=cuadrado(numero1);
   printf("El cuadrado de ese numero es :%d\n",valor);
   cuadrado2(numero1,puntero_num1);
   printf("El cuadrado de ese numero es :%d\n",numero1);

   printf("numeros a invertir ingresados: a:%d y b:%d\n",a,b);

   return 0;
}

int cuadrado(int numero1){
    int valor;
    valor=(numero1*numero1);
    printf("direccion de la variable :%d\n",&valor);
    return valor;
}

void cuadrado2(int numero1 ,int *puntero_num1){
    *puntero_num1=(numero1*numero1);
    printf("direccion de la variable:%d\n",puntero_num1);


}

