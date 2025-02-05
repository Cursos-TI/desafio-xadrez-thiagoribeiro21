#include <stdio.h>

int main(){
    // Declaração das variáveis
    int bispo = 1;
    int torre = 1;
    int rainha = 1;

    // Imprimir a movimentação da peça.
    printf("Movimentação do bispo:\n");
    // Estrutura de repetição para fazer o movimento das peças de forma repetida ate cumprir a condição.
    while(bispo <= 5){
        
        printf("\nDireita, Cima\n");
        
        bispo++;
    }
    // Imprimir a movimentação da peça.
    printf("\nMovimentação da Torre:\n");
    // Estrutura de repetição para fazer o movimento das peças de forma repetida ate cumprir a condição.
    while(torre <=5){
        
        printf("\nDireita\n");
        torre++;
    }
    // Imprimir a movimentação da peça
    printf("\nMovimentação da rainha:\n");
    // Estrutura de repetição para fazer o movimento das peças de forma repetida ate cumprir a condição.
    while(rainha <= 8){

        printf("\nEsquerda\n");
        rainha++;
    }

 return 0;



}