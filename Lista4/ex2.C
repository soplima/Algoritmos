//Escreva um programa que imprime a tabela ASC com valores em decimal (%03d), hexadecimal
//(%03X) e o caractere (%c). Imprima apenas os caracteres 33 ao 125, separados em 3 colunas
//(cada uma conterá 31 elementos), similar ao seguinte exemplo:

#include <stdio.h>

int main() {
    printf("DEC HEX CHR\tDEC HEX CHR\tDEC HEX CHR\n");
    
    for (int i = 33; i <= 125; i++) {
        printf("%03d %03X %c\t", i, i, i);
        if ((i - 32) % 31 == 0) { 
            printf("\n");
        }
    }

    return 0;
}
