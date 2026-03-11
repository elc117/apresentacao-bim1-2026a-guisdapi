#include <stdio.h>

int func2(int x) {
  printf("%d ", x);   // --> efeito colateral
  return x + 4;     
}

int main() {
    int y = func2(2);
    return 0;
}