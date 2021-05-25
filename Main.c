#include <stdio.h>
#include "TP1.c"
#include <stdlib.h>

int main()
{
    int accion, posicion;
    char cadena[], cadena2[];
    char caracter;
    
    printf("==================================\n");
    printf("Ejercicios Trabajo practico 1\n");
    printf("==================================\n");
    
    do {
        printf("\nMenu :\n");
        printf("1- Calcular y retornar la longitud de una cadena\n");
        printf("2- Convertir una cadena de digitos en su equivalente numérico\n");
        printf("3- Convertir una cadena de caracteres a mayuscula\n");
        printf("4- Eliminar de una cadena dada todas las ocurrencias de un carácter dado\n");
        printf("5- Concatenar al final de la primer cadena una segunda cadena\n");
        printf("6- Insertar un caracter en una posición determinada\n");
        printf("7- Terminar\n");
        printf("\nElija una accion :\n");
        scanf("%i", &accion);
        switch (accion)
        {
            case 1: printf("Ingrese una cadena\n");
                    scanf(cadena);
                    printf("largo de cadena :\t\n", largo(cadena));
                    break;
            case 2: printf("Ingrese una cadena\n");
                    scanf("%c",cadena);
                    printf("valor numerico de '%c' :\n", cadenaANumero(cadena));
                    break;
            case 3: printf("Ingrese una cadena\n");
                    scanf("%c",cadena);
                    printf("upperCase de '%c' :\n", upperCase(cadena));
                    break;
            case 4: printf("Ingrese una cadena\n");
                    scanf(cadena);
                    printf("Ingrese una caracter\n");
                    scanf(caracter);
                    printf("Cadena con concurrencias eliminadas: \n", eliminar(cadena,caracter));
                    break;
            case 5: printf("Ingrese una cadena\n");
                    scanf(cadena);
                    printf("Ingrese una cadena\n");
                    scanf(cadena2);
                    printf("Cadena concatenada:\n", concatena(cadena, cadena2));
                    break;
            case 6: printf("Ingrese una cadena\n");
                    scanf(cadena);
                    printf("Ingrese una caracter\n");
                    scanf(caracter);
                    printf("Ingrese una posicion\n");
                    scanf(posicion);
                    printf("Cadena con caracter insertado:\n", insertarCaracter(cadena,caracter,posicion));
                    break;
            case 7: printf("Fin del ejercicio :)\n");
                    break;
        }
    
    } while (accion != 7);
    
}
