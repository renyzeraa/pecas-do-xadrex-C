#include <stdio.h>

int main()
{
  // Movimento da Torre
  printf("Movimento da Torre:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Direita\n");
  }
  printf("\n");

  // Movimento do Bispo
  printf("Movimento do Bispo:\n");
  int j = 0;
  while (j < 5)
  {
    printf("Cima, Direita\n");
    j++;
  }
  printf("\n");

  // Movimento da Rainha
  printf("Movimento da Rainha:\n");
  int k = 0;
  do
  {
    printf("Esquerda\n");
    k++;
  } while (k < 8);
  printf("\n");

  // Movimento do Cavalo
  printf("Movimento do Cavalo:\n\n");

  // Definição das constantes de movimento
  int movimentos_baixo = 2;
  int movimentos_esquerda = 1;

  // Loop aninhado para mover o Cavalo
  for (int i = 0; i < movimentos_baixo; i++)
  {
    printf("Baixo\n");
    int l = 0;
    while (l < movimentos_esquerda && i == movimentos_baixo - 1)
    {
      printf("Esquerda\n");
      l++;
    }
  }

  return 0;
}
