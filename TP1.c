
//Funciones auxiliares
int potencia(int a, int b)
{
    int sumador = 1;
    while (b > 0)
    {
        sumador *= a;
        b--;
    }
    return sumador;
}

// a) Calcular y retornar la longitud de una cadena dada.
int longitud(char cadena[])
{
    int i;

    for (i = 0; cadena[i] != '\0'; i++)
        ;
    return i;
}
// b) Convertir una cadena de dígitos en su equivalente numérico.
long cadenaANumero(char c[])
{
    long sumador = 0, largoCadena = longitud(c);
    for (int i = 0; i < largoCadena; i++)
    {
        sumador += (c[i] - 48) * potencia(10, largoCadena - i - 1); //el 48 es una manera de traducir de ASCII a numero, se ve horrible pero funciona ¯\_(ツ)_/¯
    }
    return sumador;
}
// c) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula.
char *upperCase(unsigned char s[])
{
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] >= 97 && s[i] < 122)
        {
            s[i] -= 32;
        }
    }
    return s;
}

// d) Eliminar de una cadena dada todas las ocurrencias de un carácter dado.

void eliminar(char *cadena, char *caracteres)
{
    int i = 0;
    int j = 0;
    int agregar = 1;

    while (cadena[i])
    {
        agregar = 1;
        int n = 0;

        while (caracteres[n])
        {

            if (cadena[i] == caracteres[n])
            {
                agregar = 0;
            }
            n++;
        }

        if (agregar)
        {
            cadena[j] = cadena[i];
            j++;
        }
        i++;
    }

    cadena[j] = 0;
}
// e) Concatenar al final de la primer cadena dada una segunda cadena dada .void concatena(char cadena1[], char cadena2[])

void concatena(char cadena1[], char cadena2[])
{
    int i, j;
    j = longitud(cadena1);

    for (i = 0; i < longitud(cadena2); i++)
    {

        cadena1[longitud(cadena1) + 1 + i] = cadena2[i];
    }
}
// f) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.
