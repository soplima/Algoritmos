//Escreva um programa que imprime um triângulo invertido de caracteres '[]', alinhado à direita, com
//o número de linhas informado. Observe o exemplo.
//Linhas: 5
//[]
//[][]
//[][][]
//[][][][]
//[][][][][]

#include <stdio.h>

int main(){

    int linha;

    printf("Insira um numero de linhas: ");
    scanf("%d", &linha);

    for(int i = 1; i <= linha; i++){
        for(int j = 1; j<= -i; j++){
            printf("[]");
        }
        printf("\n"); 
    }

    return 0;
}