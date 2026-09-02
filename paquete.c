#include <stdio.h>

int leerInvertido(int n){
    if ((n/10) == 0){ // Si la division por el numero es de un digito imprimira solo 0
        printf("%d", n);
        return n;
    } else {
        printf("%d", n%10); // En el ejemplo 1234 mod 10 = 4, si volvieramos a ejecutar en n/10 % 10 seria 3 y asi sucsivamente.
        leerInvertido(n/10);
        return n;
    }
}

int impresionRecursiva(int n) {
    if (n < 1) {
        return 1;
    } else {
        impresionRecursiva(n-1);
        printf("Numero: %d\n", n);
        return 1;
    }
}

int obtenerCaracter(char palabra[14], char c) {
    for (int i = 0; i <= 13; ++i){
        if(palabra[i] == c) {
            printf("Letra encontrada en el indice: %d\n", i);
            return 1;
        } else {
            if (i == 13)
                printf("No se encontro la letra\n");
        }
    }
    return 0;
}



int main() {
    int inv = leerInvertido(1234);
    printf("\n");
    int imp = impresionRecursiva(10);
    int obt = obtenerCaracter("EXTRAORDINARIO", 'P'); 
    return 0;
}
