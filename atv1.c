
/*Atividade 1: Fundamentos de Ponteiros e Modificação Direta
Enunciado: Crie um programa que declare uma variável do tipo float representando o preço de um produto e a inicialize com um valor (ex: 100.0).
Em seguida, declare um ponteiro para float e aponte-o para o endereço dessa variável. Através exclusivamente do ponteiro, aplique um aumento
de 10% no preço. Por fim, imprima o valor original da variável para comprovar que ele foi alterado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float preco = 100;
    float *ptr_preco;
    ptr_preco = &preco;

    *ptr_preco = *ptr_preco + *ptr_preco/10;

    printf("%.2f",preco);

    return 0;
}