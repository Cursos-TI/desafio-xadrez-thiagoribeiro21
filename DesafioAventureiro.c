#include <stdio.h>

int main(){

    // Declaração das variáveis e o valor das que as estruturas de repetição não tem inicialização
    int cavalo1, cavalo2, cavalo3 = 1, cavalo4 = 1;

    // Imprimir a primeira movimentação
    printf("Primeira movimentação do cavalo:\n");

    // Primeira estrutura de repetição aninhada da primeira movimentação do cavalo
    for( cavalo1 = 1; cavalo1 <= 1; cavalo1++){
        for( cavalo2 = 1; cavalo2 <= 3; cavalo2++){
            printf("Cima\n");
        }
        printf("Direita\n");

    }
    
    // Imprimir a segunda movimentação
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