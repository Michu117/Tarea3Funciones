#include <stdio.h>
// Creo una Función para calcular la potencia de un número utilizando sumas sucesivas //
int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

// Programa Principal //
int main() {
    int base; 
    int exponente;
    // Pido al usuario que ingrese un número para la base y uno para el exponente //
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    // Llamo a la función que creé para calcular la potencia //
    int resultado = potencia(base, exponente);
    // Presento el resultado //
    printf("%d elevado a %d es %d\n", base, exponente, resultado);
    return 0;
}
// He utilizado el bucle for ya que si conozco el número de repeticiones que corresponde al exponente, ya que necesito multiplicar la base por sí misma tantas veces como el valor del exponente indica. //