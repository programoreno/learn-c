//Metodo burbuja

//Intercambiar los valores de 2 numeros enteros introducidps por teclado
#include <stdio.h>

int main(){

    int x,y,aux;
    printf("Valor de x es: ");
    scanf("%i",&x);

    printf("Valor de y es: ");
    scanf("%i",&y);

    aux = x;
    x = y;
    y = aux;

    printf("El valor de x es : %i\n",x);
    printf("El valor de y es : %i\n",y);

    return 0;
}