#include <stdio.h>
// Creo una Función para calcular el factorial de un número //
void Cfactorial(int num) {
unsigned long long factorial = 1;
    if (num < 0) {
        printf("El factorial de un número negativo no está existe.\n");
    } else{
        printf("%d! = ", num);
    }
    // Calculo y presento el factorial utilizando un bucle for //
    for (int i = num; i > 0; i--) {
        factorial *= i;
        printf("%d", i);
        if (i > 1) {
            printf(" * ");
        }
    }
    printf(" = %llu\n", factorial);
}
// Programa Principal //
int main(){
    int num;
    // Pido al usuario que ingrese un número para calcular su factorial //
    printf("Introduce un número entero para calcular su factorial: ");
    scanf("%d", &num);

    // Llamo a la función que creé para calcular y presentar el factorial//
    Cfactorial(num);
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo for porque es adecuado para repetir un número conocido de veces //
