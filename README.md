# Jogo de Adivinhação em C

Este é um jogo de adivinhação simples desenvolvido em C, criado como parte de um estudo da linguagem. Abaixo estão as informações e instruções para compreender e utilizar o código.

## Instruções de Uso

### Compilação:

Certifique-se de ter um compilador C instalado no seu sistema.

```bash
gcc adivinhacao.c -o adivinhacao
```

### Execução:

Após a compilação, execute o programa gerado.

```bash
./adivinhacao
```

### Níveis de Dificuldade:

Escolha o nível de dificuldade:
- (1) Fácil: 20 tentativas.
- (2) Médio: 15 tentativas.
- (3) Difícil: 6 tentativas.

### Limite Máximo:

Escolha o limite máximo para o número gerado.

### Chutes:

Faça seus chutes, e o programa fornecerá feedback sobre a relação do seu chute com o número secreto.

### Resultado:

O jogo terminará indicando se você acertou ou perdeu, juntamente com a pontuação obtida.

## Observações

- O código inclui uma apresentação visual simples no início do jogo.
- Pontos são atribuídos com base na proximidade do chute em relação ao número secreto.
- Chutes inválidos (números negativos) são tratados sem penalização.
- O código utiliza a função `rand()` para gerar o número secreto, requerendo a inclusão da biblioteca `stdlib.h`.
- Durante o jogo, a cada tentativa, são exibidos o número da tentativa e o número total de tentativas disponíveis.

Esperamos que você aproveite este jogo de adivinhação em C e que ele contribua para o seu aprendizado na linguagem!
