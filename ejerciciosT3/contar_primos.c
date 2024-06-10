#include <stdio.h>
// Función para calcular y presentar los números primos hasta n //
void ContarPrimos(int num){
    int contador = 0;
    printf("Los números primos hasta %d son:\n", num);
    for (int i = 2; i <= num; i++) {
        int esPrimo = 1;
        for (int j = 2; j * j <= i && esPrimo; j++) {
            if (i % j == 0) {
                esPrimo = 0;
            }
        }
        if (esPrimo) {
            printf("%d ", i);
            contador++;
        }
    }
    printf("\nHay %d números primos hasta %d\n", contador, num);
}
// Programa principal //
int main() {
    int num;
    // Solicito al usuario que ingrese el número que define hasta que número se van a contar los números primos //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    // Llamo a la función para calcular y presentar los números primos hasta n //
    ContarPrimos(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo for porque es adecuado cuando conocemos las condiciones exactas //