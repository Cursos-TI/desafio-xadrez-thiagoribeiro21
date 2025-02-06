#include <stdio.h>

int main(){

    // Declaração das variáveis e o valor das que as estruturas de repetição não tem inicialização
    int cavalo1, cavalo2, cavalo3 = 1, cavalo4 = 1;
    int bispo = 1;
    int torre = 1;
    int rainha = 1;

    // Imprimir a movimentação do bispo.
    printf("Movimentação do bispo:\n");
    // Estrutura de repetição para fazer o movimento das peças de forma repetida ate cumprir a condição.
    while(bispo <= 5){
        
        printf("Direita, Cima\n");
        
        bispo++;
    }
    // Imprimir a movimentação da torre.
    printf("\nMovimentação da Torre:\n");
    // Estrutura de repetição para fazer o movimento das peças de forma repetida ate cumprir a condição.
    while(torre <=5){
        
        printf("Direita\n");
        torre++;
    }
    // Imprimir a movimentação da rainha
    printf("\nMovimentação da rainha:\n");
    // Estrutura de repetição para fazer o movimento das peças de forma repetida ate cumprir a condição.
    while(rainha <= 8){

        printf("Esquerda\n");
        rainha++;
    }

    // Imprimir a primeira movimentação do cavalo
    printf("\nPrimeira movimentação do cavalo:\n");

    // Primeira estrutura de repetição aninhada da primeira movimentação do cavalo
    for( cavalo1 = 1; cavalo1 <= 1; cavalo1++){
        for( cavalo2 = 1; cavalo2 <= 3; cavalo2++){
            printf("Cima\n");
        }
        printf("Direita\n");

    }
    
    // Imprimir a segunda movimentação do cavalo
    printf("\nSegunda movimentação do cavalo\n");

    // Segunda estrutura de repetição aninhada da segunda movimentação do cavalo
    while(cavalo3 <= 1){
        printf("Direita\n");
        cavalo3++;
        while(cavalo4 <= 3){
            printf("Cima\n");
            cavalo4++;
        }
    }
    return 0;
}