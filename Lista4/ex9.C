void string_count(const char str[]) {
    int count[26] = {0}; 
    int total = 0; 
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (isalpha(str[i])) { 
            char lowercase = tolower(str[i]); 
            count[lowercase - 'a']++; 
            total++; 
        }
    }

    printf("Saída:\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            char letter = 'a' + i;
            printf("%c x%d (%.0f%%)\n", letter, count[i], (count[i] / (float)total) * 100);
        }
    }
}
