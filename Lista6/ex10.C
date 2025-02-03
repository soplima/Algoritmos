void string_trim(char str[]) {
    int start = 0;
    while (isspace(str[start])) {
        start++;
    }

    int end = strlen(str) - 1;
    while (end >= 0 && isspace(str[end])) {
        end--;
    }

    int i, j;
    for (i = start, j = 0; i <= end; i++, j++) {
        str[j] = str[i];
    }
    str[j] = '\0'; 
}
