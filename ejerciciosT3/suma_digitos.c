#include <stdio.h>
// Creo una Función para calcular la suma de los dígitos de un número //
int sumaDigitos(int num) {
    int suma = 0;
    while (num != 0) {
        suma += num % 10;
        num /= 10;        
    }
    return suma;
}
// Programa Principal //
int main() {
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);
    
    int resultado = sumaDigitos(num);
    printf("La suma de los dígitos de %d es %d\n", num, resultado);
    
    return 0;
}
// Utilicé un bucle while en mi solución porque es especialmente útil si no sabemos cuantas repeticiones serán necesarias, en este caso depende del número que ingrese el usuario. //
