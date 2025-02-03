void count_elements(int n, int vet[]) {
    int max_element = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > max_element) {
            max_element = vet[i];
        }
    }

    int count[max_element + 1];
    for (int i = 0; i <= max_element; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[vet[i]]++;
    }

    printf("Ocorrencias dos numeros no vetor:\n");
    for (int i = 0; i <= max_element; i++) {
        if (count[i] > 0) {
            printf("%d ocorre %d vez(es)\n", i, count[i]);
        }
    }
}
