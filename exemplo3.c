#include <stdio.h>

int saldo = 100;

void aplicarDesconto(int desconto) {
    saldo = saldo - desconto; // modifica variável global: efeito colateral
}

int main() {
    aplicarDesconto(30);
    printf("Saldo: %d\n", saldo);
    return 0;
}