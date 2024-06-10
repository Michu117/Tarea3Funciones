#include <stdio.h>
// Creo una Función para calcular y presentar la suma de una serie aritmética //
void Saritmetica(int num) {
    int suma = 0;
    for (int i = 1; i <= num; i++) {
        printf("%d", i);
        if (i < num) {
            printf(" + ");
        }
        suma += i;
    }
    printf("\nLa suma de los primeros %d términos es: %d\n", num, suma);
}
// Programa Principal //
int main() {
    int num;
    // Pido al usuario que ingrese un número que defina la longitud de la serie //
    printf("Ingresa el valor de n: ");
    scanf("%d", &num);
    printf("La serie es: ");
    // Llamo a la función que creé para calcular y presentar la serie //
    Saritmetica(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo for porque es adecuado para repetir un número conocido de veces //