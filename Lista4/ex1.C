//Escreva um programa que, dado um número inteiro (positivo ou negativo), troca o último dígito pelo
//primeiro. OBS: não basta imprimir o número dessa forma, é preciso inverter o número em uma
//variável int.
//Informe o número: -2567
//> -7562

#include <stdio.h>

int main(){

    int num, ultimoDig, primeiroDig, temp, novoNum;

    printf("Insira um numero: ");
    scanf("%d", &num);

    ultimoDig = num % 10;

    temp = num / 10;

    primeiroDig = temp;

    while (primeiroDig >= 10){
    primeiroDig /= 10;
    }

    novoNum = ultimoDig;
    while (temp >= 10) {
        novoNum = novoNum * 10 + (temp % 10);
        temp /= 10;
    }

     novoNum = novoNum * 10 + primeiroDig;

    printf("Novo numero: %d\n", novoNum);


    return 0;
}