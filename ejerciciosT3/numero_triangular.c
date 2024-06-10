#include <stdio.h>
// Función para calcular y presentar la suma de la serie del n-ésimo número triangular //
void nesimo(int num){
    int suma = 0;
    printf("La serie triangular hasta el %d-ésimo número es:\n", num);
    for (int i = 1; i <= num; i++) {
        suma += i;
        printf("%d ", i);
        if (i != num) {
            printf("+ ");
        }
    }
    printf("\nLa suma hasta el %d-ésimo número triangular es: %d\n", num, suma);
}
// Programa principal //
int main() {
    int num;
    // Solicito al usuario que ingrese el número que define la longitud de la serie //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    // Llamo a la función para calcular y presentar la suma de la serie del n-ésimo número triangular //
    nesimo(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo for porque es adecuado cuando conocemos las condiciones exactas //