#include <stdio.h>
// Creo una Función para calcular y presentar la suma de los cubos de los primeros n números //
void SumaCubos(int num){
    int suma = 0;
    printf("Serie: ");
    for (int i = 1; i <= num; i++) {
        suma += i * i * i;
        printf("%d^3", i);
        if (i < num) {
            printf(" + ");
        }
    }
    printf("\n");
    printf("Suma de los cubos de los primeros %d números es: %d\n", num, suma);
}
// Programa Principal //
int main() {
    int num;
    // Pido al usuario que ingrese el número que define la longitud de la serie //
    printf("Ingrese un número entero n: ");
    scanf("%d", &num);
    // Llamo a la función que creé para calcular y presentar la suma de los cubos de los primeros n números //
    SumaCubos(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo for porque es adecuado ya que conocemos las condiciones de la serie y las operaciones para la suma de cubos //