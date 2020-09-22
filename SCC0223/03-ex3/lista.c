#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista{
    ITEM filme;
    LISTA * prox;
};

LISTA *lista_criar(void){
    LISTA * lis;
    lis = (LISTA *)malloc(sizeof(LISTA));
    if (lis == NULL)
        return ERRO;
    lis->prox = NULL;
    return lis;
} /*Criacao da lista e retorno do seu ponteiro*/


/*     Na função lista_vazia e lista_tamanho deve-se retornar ERRO;
    No caso de lista_imprimir não deve ser impresso nada;
    Em lista_inserir_pos e lista_remover deve ser retornado FALSE.
 */

boolean lista_apagar(LISTA **l){
    LISTA *p, *q;

    if (*l == NULL)
        return FALSE;
    p = l;
    do {
        q = p->prox;
        free(p);
        p = q;

    } while(q != NULL);
    return TRUE;
} /*Apaga todo o conteudo da lista e libera o bloco de memoria*/


void lista_imprimir(LISTA *l){
    if (l != NULL){
        printf("%d %s\n",l->filme.chave, l->filme.titulo);
        lista_imprimir(l->prox);   
    }
    return;
} /*Imprime os elementos armazenados na lista*/

boolean lista_vazia(LISTA *l){
    if (l == NULL)
        return ERRO;
    else if (l != NULL && ){}
    return FALSE;
} /*Retorna TRUE se a lista estiver vazia*/

boolean lista_inserir_pos(LISTA *l, ITEM filme, int pos){
    LISTA *p;
        if (l == NULL)
        return FALSE;
    if(lista_vazia(l)){
        p = lista_criar();
        p->filme = filme;
    
} /*Insere o ITEM na posicao desejada*/

boolean lista_remover(LISTA *l, int chave){
    if (l == NULL)
        return FALSE;

} /*Remove a chave desejada - se nao existir, retorna FALSE*/
int lista_buscar(LISTA *l, int chave){
       if (l == NULL)  return ERRO;
   if (l->conteudo == chave)  return le;
   return busca_r (chave, l->prox);
} /*Busca a chave na lista e se nao existir, retorna ERRO*/

int lista_tamanho(LISTA *l); /*Retorna o tamanho da lista*/

