int strcmp_plus(const char s1[], const char s2[]) {
    char upper_s1[strlen(s1) + 1]; 
    char upper_s2[strlen(s2) + 1]; 

    for (int i = 0; s1[i] != '\0'; i++) {
        upper_s1[i] = toupper(s1[i]);
    }
    upper_s1[strlen(s1)] = '\0'; 

    for (int i = 0; s2[i] != '\0'; i++) {
        upper_s2[i] = toupper(s2[i]);
    }
    upper_s2[strlen(s2)] = '\0'; 

    return strcmp(upper_s1, upper_s2);
}
