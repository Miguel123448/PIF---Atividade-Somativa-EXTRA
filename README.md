# PIF Atividade Somativa EXTRA
**Enunciado**
## Atividade 1: Fundamentos de Ponteiros e Modificação Direta
Enunciado: Crie um programa que declare uma variável do tipo float representando o preço de um produto e a inicialize com um valor (ex: 100.0). Em seguida, declare um ponteiro para float e aponte-o para o endereço dessa variável. Através exclusivamente do ponteiro, aplique um aumento de 10% no preço. Por fim, imprima o valor original da variável para comprovar que ele foi alterado.

## Atividade 2: Passagem por Referência
Incrementando a Atividade 1: Agora encapsularemos a lógica em uma função.
Enunciado: Evolua o código anterior removendo a alteração direta na main. Crie uma função chamada aplicar_desconto que não retorne nada (void), mas que receba como parâmetros: um ponteiro para o preço de um produto e um valor percentual de desconto (float). A função deve alterar o valor original na memória. Chame essa função na main passando o endereço da sua variável de preço.

## Atividade 3: Ponteiros para Structs
Incrementando a Atividade 2: Agrupando dados relacionados.
Enunciado: Transforme o conceito abstrato de produto em uma struct chamada Produto, contendo um id (inteiro) e um preco (float). Atualize a função aplicar_desconto para que agora ela receba um ponteiro para a struct Produto e o percentual de desconto. Utilize o operador seta (->) para acessar e modificar o campo preco dentro da função.

## Atividade 4: Aritmética de Ponteiros em Arrays
Incrementando a Atividade 3: Gerenciando múltiplos itens.
Enunciado: Expanda o programa para gerenciar um pequeno estoque. Na main, crie um array estático de 3 struct Produto e inicialize-os com dados de sua escolha. Crie uma função chamada imprimir_produtos que receba um ponteiro para Produto e a quantidade de itens. Obrigatório: Dentro da função, percorra o vetor e imprima os dados utilizando aritmética de ponteiros (ex: (ptr + i)->preco), sem utilizar a sintaxe tradicional de índices de colchetes (ptr[i]).

## **PESQUISA EXTRA**Atividade 5: Alocação Dinâmica de Memória (malloc e free)
Incrementando a Atividade 4: Removendo o limite estático de tamanho.
Enunciado: O sistema agora precisa lidar com um número variável de produtos. Modifique a main para perguntar ao usuário quantos produtos ele deseja cadastrar. Utilize a função malloc (requer <stdlib.h>) para alocar memória dinamicamente para o array de Produto. Preencha o array iterando com ponteiros, chame a função imprimir_produtos da atividade anterior e, por fim, libere a memória alocada utilizando free().
**Entrega**- Crie um repositório para o seu código acima (GitHub)
- Submeta o link do seu repositório na entrega da atividade.
- Opcional: crie um README.MD explicando a sua resolução dos exercícios acima.
