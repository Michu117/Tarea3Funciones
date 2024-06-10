#include <stdio.h>
// Creo una Función para calcular y presentar la suma de la serie de fracciones de los primeros n números //
void SumaFracc(int num){
    float suma = 0;
    int i = 1;
    printf("Serie: ");
    do
    {
        suma += 1.0 / i;
        printf("1/%d", i);
        if (i < num)
            printf(" + ");
        i++;
    } while (i <= num);
    printf("\nLa suma de la serie hasta 1/%d es: %f\n", num, suma);
}
// Programa Principal //
int main() {
    int num;
    // Pido al usuario que ingrese el número que define la longitud de la serie //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    // Llamo a la función que creé para calcular y presentar la suma de la serie fraccionaria de los primeros n números //
    SumaFracc(num);
    return 0;
}
// Utilizo void para la función porque no tiene que devolver un valor y utilizo do while porque es adecuado para evaluar la condición y generar repeticiones a partir de ese análisis //