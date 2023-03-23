#include<stdio.h>

int main(){
    int numero=5; //declaración de variable
    int *punt_numero; //declaración de puntero
    printf("Hola mundo\n"); //3a
    punt_numero=&numero; //inicialización del puntero
    //1)
    printf("El contenido del puntero: %d\n", *punt_numero);
    //2)
    printf("Direccion de memoria almacenada por el puntero: %d\n",punt_numero);
    //3)
    printf("direccion de memoria de la variable :%d\n",&numero);
    //4)
    printf("La direccion de memoria del puntero : %d\n",&punt_numero);
    //5)
    printf("El tamanio de memoria utilizado por esa variable:%d",sizeof(numero));
    return 0;

}

