#include <stdio.h>

int main()
{
  printf("Movimento da Torre:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Direita\n");
  }
  printf("\n");

  printf("Movimento do Bispo:\n");
  int j = 0;
  while (j < 5)
  {
    printf("Cima, Direita\n");
    j++;
  }
  printf("\n");

  printf("Movimento da Rainha:\n");
  int k = 0;
  do
  {
    printf("Esquerda\n");
    k++;
  } while (k < 8);

  return 0;
}
