#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define nvet 500000000

int maxVetor(int *A, int n){
    int i, atualMax = *A;
    for (i = 1; i < n; i++)
        if (A[i] > atualMax)
            atualMax = A[i];
             
    return atualMax;
    }

int main(){

    int *v, var;

    v = malloc(nvet*sizeof(int));

    for(int i = 0; i < nvet; i++){
        v[i] = i+10;
        //printf("%d, ",v[i]);
    }

    time_t t1, t2, total;

    t1 = time(NULL); // retorna hora atual do sistema

    /* algoritmo a ser testado*/
    var = maxVetor(v, nvet);
    //printf("maior cara: %d", var);

    t2 = time(NULL);
    total = difftime(t2,t1); // retorna a diferenca t2-t1

printf("\n\nTotal vet ordenado crescente: %ld seg.\n", total);

//tempo tentativa 2
srand(123);

for(int i = 0; i < nvet; i++){
        v[i] = rand();

        //printf("%d, ",v[i]);
    }

    t1 = time(NULL); // retorna hora atual do sistema

    /* algoritmo a ser testado*/
    var = maxVetor(v, nvet);
    //printf("maior cara: %d", var);

    t2 = time(NULL);
    total = difftime(t2,t1); // retorna a diferenca t2-t1

printf("\n\nTotal Vet. Aleatorio: %ld seg.\n", total);


for(int i = nvet; i > 0; i--){
        v[i] = i - nvet;
       // printf("%d, ",v[i]);
    }


t1 = time(NULL); // retorna hora atual do sistema

    /* algoritmo a ser testado*/
    var = maxVetor(v, nvet);
    //printf("maior cara: %d", var);

    t2 = time(NULL);
    total = difftime(t2,t1); // retorna a diferenca t2-t1

printf("\n\nTotal vet ordenado decrescente: %ld seg.\n", total);

free(v);
return 0;




}