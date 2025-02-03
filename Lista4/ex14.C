int string_to_int(const char number_str[]) {
    int result = 0;
    int len = strlen(number_str);
    for (int i = 0; i < len; i++) {
        result += (number_str[i] - '0') * pow(10, len - i - 1);
    }
    return result;
}
