#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define TAM 10 //tamanho do tabuleiro (10x10)
#define NAVIO 3 //valor que representa parto do navio
#define TAM_NAVIO 3 //tamanho fixo de cada navio

int main() {
    
    int tabuleiro [TAM][TAM]; //matriz do tabuleiro
    int i, j;
    
    //coordenadas iniciais dos navios
    //navio horizontal começa em (linha = 2, coluna = 4)
    int linhaH = 2, colunaH = 4;

    //navio vertical começa em (linha = 6, coluna = 1)
    int linhaV = 6, colunaV = 1;

    //inicializa o tabuleiro com água(0)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++){
            tabuleiro[i][j] = 0;
        }
    }
    
    //posiciona o navio horizontal
    for (j = 0; j < TAM_NAVIO; j++) {
        //verifica se está dentro dos limites
        if (colunaH + j < TAM){
            //marca na matriz a posição do navio
            tabuleiro[linhaH][colunaH + j] = NAVIO;
        }
    }
    
    //posiciona o navio vertical
    for (i = 0; i < TAM_NAVIO; i++){
        //verifica se está dentro dos limites e não sobrepõe outro navio
        if (linhaV + i < TAM && tabuleiro[linhaV + i][colunaV] ==0){
            tabuleiro[linhaV + i][colunaV] = NAVIO;
        }
    }
    
    //exibe o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}
