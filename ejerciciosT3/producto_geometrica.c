#include <stdio.h>
// Creo una Función para calcular el producto de los primeros n términos de la serie geométrica //
long long productoSerieGeometrica(int num, int a, int r) {
    long long producto = 1;
    long long termino = a;
    printf("Serie: ");
    for (int i = 0; i < num; i++) {
        printf("%lld ", termino);
        producto *= termino;
        termino *= r; 
    }
    printf("\n");
    return producto;
}
// Programa Principal //
int main() {
    // Pido al usuario que ingrese un número que defina la longitud de la serie, el término inicial y la razón común //
    int num, a, r;
    printf("Ingrese el número de términos n: ");
    scanf("%d", &num);
    printf("Ingrese el término inicial (a): ");
    scanf("%d", &a);
    printf("Ingrese la razón común (r): ");
    scanf("%d", &r);

    // Llamo a la función que creé para calcular y presentar la serie //
    long long resultado = productoSerieGeometrica(num, a, r);
    // Presento el Resultado //
    printf("El producto de los primeros %d términos de la serie geométrica es: %lld\n", num, resultado);

    return 0;
}
// Utilizo for porque es adecuado para repetir un número conocido de veces //