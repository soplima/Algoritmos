int count_words_plus(const char str[]) {
    int word_count = 0;
    bool in_word = false;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_whitespace(str[i]) && !in_word) {
            word_count++;
            in_word = true;
        }
        else if (is_whitespace(str[i]) && in_word) {
            in_word = false;
        }
    }
    return word_count;
}

