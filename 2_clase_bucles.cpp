#include <stdlib.h>
#include <stdio.h>

void bin() {
    for (int i = 0; i < 10; i++)
    {
        printf("%d.- hola mundo\n", i);
    }
    
}

int main () {
    bin();


    return 0;
}

/*
* MCD(a,b)
* Maximo comun divisor
* 100, 60
* 100 = 2 *2 * 5 * 5
* 60 = 2 * 2 * 3 * 5
* Algoritmo de euclides:
a = q0 * b + r0
b = q1 * r0 + r1
r0 = q2 * r1 + r2
    .
    .
    .
    .
r(n-2) = q1 * r(n-1) + rn
*/