//Escreva uma função que recebe um vetor vet de tamanho n e imprime apenas os valores pares.
//void print_even(int n, int vet[])

#include <stdio.h>

    void print_even(int n, int vet[]){
        printf("Valores pares no vetor: ");
        for(int i = 0; i <n; i++){
        if(vet[i] % 2 == 0){
        printf("%d", vet[i]);
        }
    }printf("\n");
}

int main(){

    int tamanho;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("Digite os elementos do vetor: ");
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    print_even(tamanho, vetor);

    return 0;
}