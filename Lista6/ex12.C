void cut_string(char str[], const char word[]) {
    char *pos = strstr(str, word);

    if (pos == NULL) {
        return;
    }

    *pos = '\0';
}

