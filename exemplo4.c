#include <stdio.h>

int aplicarDesconto(int saldo, int desconto) {
    return saldo - desconto; // não faz interferências externas: sem efeito colateral
}

int main() {
    int saldo = 100;
    int novoSaldo = aplicarDesconto(saldo, 30);
    printf("Saldo: %d\n", novoSaldo); // 70 — origem clara e rastreável
    return 0;
}