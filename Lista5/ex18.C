void vector_union(int n1, int v1[n1], int n2, int v2[n2], int v3[]) {
    for (int i = 0; i < n1 + n2; i++) {
        v3[i] = 0;
    }

    for (int i = 0; i < n1; i++) {
        v3[i] = v1[i];
    }

    int index = n1;
    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < n1; j++) {
            if (v2[i] == v1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            v3[index++] = v2[i];
        }
    }
}