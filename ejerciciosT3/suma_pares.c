#include <stdio.h>
// Creo una Función para calcular y presentar la suma de los números pares hasta n //
void sumarPares(int num){
    int suma = 0;
    printf("Serie de números pares: ");
    for (int i = 2; i <= num; i += 2) {
        printf("%d ", i);
        suma += i;
    }
    printf("\nSuma de los números pares hasta %d = %d\n", num, suma);
}
// Programa Principal //
int main() {
    int num;
    // Pido al usuario que ingrese el número que define la longitud de la serie //
    printf("Introduce el valor de n: ");
    scanf("%d", &num);
    // Llamo a la función que creé para calcular la suma de los pares hasta n //
    sumarPares(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo for porque es adecuado ya que conocemos las condiciones de la serie de pares //