/* 
 * File:   lista.c
 * Author: Francisco Rosa Dias de Miranda
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/*Contrução de um NO que contém:
filme: struct do tipo ITEM que armazena filme e chave
prox: elemento seguinte da lista ligada
*/

// cabeça da lista
struct lista{
    NO *inicio; 
    };

/*
Criação da lista com alocação dinâmica e inicialização do ponteiro inicio
Retorna o ponteiro da sacola
*/

LISTA *lista_criar(void){
    LISTA * lis;

    lis = (LISTA *)malloc(sizeof(LISTA));

    // se der problema no malloc
    if (lis == NULL)
        return ERRO;

    lis->inicio = NULL;
    return lis;
}
/*
Limpeza do elemento lista e desalocação seu ponteiro
*/

boolean lista_apagar(LISTA **l){
    NO *p, *q;

    // se a lista estiver vazia, retorne FALSE
    if (*l == NULL)
        return FALSE;

    // inicialização do ponteiro que percorre a lista
    p = (*l)->inicio;
    while(p != NULL)
    {
        q = p->prox;
        free(p);
        p = q;
    }
    
    free(*l);
    
    return TRUE;
}

// imprime a lista na saída padrão
void lista_imprimir(LISTA *l){
    if (l == NULL)
        return;
    for (NO *p = l->inicio; p != NULL; p = p->prox)
        printf("%d %s\n",p->filme.chave, p->filme.titulo);
    
    return;
} 

// indica se uma dada lista está vazia retornando TRUE
boolean lista_vazia(LISTA *l){
    if (l == NULL)
        return ERRO;
    else if (l->inicio == NULL)
        return TRUE;
    
    return FALSE;
}

// insere um elemento na lista na primeira posição
boolean lista_inserir(LISTA *l, double x, double y){
    NO *p, *novo;
    if (l == NULL)
        return FALSE;


    novo = (NO *)malloc(sizeof(NO));
    if (novo == NULL)
	return ERRO;

    novo->x = x;
    novo->y = y;
    novo->inicio = l->inicio;
    l->inicio = novo;    

    return TRUE;
   
}

// remove um item da lista a partir de sua chave
boolean lista_remover(LISTA *l, int chave){
    NO *p, *q;
    
    if (l == NULL || l->inicio == NULL)
        return ERRO;
    

    p = l->inicio;

    // remove da primeira posição
    if(l->inicio->filme.chave == chave){
        l->inicio=l->inicio->prox;
        free(p);
        return TRUE;
    }

    while (p->filme.chave != chave){
        
        q = p;
        p = p->prox;
    
        if (p == NULL)
            return FALSE;
    }

    q->prox = p->prox;
    free(p);
    return TRUE;
}

// busca uma chave na lista e retorna sua posição
int lista_buscar(LISTA *l, int chave){
    int pos = 0;
    NO *p;
    if (l == NULL || l->inicio == NULL)
            return ERRO; 
    p = l->inicio;

    while (p->filme.chave != chave){
        pos++;   
        p = p->prox;                 

        if (p == NULL)
            return FALSE;
    }

    return pos+1;
}

// retorna o tamanho da lista
int lista_tamanho(LISTA *l){
    int len = 0;
    NO *p;

    if(l == NULL)
        return FALSE;

    p = l->inicio;
    while (p != NULL){
        len++;   
        p = p->prox;
    }
    return len;

}
