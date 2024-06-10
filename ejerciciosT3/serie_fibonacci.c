#include <stdio.h>
// Creo una Función para calcular y presentar los primeros n elementos de la serie de Fibonacci //
void PresentarFibonacci(int num) {
    if (num <= 0) {
        printf("Por favor, ingresa un número mayor que 0.\n");
        return;
    }
    unsigned long long int a = 0; 
    unsigned long long int b = 1; 
    unsigned long long int siguiente;
    printf("Serie de Fibonacci: ");
    // Presento el primer número //
    printf("%llu", a);
    if (num > 1) {
        // Presento el segundo número //
        printf(", %llu", b);

        // Utilizo un bucle for para calcular y presentar los siguientes números de la serie //
        for (int i = 2; i < num; i++) {
            siguiente = a + b;
            printf(", %llu", siguiente);
            a = b;
            b = siguiente;
        }
    }
    printf("\n");
}
// Programa Principal //
int main() {
    int num;
    // Pido al usuario que ingrese un número que definirá la longitud de la serie //
    printf("Ingresa el número de elementos de la serie de Fibonacci que deseas presentar: ");
    scanf("%d", &num);
    // Llamo a la función que creé para presentar y calcular la Serie de Fibonacii //
    PresentarFibonacci(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo for porque es adecuado para repetir un número conocido de veces, lo que hace que el cálculo de la Serie de Fibonacci sea simple y fácil de implementar //
