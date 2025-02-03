int is_sorted(int n, int vet[]) {
    for (int i = 0; i < n - 1; i++) {
        if (vet[i] > vet[i + 1]) {
            return 0;
        }
    }
    return 1; 
}
