#include <stdio.h>
#include <stdlib.h>

int main() {
    // Usando un arreglo
    int numeros[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
   // Usando una structura
   struct Persona {
    char nombre[50];
    int edad;
};
   struct Persona persona1;
    printf("Ingresa el nombre de la persona: ");
    scanf("%s", persona1.nombre);
    printf("Ingresa la edad de la persona: ");
    scanf("%d", &persona1.edad);
    printf("Nombre: %s, Edad: %d\n", persona1.nombre, persona1.edad);
    return 0;
}