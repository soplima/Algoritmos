//Escreva um programa que, dado um número inteiro positivo, verifica se o mesmo é um Número
//Perfeito. Um número perfeito é igual à soma de seus divisores positivos. Exemplo: 6 = 1 + 2 + 3,
//Informe o numero: 6
//Divisores de 6: 1 + 2 + 3 = 6
//Numero perfeito? Sim

#include <stdio.h>

int main() {
    int num, somaDivisores = 0;

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &num);


    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    if (somaDivisores == num) {
        printf("Divisores de %d: ", num);
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                printf("%d + ", i);
            }
        }
        printf("= %d\n", num);
        printf("Numero perfeito? Sim\n");
    } else {
        printf("Divisores de %d: ", num);
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                printf("%d + ", i);
            }
        }
        printf("= %d\n", somaDivisores);
        printf("Numero perfeito? Nao\n");
    }

    return 0;
}
