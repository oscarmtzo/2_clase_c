#include <stdlib.h>
#include <stdio.h>
//#include <string.h>

void upper(const char str[], char str1[]) {
    
    int i;
    for( i = 0; str[i] != 0; i++){
        if(str[i] > 96 && str[i] < 123){
            str1[i] = str[i] - 32; // empiezan en 97 las mayuscukas, por lo que se le resta 32 para obtener los caracteres en mayusculas
            printf("%c", str1[i]);
        }// es un carcater minisculo en ASCII
        else {
            str1[i] = str[i];
            printf("%c", str1[i]);
        }
    }
    
}

void _10tobase(int x, int base, char str[]){
    int i, r, x1 = x;
    char c;
    for(i = 0; x1 != 0; i++) {
        str[i] = x1 % base;
        r = x1 % base;
        r += (r < 10) ? 48 : 87;
        str[i] = r;
        x1 /= base;
    }
}

int Strlen (const char str[]) {
    int len;
    for (len = 0; len < str[len] !=0 ; len++);
    return len;
}

void alReves (const char str[], char str1[]){
    int i = Strlen(str);
    for( i; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    /**
     * @cadenas de caracteres: 
     * - enteros de 8 bits
     * - nombre de la variable
     * - [n] donde n es el numero de diferentes caracteres
     * [100] cadenas de hasta 99 elementos ya que el ultimo indica
     */

    char str[100];
    char str1[] = "hola mundo"; // arreglos estaticos
    printf("%s", str1);
    /**
     * - %s para imprimir la cadena completa
     * - 
     */
    int i;
    /**
     * @i nos servira para recorrer cada uno de los elementos de la cadena de caracteres
     */
    for(i = 0; str1[i] != 0; i++) {
        printf("\n%d.- %c",i, str1[i]);
        /**
         * - @"%c" se ocupara para imprimir un solo caracter de una cadena 
         * - @str1[i] es es la pocision en el que se encuentra la cadena
         */
    }
    int longitudCaracter = sizeof str1;
    //int longitudCaracter2 = strlen(str1);
    printf("\nlongitud de caracteres de st1: %d\n", longitudCaracter);
    //printf("\nlongitud de caracteres de st1: %d\n", longitudCaracter2);

    for (int i = 0; i < (longitudCaracter -1); i++)
    {
        printf("\n%d.- %c", i, str1[i]);
    }
    
    printf("\n");
    
    upper(str1, str); // HOLA MUNDO

    printf("\n");
    
    Strlen(str1); 
    printf("numero de caracteres de la ´str1 = %s´: %d",str1, Strlen(str1));
    printf("\n");

    int x;
    char str2[34];


    printf("\n");
    
    alReves(str1, str);

    printf("\n");
    system("pause");
    return 0;
}