// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  int a, b, resultado;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor da aresta: ");
  scanf("%i", &a);

  resultado = a * 4;

  // Exibe o resultado final
  printf("A area do quadrado e de %i", resultado);

  return 0;
}