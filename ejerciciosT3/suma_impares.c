#include <stdio.h>
// Creo una Función para calcular y presentar la suma de los números impares hasta n //
void sumarImpares(int num){
    int suma = 0;
    printf("La serie de números impares hasta %d es: ", num);
    for (int i = 1; i <= num; i += 2) {
        printf("%d ", i);
        suma += i;
    }
    printf("\n");
    printf("La suma de los números impares hasta %d es %d\n", num, suma);
}
// Programa Principal //
int main() {
    int num;
    // Pido al usuario que ingrese el número que define la longitud de la serie //
    printf("Ingresa un número entero positivo: ");
    scanf("%d", &num);
    // Llamo a la función que creé para calcular la suma de los impares hasta n //
    sumarImpares(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo for porque es adecuado ya que conocemos las condiciones de la serie de impares //