#include <stdio.h>
// Creo una Función para verificar si el número ingresado es primo o no //
int esprimo(int num) {
    int esPrimo = 1;
    if (num <= 1) {
        esPrimo = 0;
    } else {
        for (int i = 2; i * i <= num && esPrimo; i++) {
            if (num % i == 0) {
                esPrimo = 0;
            }
        }
    }
    return esPrimo;
}
// Programa Principal //
int main() {
    int num;
    // Pido al usuario que ingrese un número para verificar si es primo o no //
    printf("Ingrese un número para verificar si es primo: ");
    scanf("%d", &num);
    // Llamo a la función que creé para verificar si el número es primo o no y presento el resultado //
    if (esprimo(num)) {
        printf("%d es primo.\n", num);
    } else {
        printf("%d no es primo.\n", num);
    }
    return 0;
}
// Utilizo for ya que conozco las condiciones que debe cumplir el número ingresado para que sea primo //