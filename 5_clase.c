#include <stdlib.h>
#include <stdio.h>

void getChar() {
    char cadenaCaracteres [100];
    scanf("%c", cadenaCaracteres);
    int i = 0;
    do {
        printf("%c", cadenaCaracteres[i]);
        i++;
    } while(i != 0);
    // printf("%c", cadenaCaracteres[0]);
}

int main(){
    getChar();
    return 0;
}