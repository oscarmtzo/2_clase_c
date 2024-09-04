#include <stdio.h>
#include <stdlib.h>

/**
 * biblioteca que convierta
 * iostream.h
 * 
 * iteca - integer to  
 */

void bin(int x, int base) {
    int x1 = x, r;
    while(x1 != 0 ){
        r = x1 % 2;
        x1--;
        printf("%d,%d", x1, r);
    }
}

void change(int x, int base) {
    int r;
    if (x != 0) {
        r = x % base;
        bin(x / base, base);
    }
}

int main(){
    // printf();
    printf("\n\n\n");

    int x, base;
    scanf("%d", &x);

    bin(x, base);

    printf("\n\n\n");
    system("pause");
    return 0;
}

/**
 * @function scan("%d", &x); permite la entrada de texto desde la terminal
 */


/**
 * Operdadoes Aritmeticos:
 * - Suma +
 * - Resta -
 * - Multiplicacion *
 * - Division
 * - Incremento ++
 * - Decremento --
 * - Residal
 */

/**
 * Operadores Logicos
 * - OR |
 * - AND &
 * - XOR ^
 * - Negacion 
 */

/**
 *  Operadores de asignacion
 * - Igual a =
 * - Mas Igual a  +=
 * - Menos Igual a -=
 * - Multiplicando Igual a *=
 * - Diviviendo Igual a /=
 * - Residual Igual a %=
 * - OR Igual a |=
 * - AND &=
 * - ^=
 * - <<=
 * - >>=
 *  
 */

/**
 * Desplazamiento de Bits
 * - Desplazamiento de bits Izquierda <<
 * - Desplazamiento de bits Derecha >>
 * 
 */

/*
10: 1010
    0001
2   0010
    ----

*/