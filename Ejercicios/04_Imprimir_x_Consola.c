#include <stdio.h>
int main() {
    // Imprimir un mensaje en la consola
    printf("Hola, Mundo!\n");

    // Declarar una variable de tipo cadena y imprimirla
    char libro[] = "El principito";
    printf("%s\n", libro);

    // Leer un número entero ingresado por el usuario
    int numero;
    printf("Ingresa un número entero: ");
    scanf("%d", &numero);
    printf("El número ingresado es: %d\n", numero);
    // Leer un número decimal ingresado por el usuario
    float decimal;
    printf("Ingresa un número decimal: ");
    scanf("%f", &decimal);
    printf("El número decimal ingresado es: %.2f\n", decimal);
    // Leer un booleano ingresado por el usuario
    int booleano;
    printf("Ingresa un valor booleano (0 para falso, 1 para verdadero): ");
    scanf("%d", &booleano); 
    printf("El valor booleano ingresado es: %d\n", booleano);

    return 0;
}