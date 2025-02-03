//Escreva uma função que recebe um vetor vet de tamanho n e devolve o maior valor contido no
//mesmo.
//int find_max(int n, int vet[])

int find_max(int n, int vet[]) {
    if (n <= 0) {
        printf("Vetor vazio ou tamanho inválido.\n");
        return -1; 
    }

    int max = vet[0]; 

    for (int i = 1; i < n; i++) {
        if (vet[i] > max) {
            max = vet[i]; 
        }
    }

    return max;
}
