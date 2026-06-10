
/*Atividade 5: Alocação Dinâmica de Memória (malloc e free)
Incrementando a Atividade 4: Removendo o limite estático de tamanho.
Enunciado: O sistema agora precisa lidar com um número variável de produtos. Modifique a main para perguntar ao usuário quantos 
produtos ele deseja cadastrar. Utilize a função malloc (requer <stdlib.h>) para alocar memória dinamicamente para o array de 
Produto. Preencha o array iterando com ponteiros, chame a função imprimir_produtos da atividade anterior e, por fim, libere a 
memória alocada utilizando free().*/

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

    Produto *produtos;
    int qtd;
    printf("Digite quantos produtos serao cadastrados: ");
    scanf("%d",&qtd);

    produtos = (Produto*) malloc(qtd*sizeof(Produto));
    if (produtos == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }

    for(int i =0; i<qtd;i++){
        (produtos + i)->id = i + 1;
        (produtos + i)->preco = 100 + 50 * i;
    }

    imprimir_produtos(produtos,qtd);

    free(produtos);
    return 0;
}