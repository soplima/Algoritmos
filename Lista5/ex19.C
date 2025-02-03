void vector_intersection(int n1, int v1[n1], int n2, int v2[n2], int v3[]) {
    for (int i = 0; i < n1; i++) {
        v3[i] = 0;
    }
    int index = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (v1[i] == v2[j]) {
                v3[index++] = v1[i];
                break;
            }
        }
    }
}
