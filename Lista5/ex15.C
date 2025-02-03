void max_sum_slice2(int n, int v[]) {
    int max_sum = v[0]; 
    int current_sum = v[0]; 
    int start_index = 0; 
    int end_index = 0; 
    int temp_start_index = 0; 

    for (int i = 1; i < n; i++) {
        if (current_sum + v[i] > v[i]) {
            current_sum += v[i]; 
        } else {
            current_sum = v[i]; 
            temp_start_index = i; 
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start_index = temp_start_index; 
            end_index = i; 
        }
    }

    printf("Segmento de soma maxima: ");
    for (int i = start_index; i <= end_index; i++) {
        printf("%d ", v[i]);
    }
    printf("\nSoma: %d\n", max_sum);
}