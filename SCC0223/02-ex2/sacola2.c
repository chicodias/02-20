/* Francisco Rosa Dias de Miranda
    Atividade 2 - SCC0223 */

#include <stdlib.h>
#include <stdio.h>
#include "sacola.h"


/* estrutura que armazena um par formado por um elemento do tpo ITEM e um inteiro que indicará o número de ocorrências */
struct Elemento
{
    char valor;
    int num;
};

struct sacola
{
    struct Elemento elem[TAM_MAX];
    int used; 
};
/* elems como um vetor de pares*/
/* ◦variável used informa quantas posições de elems já foram uIlizadas */  


/*Contrução do tipo sacola que contém:
elem: vetor de char de TAM_MAX
used: inteiro que armazena o número de char contidos em elem
*/
/*
Criação da sacola com alocação dinâmica e inicialização do contador used
Retorna o ponteiro da sacola
*/

SACOLA *criar(){
    SACOLA *sac = (SACOLA *)malloc(sizeof(SACOLA));
    sac->used = 0;
        
    return sac;
}

/*
Limpeza do elemento sacola e desalocação seu ponteiro
*/

void limpar(SACOLA *sac){
    if(sac){
        free(sac);
    }
}

/*
Contagem de um dado elemento c na sacola recebida
*/
int contar(SACOLA *sac, char c){
    for(int i = 0; i < sac->used; ++i)
        if(sac->elem[i].valor == c)
            return sac->elem[i].num;
    return 0;
}


/*
Inserção do elemento c na sacola sac recebida
Só insere se ainda possui espaço (verificação através do elemento used)
*/

void inserir(SACOLA *sac, char c){
    if (sac -> used >= TAM_MAX) //sacola cheia
        return;

    for (int i = 0; i < sac ->used; i++) // incrementa elemento na sacola
        if(sac->elem[i].valor == c){
            sac->elem[i].num++;
            sac->used++;
            /*printf("Elemento %c inserido\n", c);*/
            return;
        }
    sac->elem[sac->used].valor = c;
    sac->elem[sac->used].num = 1;
    sac->used++;
    
    return;
}