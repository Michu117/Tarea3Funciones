#include <stdio.h>
// Función para calcular y presentar el producto de la serie de fracciones de los primeros n números //
void ProductoFracc(int num) {
    double producto = 1.0;
    int i = 1;
    printf("Serie: ");
    do {
        producto *= 1.0 / i; 
        printf("1/%d", i); 
        if (i < num) {
            printf(" * ");
        }
        i++;
    } while (i <= num);
    printf("\nProducto de la serie hasta 1/%d = %.15f\n", num, producto);
}
// Programa principal //
int main() {
    int num;
    // Solicito al usuario que ingrese el número que define la longitud de la serie //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    // Llamo a la función para calcular y presentar el producto de la serie fraccionaria de los primeros n números //
    ProductoFracc(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo do while porque es adecuado para evaluar la condición y generar repeticiones a partir de ese análisis //