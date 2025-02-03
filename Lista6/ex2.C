void print_string_reversed(char str[]) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////

void print_string_reversed(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}
