int string_to_int(const char number_str[]) {
    int result = 0;
    int i = 0;

    while (number_str[i] != '\0') {
        int digit = number_str[i] - '0';
        
        result = result * 10 + digit;
        
        i++;
    }

    return result;
}

