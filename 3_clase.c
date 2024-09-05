#include <stdio.h>
#include <stdlib.h>
// #include "2_clase.cpp"
/**
 * @libraries 
 * - podemos importar codigo o librerias para modularizar nuestro codigo y mejorar el mantenimiento o legibilidad del codigo
 */

#ifdef INTEGERS
#define INTEGERS
#endif
/**
 * #ifdef INTEGERS
 * #define INTEGERS
 * #endif
 *  - protegen a nuestro programa en caso de que no exista la funcion, endif puede ir mas abajo del codigo y protegera hasta esa parte 
 */

int main(){
    int caso1 = 0;
    switch(caso1){
        case 0:  
            printf("\nPrimer caso\n\n"); 
            break;
    }
    return 0;
}