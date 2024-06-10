#include <stdio.h>
// Función para calcular y presentar la suma de los factoriales de los primeros n números //
void SumaFactorial(int num){
    int suma = 0;
    for (int i = 1; i <= num; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        if (i == num) {
            printf("%d!", i);
        } else {
            printf("%d! + ", i);
        }
        suma += factorial;
    }
    printf(" = %d\n", suma);
}
// Programa principal //
int main() {
    int num; 
    // Solicito al usuario que ingrese el número que define la longitud de la serie //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    // Llamo a la función para calcular y presentar la suma de los factoriales de los primeros n números //
    SumaFactorial(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo for porque es adecuado cuando conocemos las condiciones exactas //