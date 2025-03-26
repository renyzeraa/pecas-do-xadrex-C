# Simulação de Movimentos de Peças de Xadrez em C

## Descrição

Este projeto implementa a movimentação de três peças do xadrez (Torre, Bispo e Rainha) usando estruturas de repetição em linguagem C. Cada peça utiliza um tipo diferente de loop para demonstrar seus movimentos no tabuleiro.

## Funcionalidades

- **Torre**: Move-se 5 casas para a direita utilizando um loop `for`.
- **Bispo**: Move-se 5 casas na diagonal (cima e direita) utilizando um loop `while`.
- **Rainha**: Move-se 8 casas para a esquerda utilizando um loop `do-while`.

## Tecnologias Utilizadas

- Linguagem C
- Compilador GCC (ou qualquer outro compilador C compatível)

## Como Executar o Código

1. Certifique-se de ter um compilador C instalado (como GCC).
2. Baixe o arquivo `movimento_xadrez.c`.
3. Compile o código usando o terminal:
   ```sh
   gcc movimento_xadrez.c -o movimento_xadrez
   ```
4. Execute o programa:
   ```sh
   ./movimento_xadrez
   ```

## Saída Esperada

O programa imprimirá os movimentos de cada peça no console:

```
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
```

## Autor

Projeto desenvolvido como um desafio de programação em C.

## Licença

Este projeto está sob a licença MIT.
