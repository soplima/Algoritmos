//Escreva uma função que recebe um vetor vet de tamanho n contendo números inteiros positivos e
//negativos. A função deve inverter o sinal dos números negativos, passando-os para positivo.
//void set_positive(int n, int vet[])
//Entrada:{1, -5, 67, -45, -1, -1, 0, 48} → Saída:{1, 5, 67, 45, 1, 1, 0, 48}

#include <stdio.h>
    
void set_positive(int n, int vet[]){
    for(int i=0; i<n; i++){
        if(vet[i] < 0){
        vet[i] = - vet[i];
        }
    }
}

int main(){

    int tamanho;

    printf("Insira o tamanho do vetor");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Insira valores para o vetor: ");
    for(int i=0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    set_positive(tamanho, vetor);
        for(int i = 0; i < tamanho; i++){
            printf("%d", vetor[i]);
        }
    printf("\n");
    
    return 0;
}