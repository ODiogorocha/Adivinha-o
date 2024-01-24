Jogo de Adivinhação em C

Este é um simples jogo de adivinhação em C, onde o jogador tenta adivinhar um número gerado aleatoriamente pelo computador. O código foi desenvolvido como parte de um estudo da linguagem C. Abaixo estão algumas informações e instruções sobre como utilizar e compreender o código.

Instruções de Uso

Compilação:
Certifique-se de ter um compilador C instalado no seu sistema.
Compile o código utilizando o seguinte comando no terminal:
bash
Copy code
gcc adivinhacao.c -o adivinhacao
Execução:
Após a compilação, execute o programa gerado:
bash
Copy code
./adivinhacao
Níveis de Dificuldade:
Escolha o nível de dificuldade:
(1) Fácil: 20 tentativas.
(2) Médio: 15 tentativas.
(3) Difícil: 6 tentativas.
Limite Máximo:
Escolha o limite máximo para o número gerado.
Chutes:
Faça seus chutes, e o programa fornecerá feedback sobre a relação do seu chute com o número secreto.
Resultado:
O jogo terminará indicando se você acertou ou perdeu, juntamente com a pontuação obtida.
Observações

O código inclui uma apresentação visual simples no início do jogo.
O jogador recebe pontos com base na proximidade do chute em relação ao número secreto.
Chutes inválidos (números negativos) são tratados, e o jogador não é penalizado.
O código utiliza a função rand() para gerar o número secreto, sendo necessário a inclusão da biblioteca stdlib.h.
Durante o jogo, a cada tentativa, são exibidos o número da tentativa e o número total de tentativas disponíveis.
Esperamos que aproveite este jogo de adivinhação em C e que ele contribua para o seu aprendizado na linguagem!
