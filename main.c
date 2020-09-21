#include <stdio.h>

int main()
{
    char nombre[100];

    printf("Hello World\n");
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);

    return 0;
}