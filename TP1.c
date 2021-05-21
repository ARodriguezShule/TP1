
//Funciones auxiliares
int  potencia (int a, int b){
    int sumador = 1;
    while(b >= 0){
        sumador *= a;
        b--;
    }
    return sumador;
}

// a) Calcular y retornar la longitud de una cadena dada.
int largo (char s[]){
    int contador = 0;
    while(s[contador] != '\0'){
        contador ++;
    }
    return contador;
}
// b) Convertir una cadena de dígitos en su equivalente numérico.
long cadenaANumero(char c[]){
    int sumador = 0, largoCadena = largo(c);
    for(int i = 0;i<largoCadena; i++ ){
        sumador += (c[i]-48) * potencia(10,largoCadena-i-2); //el 48 es una manera de traducir de ASCII a numero, se ve horrible pero funciona ¯\_(ツ)_/¯
    }
    return sumador;
}
// c) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula.
char* upperCase ( char s[]){
    for(unsigned char* c = s ;*c!=0;c++ ){
        if(*c >= 97 && *c < 122){
            *c -= 32;
        }
        if(*c >=224 & *c < 255){ //no parece funcionar con el ascii extendido, creo que es un tema de la consola.
            *c -= 36;
        }
    }
    return s;
}
// d) Eliminar de una cadena dada todas las ocurrencias de un carácter dado.
// e) Concatenar al final de la primer cadena dada una segunda cadena dada .
// f) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.
