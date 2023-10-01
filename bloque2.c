//Variables y su declaracines sencillas

#include <stdio.h>
int main(){
    int x;  //Numeros enteros (16 bits)
    float y;    //numeros con decimales (32 bits)
    double z;   //Numeros con deicmales (64 bits)
    char k;     //alamcenen carateres

    x=10;
    y=5.5;
    z=6.2;
    k='a';

    printf("Valor de x: %i\n",x);
    printf("Valor de y: %f\n",y); //sale con 6 decimales
    printf("Valor de z: %f\n",z); //va %f xq tambien es de tipo flotante
    printf("Valor de k: %c\n",k);

    //en un print podemos poner las variables que queramos
    printf("\nValor de x :%i\n valor de k %c",x,k)

    return(0);
}