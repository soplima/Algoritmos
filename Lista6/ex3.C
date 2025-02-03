void string_report(char str[]) {
    int letras = 0, digitos = 0, simbolos = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 32 && ch <= 126) {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                letras++;
            }
            else if (ch >= '0' && ch <= '9') {
                digitos++;
            }
            else {
                simbolos++;
            }
        }
    }

    printf("Quantidade de letras: %d\n", letras);
    printf("Quantidade de digitos: %d\n", digitos);
    printf("Quantidade de simbolos: %d\n", simbolos);
}