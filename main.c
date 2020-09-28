#include <stdio.h>

int main()
{
    char nombre[100];
    unsigned int edad;

    printf("Hello World\n");
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Edad: ");
    scanf("%u",&edad);
    printf("Vas a Cumplir: %u", edad+1);
    printf("\nEres especial");

    return 0;
}