/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula: Maior AB = (a+b+abs(a-b))/2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.
ex:
7 14 106

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
ex:
106 eh o maior
*/

#include <stdio.h>

int main (){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("%d eh o maior\n", a);
        }
        else if (b > a && b > c) {
            printf("%d eh o maior\n", b);
            }
        else{
            printf("%d eh o maior\n", c);
        }

    return 0;
}