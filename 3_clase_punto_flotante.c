#include <stdlib.h>
#include <stdio.h>

/**
 * @punto_flotante      bits
 * float                32
 * double               64 
 * long double          80
 */

void binEntero(int numero_de_32_bits) {
    int r; 
    if (numero_de_32_bits != 0) {
        r = numero_de_32_bits % 2;
        binEntero(numero_de_32_bits / 2);
        printf("%d", r);
    }
}
/**
 * @binEntero es una funcion que retorna numero flotante a binarios de 32 bits
 */

void binFlotante(float numero_de_32_bits_flotante, int digitos) {
    float d;
    int i;
    i = numero_de_32_bits_flotante;
    binEntero(i);
    printf(".");
    d = numero_de_32_bits_flotante - i;
    
}
/**
 * @binFlotante es una funcion que retorna numero flotante a binarios de 32 bits
 */



int main() {
    float a;
    double b;
    long double c;

    a = 1.2;
    b = 3e-2;
    c = 3.1416L;
    /**
     * @c en este caso se especifica L al final del valor del long double para que tome 80 bots de espacio
     * 
     */
    
    printf("a = %.2f", a); //a = 1.20
    /**
     * @.2f permite limitar la cantidad de digitos despues del punto decimal a dos, se pueden usar mas digitos para ampliar la cantidad de decimales a mostrar
     */
    printf("\nb = %f", b);//b = 0.030000
    
    printf("\nb = %.41f", b); //b = 0.02999999999999999888977697537484345957637
    /*
     * @lf se usa para mostrar el double
    */
    printf("\n\n\n");

    float numero_por_diez_elevado_a_la_3 = 2e3; // 2x10^3
    printf("numero al cubo = %.0f", numero_por_diez_elevado_a_la_3);



    system("pause"); 


    return 0;
}