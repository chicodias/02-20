#include <stdio.h>
#include <stdlib.h>
#include <ordena.h>

int* AlocaVet(int n){
    int * vet;
    vet = malloc(n * sizeof(int));    
    return vet;
}

void LiberaVet(int *v, int n){
    for (int i = 0; i < n; i++)    
        free(v[i]);
}


int main(){
    
    int nReg, nBusca, tipoBusca, *vet;
    int i = 0;

    printf("Digite Número de registros: ");
    scanf("%d", &nReg);
    printf("Digite Número de buscas: ");
    scanf("%d", &nBusca);

    if(nReg > 0)
        vet = AlocaVet(nReg);
    
    for (i = 0; i < nReg; i++)
        scanf("%d", &vet[i]);

    printf("Digite Tipo de busca \n 1- Sequencial 2- Binaria Iterativa 3- Binaria Recursiva: ");
    scanf("%d", &tipoBusca);

    switch(tipoBusca){
        case 1:
        printf("Busca Sequencial");
            // BuscaSequencial();
            break;
        case 2: 
                printf("Busca Bin It");
            // BuscaBinariaIterativa();
            break;
        case 3:
            printf("Busca Bin Recurs");
            // BuscaBinariaRecursiva();
            break;
        default:
            printf ("Tipo de busca invalido\n");
    }

    LiberaVet(vet);
    return 0;
}