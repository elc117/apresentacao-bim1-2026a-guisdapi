#include <stdio.h>

int saldo = 100;

void aplicarDesconto(int desconto) {
    saldo = saldo - desconto; // modifica variável global: efeito colateral
}

int main() {
    aplicarDesconto(30);
    printf("Saldo: %d\n", saldo); // 70 — mas quem mudou o saldo?
    return 0;
}