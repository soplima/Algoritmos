void min_bills(int value, int n, int bills[]) {
    int count[n]; 
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    printf("Quantidade minima de cedulas para R$%d,00:\n", value);

    for (int i = n - 1; i >= 0; i--) {
        while (value >= bills[i]) { 
            value -= bills[i]; 
            count[i]++; 
        }
        if (count[i] > 0) {
            printf("%d x R$%d,00\n", count[i], bills[i]);
        }
    }
}
