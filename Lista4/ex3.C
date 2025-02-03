//Escreva um programa que, dado um número inteiro positivo, o imprime em notação binária. O
//processo de obtenção é similar à extrair os dígitos de um número: divisões sucessivas por 2, até
//que o quociente seja 0 (zero). A cada divisão, o resto indica um dígito binário. Entretanto, assim
//como no algoritmo de obter os dígitos, os dígitos binários estarão em ordem inversa. Logo, será
//preciso remontar o número binário (na ordem correta) em uma variável inteira.

#include <stdio.h>

int main(){

    int a, resto = 0, binario = 0, posicao = 1;

    printf("Insira um numero inteiro: ");
    scanf("%d", &a);

    while(a != 0){
        resto = a % 2;
        binario = binario + resto * posicao;
        posicao *= 10;
        a /= 2;
    }printf("Numero em notacao binaria: %d\n", binario);

    return 0;
}