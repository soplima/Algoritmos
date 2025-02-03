//Escreva um programa que imprime um triângulo centralizado de caracteres '[]'. Observe o
//exemplo.
//Linhas: 6
//[]
//[][]
//[][][]
//[][][][]
//[][][][][]
//[][][][][][]

#include <stdio.h>

int main() {
    int linhas;

    printf("Linhas: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++) {
        int espacos = linhas - i;

        for (int j = 1; j <= espacos; j++) {
            printf("  "); 
        }

        for (int k = 1; k <= i; k++) {
            printf("[]");
        }

        printf("\n"); 
    }

    return 0;
}
