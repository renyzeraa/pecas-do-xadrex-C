#include <stdio.h>

// Função recursiva para mover a Torre de forma eficiente
void moverTorre(int movimentos)
{
  if (movimentos <= 0)
    return;
  printf("Direita\n");
  moverTorre(movimentos - 1);
}

// Função recursiva para mover o Bispo de forma eficiente
void moverBispo(int movimentos)
{
  if (movimentos <= 0)
    return;

  for (int i = 0; i < movimentos; i++)
  {
    printf("Cima, Direita\n");
  }

  moverBispo(movimentos - 1);
}

// Função recursiva para mover a Rainha de forma eficiente
void moverRainha(int movimentos)
{
  if (movimentos <= 0)
    return;
  printf("Esquerda\n");
  moverRainha(movimentos - 1);
}

int main()
{
  // Movimento da Torre
  printf("Movimento da Torre:\n");
  moverTorre(5);
  printf("\n");

  // Movimento do Bispo
  printf("Movimento do Bispo:\n");
  moverBispo(5);
  printf("\n");

  // Movimento da Rainha
  printf("Movimento da Rainha:\n");
  moverRainha(8);
  printf("\n");

  // Movimento do Cavalo
  printf("Movimento do Cavalo:\n\n");

  // Definição das constantes de movimento
  const int movimentos_cima = 2;
  const int movimentos_direita = 1;

  // Loop aninhado para mover o Cavalo
  for (int i = 0; i < movimentos_cima; i++)
  {
    printf("Cima\n");

    // Movimento para a direita apenas na última iteração do movimento para cima
    if (i == movimentos_cima - 1)
    {
      for (int j = 0; j < movimentos_direita; j++)
      {
        printf("Direita\n");
      }
    }
  }

  return 0;
}
