//Operaciones con variables
//uso 2 metodos para explicar 2 cosas distintas

#include <stdio.h>
#define PI 3.1416   //macros es como una constantes

//metodo pora ver el funcionamiento de los macros,
//le asignamos a x la constante antes definida

int contantes(){
    float x;

    x=PI;

    printf("El valor de x: %f\n",x);

    return(0);
}

//pedimos un dato por pantalla y luego lo mostramos
//cuando metamos el valor le damos a enter para mandarlo

int teclado(){
    int y;

    printf("Introduce un valor para y: ");
    scanf("%i",&y);   //escanea lo que nosotros metemos por teclado, es %i ya que es un entero
    printf("El valor de y: %i\n",y);
}