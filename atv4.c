
/*Atividade 4: Aritmética de Ponteiros em Arrays
Incrementando a Atividade 3: Gerenciando múltiplos itens.
Enunciado: Expanda o programa para gerenciar um pequeno estoque. Na main, crie um array estático de 3 struct Produto e inicialize-os 
com dados de sua escolha. Crie uma função chamada imprimir_produtos que receba um ponteiro para Produto e a quantidade de itens. 
Obrigatório: Dentro da função, percorra o vetor e imprima os dados utilizando aritmética de ponteiros (ex: (ptr + i)->preco), sem 
utilizar a sintaxe tradicional de índices de colchetes (ptr[i]).*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int id;
    float preco;

}Produto;

void aplicar_desconto(Produto *produto,float desconto){

 produto->preco = produto->preco * (100-desconto)/100;
}

void imprimir_produtos(Produto* produto, int qtd){
    for(int i =0;i<qtd;i++){
        printf("ID: %d | Preco: %.2f\n",(produto+i)->id,(produto+i)->preco);
    }
}

int main(){

    Produto produto[3];
    produto[0].id=1;
    produto[0].preco= 100;
    produto[1].id=2;
    produto[1].preco= 150;
    produto[2].id=3;
    produto[2].preco= 200;

    imprimir_produtos(produto,3);
    return 0;
}