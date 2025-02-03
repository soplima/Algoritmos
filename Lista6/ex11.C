int find_substring(const char str[], const char sub[]) {
    int len_str = strlen(str);
    int len_sub = strlen(sub);
    
    if (len_sub > len_str) {
        return 0;
    }

    for (int i = 0; i <= len_str - len_sub; i++) {
        int j;
        for (j = 0; j < len_sub; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (j == len_sub) {
            return 1;
        }
    }
    return 0;
}
