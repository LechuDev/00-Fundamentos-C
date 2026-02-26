//Crear una aplicación que calcule el IVA de un producto dado su precio y la tasa de IVA. y te lo de su precio final con IVA incluido.
#include <stdio.h>
int main(){
    float precio, iva, precioFinal;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    printf("Ingrese la tasa de IVA: ");
    scanf("%f", &iva);
    precioFinal = precio + (precio * iva / 100);
    printf("El precio final del producto con IVA incluido es: %.2f\n", precioFinal);
    return 0;
}