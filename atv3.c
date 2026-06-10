
/*Atividade 3: Ponteiros para Structs
Incrementando a Atividade 2: Agrupando dados relacionados.
Enunciado: Transforme o conceito abstrato de produto em uma struct chamada Produto, contendo um id (inteiro) e um preco (float). Atualize a 
função aplicar_desconto para que agora ela receba um ponteiro para a struct Produto e o percentual de desconto. Utilize o operador 
seta (->) para acessar e modificar o campo preco dentro da função.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int id;
    float preco;

}Produto;

void aplicar_desconto(Produto *produto,float desconto){

 produto->preco = produto->preco * (100-desconto)/100;
}

int main(){

    Produto produto;
    produto.id=1;
    produto.preco= 100;

    aplicar_desconto(&produto,10);

    printf("%.2f",produto.preco);
    return 0;

}