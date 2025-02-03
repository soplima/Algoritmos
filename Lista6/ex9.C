void string_count(const char str[]) {
    int count[26] = {0};
    int total_letters = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); 
        if (c >= 'a' && c <= 'z') { 
            count[c - 'a']++; 
            total_letters++; 
        }
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c x%d (%.0f%%)\n", 'A' + i, count[i], (float)count[i] / total_letters * 100);
        }
    }
}

