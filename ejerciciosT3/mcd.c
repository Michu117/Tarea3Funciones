#include <stdio.h>
// Creo una Función para calcular el MCD de dos números //
int calcMCD(int num1, int num2) {
    int mcd = 1;
    int i;
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
    }
    return mcd;
}
// Programa Principal //
int main() {
    int num1;
    int num2;
    // Pido al usuario que ingrese los dos números para calcular su MCD //
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    // Llamo a la función que creé para calcular el MCD //
    int mcdcalc = calcMCD(num1, num2);
    // Presento el resultado //
    printf("El MCD de %d y %d es %d\n", num1, num2, mcdcalc);
    return 0;
}
// He utilizado el bucle for ya que si conozco las condiciones del MCD y me permite analizar las repeticiones para aplicar el bucle //