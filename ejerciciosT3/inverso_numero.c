#include <stdio.h>
// Creo una Función para invertir un número //
int invertirNumero(int num){
    int inverso = 0;
   while (num != 0) {
        inverso = inverso * 10 + (num % 10);
        num = num / 10;
    }
    return inverso;
}
// Programa Principal //
int main() {
    int num;
    // Pido al usuario que ingrese un número //
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Llamo a la función que creé para invertir el número //
    int numInvert = invertirNumero(num);

    // Presento el resultado //
    printf("El inverso de %d es %d\n", num, numInvert);

    return 0;
}
// Utilicé un bucle while en mi solución porque es especialmente útil si no sabemos cuantas repeticiones serán necesarias, en este caso depende del número que ingrese el usuario. //