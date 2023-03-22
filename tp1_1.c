#include <stdio.h>

int main(){
    printf("Hola Mundo\n"); //3.a
    //3.e
    int numero=6, *puntero=&numero;
    printf("La dirección de memoria almacenada por el puntero: %p\n", puntero);
    printf("La dirección de memoria de la variable: %p\n", &numero);
    printf("La dirección de memoria del puntero: %p\n", &puntero);
    printf("El tamaño de memoria utilizado por esa variable usando la función sizeof(): %lu\n", sizeof(numero));
    printf("El contenido del puntero: %p\n", puntero);

    return 0;
}