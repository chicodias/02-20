
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

