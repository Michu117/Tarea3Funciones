#include <stdio.h>
// Creo una Función para calcular el número de dígitos de un número //
int ndigitos(int num) {
    int cont = 0;
    while (num != 0) {
        cont++;
        num /= 10;
    }
    return cont;
}
// Programa Principal //
int main() {
    int num;
    // Pido al usuario que ingrese un número para calcular su número de dígitos //
    printf("Ingresa un número para calcular su número de dígitos: ");
    scanf("%d", &num);
    // Llamo a la función que creé para calcular el número de dígitos//
    int numdigitos = ndigitos(num);
    printf("El número de dígitos es: %d\n", numdigitos);

    return 0;
}
