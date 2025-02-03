void reverse(int n, int vet[]) {
    if (n < 2) {
        printf("Vetor muito curto para inverter.\n");
        return;
    }

    for (int i = 0; i < n / 2; i++) {
        int temp = vet[i];
        vet[i] = vet[n - i - 1];
        vet[n - i - 1] = temp;
    }
}
