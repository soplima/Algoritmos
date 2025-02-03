//Escreva um programa que imprime uma caixa de caracteres '[]' com as dimensões informadas. O
//ler as dimensões da caixa (largura e altura). Observe o exemplo.
//Altura x Largura: 4 5
//[][][][][]
//[][][][][]
//[][][][][]
//[][][][][]

#include <stdio.h>

int main(){

    int largura, altura;

    printf("Insira a largura e a altura: ");
    scanf("%d %d", &largura, &altura);

    for(int i = 0; i < largura; i ++){
        for(int i = 0; i < altura; i ++){
            printf("[]");

        }printf("\n");
    }

    return 0;
}