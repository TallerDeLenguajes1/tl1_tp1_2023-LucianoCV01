#include <stdio.h>
//Declaro Funciones
int FxCuadrado(int n);
void ProcCuadrado(int n);
void ProcVariableDatos(int *puntVariable);
void Invertir(int *a,int *b); 
void orden(int *a,int *b);

int main(){
    int num1, num2;
    //Pido al usuario que ingrese los datos
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &num1, &num2);
    //Pruebo las funciones y procedimientos
    printf("El cuadrado de %d es: %d\n", num1,FxCuadrado(num1));
    ProcCuadrado(num2);
    ProcVariableDatos(&num1);
    ProcVariableDatos(&num2);
    printf("El contenido de num1 es %d y el de num2 es %d\n", num1, num2);
    Invertir(&num1, &num2);
    printf("El contenido de num1 es %d y el de num2 es %d\n", num1, num2);
    orden(&num1, &num2);
    printf("EL valor mas chico es: %d\n", num1);
    printf("EL valor mas grande es: %d\n", num2);

    return 0;
}
//Desarrollo Funciones
int FxCuadrado(int n) {
    return (n*n);
}
void ProcCuadrado(int n) {
    printf("El cuadrado de %d es: %d\n", n, (n*n));
}
void ProcVariableDatos(int *puntVariable) {
    printf("La dirección de memoria de la variable es: %p\n", puntVariable);
    printf("El contenido de la variable es: %d\n", *puntVariable);
}
void Invertir(int *a,int *b) {
    int ayuda=*a;
    *a=*b;
    *b=ayuda;
}
void orden(int *a,int *b) {
    if (*a > *b)
    {
        Invertir(a, b);
    }
}