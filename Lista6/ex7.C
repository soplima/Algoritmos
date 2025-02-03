void capitalize_word(char word[]) {
    word[0] = toupper(word[0]);
    for (int i = 1; word[i] != '\0'; i++) {
        word[i] = tolower(word[i]);
    }
}
