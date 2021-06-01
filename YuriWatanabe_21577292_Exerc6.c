#include <stdio.h>

int main() {

  int valor;
  int cedulaAtual = 10;
  int qntdCedula;

  printf("Digite o valor do produto: ");
  scanf("%d", &valor);

  while(cedulaAtual >= 1) {

    qntdCedula = (valor / cedulaAtual);
    valor %= cedulaAtual;

    printf("%d: %d\n", cedulaAtual, qntdCedula);
    cedulaAtual /= 2;

  }

  return 0;

}