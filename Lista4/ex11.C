int find_substring(const char str[], const char sub[]) {
    int str_length = strlen(str);
    int sub_length = strlen(sub);

    if (sub_length > str_length) {
        return 0;
    }

    for (int i = 0; i <= str_length - sub_length; i++) {
        int j;

        for (j = 0; j < sub_length; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }

        if (j == sub_length) {
            return 1; 
        }
    }

    return 0; 
}
