#include <stdio.h>
#include <stdlib.h>
#include "buscas.h"

int* AlocaVet(int n){
    int * vet;
    vet = malloc(n * sizeof(int));    
    return vet;
}

void LiberaVet(int *v){
     free(v);
}


int main(){
    
    int nReg, nBusca, tipoBusca, *vet;
    int i = 0, x = 0, pos = 0;

    printf("Digite Número de registros: ");
    scanf("%d", &nReg);
    printf("Digite Número de buscas: ");
    scanf("%d", &nBusca);

    if(nReg > 0)
        vet = AlocaVet(nReg);
    
    for (i = 0; i < nReg; i++)
        scanf("%d", &vet[i]);

    for (i = 0; i < nBusca; i++)
    {
    printf("Digite Tipo de busca \n 1- Sequencial 2- Binaria Iterativa 3- Binaria Recursiva: ");
    scanf("%d", &tipoBusca);

    switch(tipoBusca){
        case 1:
            printf("Busca Sequencial. Digite a busca: ");
            scanf("%d", &x);
            pos = buscaSequencial(x,nReg,vet);
            printf("%d",pos);
            break;
        case 2: 
            printf("Busca Bin It");
            scanf("%d", &x);
            pos = buscaBinariaIter(x,nReg,vet);
            printf("%d",pos);
            break;
        case 3:
            printf("Busca Bin Recurs");
            scanf("%d", &x);
            pos = buscaBinariaRecur(x,nReg,vet);
            printf("%d",pos);
            break;
        default:
            printf ("Tipo de busca invalido\n");    
    }
        
    }

    LiberaVet(vet);
    return 0;
}