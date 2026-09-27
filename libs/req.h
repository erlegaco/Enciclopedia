#include <stdio.h>

int imprimirReves(int n) {
    if (n == 0) {
        return n;
    }
    printf("%d ", n%10);
    imprimirReves(n/10);
    return n;
}


int imprimirSucesion(int n) {
    if (n == 0){
        return n;
    }
    imprimirSucesion(n-1);
    printf("%d\n", n);
    return n;
}


int imprimirSumas(int n) {
    if (n < 10) {
        return n;
    }
    else 
        return (n % 10) + imprimirSumas(n /10);
}
