#include <stdio.h>

int func1(int x) { 
  return x + 4; // sem efeitos colaterais
}

int main() {
    int y = func1(10);
    return 0;
}