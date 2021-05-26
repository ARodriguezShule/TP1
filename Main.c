#include <stdio.h>
#include "TP1.c"
#include <stdlib.h>

int main()
{
    int accion, posicion;
    char cadena[20], cadena2[20];
    char caracter;

    printf("==================================\n");
    printf("Ejercicios Trabajo practico 1\n");
    printf("==================================\n");

    do {
        printf("\nMenu :\n");
        printf("1- Calcular y retornar la longitud de una cadena\n");
        printf("2- Convertir una cadena de digitos en su equivalente numerico\n");
        printf("3- Convertir una cadena de caracteres a mayuscula\n");
        printf("4- Eliminar de una cadena dada todas las ocurrencias de un caracter dado\n");
        printf("5- Concatenar al final de la primer cadena una segunda cadena\n");
        printf("6- Insertar un caracter en una posición determinada\n");
        printf("7- Terminar\n");
        printf("\nElija una accion\n");
        scanf("%i", &accion);
        switch (accion)
        {
            case 1: printf("Ingrese una cadena\n");
                    scanf("%s",cadena);
                    printf("largo de cadena : %d\n", longitud(cadena));
                    break;
            case 2: printf("Ingrese una cadena de digitos\n");
                    scanf("%s",cadena);
                    printf("valor numerico : %d\n", cadenaANumero(cadena));
                    break;
            case 3: printf("Ingrese una cadena\n");
                    scanf("%s",cadena);
                    printf("upperCase : %s\n",cadena, upperCase(cadena));
                    break;
            case 4: printf("Ingrese una cadena\n");
                    scanf("%s",cadena);
                    printf("Ingrese una caracter\n");
                    scanf("%s",cadena2);
                    eliminar(cadena,cadena2);
                    printf("Cadena con concurrencias eliminadas: %s \n", cadena);
                    break;
            case 5: printf("Ingrese una cadena\n");
                    scanf("%s",cadena);
                    printf("Ingrese una cadena\n");
                    scanf("%s",cadena2);
                    concatena(cadena, cadena2);
                    printf("Cadena concatenada: %s\n",cadena);
                    break;
            case 6: printf("Ingrese una cadena\n");
                    scanf("%s",cadena);
                    printf("Ingrese una caracter\n");
                    scanf("%c",&caracter); //la primera vez que lee encuentra el caracter '\n' de la lectura enterior y se cierra instantaneamente
                    scanf("%c",&caracter);
                    printf("Ingrese una posicion\n");
                    scanf("%d",&posicion);
                    printf("Cadena con caracter insertado: %s\n", insertarCaracter(cadena,caracter,posicion));
                    break;
        }
        // los comandos system() solo funcionan en windows (cmd o powershell)
        //system("pause");
        //system("cls");
    
    } while (accion != 7);

}
