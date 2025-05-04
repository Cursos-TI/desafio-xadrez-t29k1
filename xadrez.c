#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

 // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

// Var
int Cavalo;


//Inicia Var
   Cavalo  = 0;

void MoverTorre(int Casas){
    if (Casas > 0){
     printf("Torre Direita\n");
     MoverTorre(Casas - 1);   
    }
}

void MoverBispo(int Casas){
    if (Casas > 0){
        printf("Bispo Direita  \n");
        printf("Bispo Cima   \n");
        MoverBispo(Casas - 1);   
    }
}

void MoverRainha(int Casas){
    if (Casas > 0){
        printf("Rainha Esquerda \n");
        MoverRainha(Casas - 1);   
    }
}

void MoverCavalo(int Casas){
  while (Cavalo == 0){
    for (int i = 1; i <= 2; i++){
        printf("Cavalo Cima \n");
    }
    printf("Cavalo Direita \n");
    Cavalo++; 
  }  
}

int main() {
//Cod  
   MoverTorre(5);
   
   MoverBispo(5);

   MoverRainha(8);

   MoverCavalo(1);
   
  
    return 0;
}
