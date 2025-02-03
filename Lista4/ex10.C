void string_trim(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (isspace(str[start])) {
        start++;
    }

    while (end >= start && isspace(str[end])) {
        end--;
    }

    for (int i = 0; i <= end - start; i++) {
        str[i] = str[start + i];
    }

    str[end - start + 1] = '\0';
}
