
/*Atividade 2: Passagem por Referência
Incrementando a Atividade 1: Agora encapsularemos a lógica em uma função.
Enunciado: Evolua o código anterior removendo a alteração direta na main. Crie uma função chamada aplicar_desconto que não retorne nada (void),
 mas que receba como parâmetros: um ponteiro para o preço de um produto e um valor percentual de desconto (float). A função deve alterar o 
 valor original na memória. Chame essa função na main passando o endereço da sua variável de preço.*/

#include <stdio.h>
#include <stdlib.h>

void aplicar_desconto(float *preco,float desconto){

    *preco = *preco *(100-desconto)/100;

}

int main(){

    float preco = 100;

    aplicar_desconto(&preco,10);

    printf("%.2f",preco);

    return 0;
}