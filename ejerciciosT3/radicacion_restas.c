#include <stdio.h>
// Creo una Función para calcular la raiz de un número utilizando restas sucesivas //
float raiz(float num) {
    float resultado = 0.0;
    float incremento = 0.001;
    for (float i = 0.0; i * i * i <= num; i += incremento) {
        resultado = i;
    }
    
    return resultado;
}
// Programa Principal //
int main() {
    float num;
    // Pido al usuario que ingrese un número para sacar su raíz cúbica //
    printf("Ingrese un número para sacar su raíz cúbica: ");
    scanf("%f", &num);
    // Llamo a la función que creé para calcular la raíz cúbica //
    float numRaiz = raiz(num);
    // Presento el resultado //
    printf("La raíz cúbica de %.2f es: %.2f\n", num, numRaiz);
    return 0;
}
// He utilizado el bucle for ya que si conozco el número de repeticiones que corresponde a la raíz cúbica, ya que necesito multiplicar la base por sí misma tantas veces como el valor del índice indica y sumar el incremendo dependiendo de esto. //