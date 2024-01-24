#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    printf("\n\n");
    printf("         p /_\\ p                             \n");
    printf("       /_\\_|_|_/\\                           \n");
    printf("    n_n | ||. .|| | n_n        Bem-Vindo ao   \n");
    printf("    |_|_|nnnn nnnn|_|_|    Jogo de Adivinhação\n");
    printf("   |\"\"   |  |_|  |\"  \" |                  \n");
    printf("   |_____| ' _ ' |_____|                      \n");
    printf("         \\__|_|_/\n");
    printf("\n\n");
    


    int chute;
    int acertou;
    int limite;
    int menor;
    int numerosecreto;
    int totaldetentativas;
    double pontos = 100; 
    double pontos_perdidos;
    int nivel;

    printf("Qual o nivel de dificuldade ?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n");
    printf("Escolha\n");
    scanf("%d", &nivel);

    printf("Escolha o limite maximo para o numero ser gerado\n");
    scanf("%d", &limite);

    srand(time(0));
    numerosecreto = rand() % limite;

    switch (nivel){
        case 1:
            totaldetentativas = 20;
            break;
        case 2:
            totaldetentativas = 15;
            break;
        default:
            totaldetentativas = 6;
            break;
    }
    
    for(int i = 1; i < totaldetentativas; i++) {
        printf("Qual o seu chute ?\n");
        scanf("%d", &chute);
        printf("Tentativa %d de %d \n", i, totaldetentativas); 

        pontos_perdidos =abs(chute - numerosecreto) / 2.0;

        pontos = pontos - pontos_perdidos;

        acertou = chute == numerosecreto;
        menor = chute < numerosecreto;

        if (chute < 0){
            printf("Você não pode chutar numeros negativos\n");
            i--;
            continue;
        }else if(acertou) {
           break; 
        }else if (menor){
            printf("Seu chute foi menor que o numero secreto!\n"); 
        }else{
            printf("Seu numero foi maior que o numero secreto!\n");
        }
    }

    if (acertou){
        printf ("Parabéns! Você acertou! \n");
    }else{
        printf("Você perdeu! Tente novamente!\n");
    }

    printf("Você fez %.2f pontos\n",pontos);
    printf("Obrigado por jogar\n"); 
}


