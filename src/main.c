#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NAME_LEN 50

typedef struct Produto {
    char nome[MAX_NAME_LEN];
    int quantidade;
    char validade[11];
} Produto;

typedef struct No {
    Produto produto;
    struct No* proximo;
} No;
//Instancia elementos da struct produto.
Produto criar_produto(char nome[], int quantidade, char validade[]) {
    Produto p;
    strcpy(p.nome, nome);
    p.quantidade = quantidade;
    strcpy(p.validade, validade);
    return p;
}
//Função que adiciona um produto na lista de produtos.
No* adicionar_produto(No* lista, Produto p) {
    No* novo = (No*)malloc(sizeof(No));
    novo->produto = p;
    novo->proximo = lista;
    return novo;
}
//função que calcula a quantidade de dias de acordo com o atributo da Struct e a data de hoje do computador.
int dias_para_validade(const char* validade) {
    struct tm data_validade = {0};
    time_t agora = time(NULL);
    struct tm* data_atual = localtime(&agora);

    sscanf(validade, "%d/%d/%d", &data_validade.tm_mday, &data_validade.tm_mon, &data_validade.tm_year);
    data_validade.tm_mon -= 1;
    data_validade.tm_year -= 1900;

    time_t t_validade = mktime(&data_validade);
    double diferenca = difftime(t_validade, mktime(data_atual));

    return diferenca > 0 ? (int)(diferenca / (60 * 60 * 24)) : -1;
}
    //Percorre toda a lista e classifica do menor pro maior em relação à quantos dias faltam para vencer.
No* ordenar_por_validade(No* lista) {
    if (lista == NULL) return NULL;
    No* i, *j;
    Produto temp;
    for (i = lista; i != NULL; i = i->proximo) {
        for (j = i->proximo; j != NULL; j = j->proximo) {
            int dias_i = dias_para_validade(i->produto.validade);
            int dias_j = dias_para_validade(j->produto.validade);
            if (dias_i > dias_j) {
                temp = i->produto;
                i->produto = j->produto;
                j->produto = temp;
            }
        }
    }
    return lista;
}
//Percorre toda a lista e classifica do maior pro menor em relação à quantidade de produtos.
No* ordenar_por_quantidade(No* lista) {
    if (lista == NULL) return NULL;
    No* i, *j;
    Produto temp;
    for (i = lista; i != NULL; i = i->proximo) {
        for (j = i->proximo; j != NULL; j = j->proximo) {
            if (i->produto.quantidade < j->produto.quantidade) {
                temp = i->produto;
                i->produto = j->produto;
                j->produto = temp;
            }
        }
    }
    return lista;
}
//função que percorre toda a lista e exibe os dados.
void exibir_lista(No* lista) {
    No* atual = lista;
    while (atual != NULL) {
        printf("Produto: %s, Quantidade: %d, Validade: %s (dias restantes: %d)\n",
               atual->produto.nome,
               atual->produto.quantidade,
               atual->produto.validade,
               dias_para_validade(atual->produto.validade));
        atual = atual->proximo;
    }
}

int validar_formato_validade(const char* validade) {
    int dia, mes, ano;
    if (sscanf(validade, "%d/%d/%d", &dia, &mes, &ano) == 3) {
        if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 1900) {
            return 1;
        }
    }
    return 0;
}

No* adicionar_produtos_usuario(No* lista) {
    char nome[MAX_NAME_LEN];
    int quantidade;
    char validade[11];
    int continuar = 1;
    //Loop para continuar adicionando produtos.
    while (continuar) {
        printf("\nAdicione um produto ao inventário.\n");
        printf("Nome do produto: ");
        scanf(" %[^\n]", nome);
        printf("Quantidade: ");
        scanf("%d", &quantidade);

        do {
            printf("Validade (formato dd/mm/aaaa): ");
            scanf(" %[^\n]", validade);
            if (!validar_formato_validade(validade)) {
                printf("Formato inválido! Tente novamente.\n");
            }   //Loop que verifica se a data de validade está no formato adequado
        } while (!validar_formato_validade(validade));

        Produto novo_produto = criar_produto(nome, quantidade, validade);
        lista = adicionar_produto(lista, novo_produto);

        printf("Produto adicionado com sucesso!\n");
        printf("Deseja adicionar outro produto? (1-Sim, 0-Não): ");
        scanf("%d", &continuar);
    }
    return lista;
}

int main() {
    No* inventario = NULL;
    inventario = adicionar_produtos_usuario(inventario);

    printf("\nInventário antes da ordenação:\n");
    exibir_lista(inventario);

    int opcao, continuar = 1;
    //Loop para o usuário decidir após uma escolha, se ele quer outro método de ordenaçãp
    while (continuar) {
        printf("\nComo deseja ordenar o inventário?\n");
        printf("1 - Por proximidade da validade\n");
        printf("2 - Por quantidade (do maior para o menor)\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        //Switch para ordenção de inventário
        switch (opcao) {  
            case 1: 
                inventario = ordenar_por_validade(inventario);
                printf("\nInventário após ordenação por proximidade da validade:\n");
                break;

            case 2: 
                inventario = ordenar_por_quantidade(inventario);
                printf("\nInventário após ordenação por quantidade:\n");
                break;

            default: 
                printf("Opção inválida! Tente novamente.\n");
                continue;
        } 

        exibir_lista(inventario);

        printf("\nDeseja ordenar por outro critério? (1-Sim, 0-Não): ");
        scanf("%d", &continuar);
    }

return 0;
}