#include <stdio.h>

// Recursividade para o loop da torre
void recursiveloop1(int torre1){
    // Imprimir a movimentação da torre
      printf("\nMovimentação da Torre:\n");
    
    // Estrutura de repetição para fazer o movimento das peças de forma repetida ate cumprir a condição.
     while(torre1 <=5){
        
        printf("Direita\n");
        torre1++;
        
    }
}

// Recursividade para o loop da rainha
void recursiveloop2(int rainha1){
    // Imprimir a movimentação da 
     printf("\nMovimentação da rainha:\n");
     // Estrutura de repetição para fazer o movimento das peças de forma repetida ate cumprir a condição.
     while(rainha1 <= 8){

        printf("Esquerda\n");
        rainha1++;
    }

  

}
int main (){
    // Declaração das variáveis do bispo
    int bispo1, bispo2;
    // Imprimir a movimentação do bispo
    printf("\nMovimentação do bispo:\n");
     // Estrutura de repetição aninhada para fazer o movimento das peças de forma repetida ate cumprir a condição.
    for(bispo1 = 1; bispo1 <= 5; bispo1++){
        for(bispo2 = 1; bispo2 <= 1; bispo2++){
            printf("Direita");
        }
        printf(",Cima\n");
    }

    // Declaração das variáveis da torre
    int torre2;
    // Executar movimento com a recursivade para dar o loop da torre
    recursiveloop1(torre2);
    // Declaração das variáveis da rainha
    int rainha2;
    // Executar movimento com a recursivade para dar o loop da rainha
    recursiveloop2(rainha2);

    // Imprimir a movimentação do cavalo
    printf("\nMovimentação do cavalo:\n");
    // Realizar loop com multiplas variáveis para o cavalo
    for(int cavalo1 = 1, cavalo2 = 1; cavalo1 <= 1 && cavalo2 <= 3; cavalo1++,cavalo2++){
        printf("Cima\nCima\nCima\nDireita\n");

     }
}