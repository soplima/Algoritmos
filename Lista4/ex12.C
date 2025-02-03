void cut_string(char str[], const char word[]) {
    char *ptr = strstr(str, word); 

    if (ptr == NULL) {
        return;
    }

    *ptr = '\0';
}
