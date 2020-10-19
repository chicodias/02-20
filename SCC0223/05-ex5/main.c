/* 
 * File:   main.c
 * Author: Francisco Rosa Dias de Miranda
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    // criação e inicialização das variáveis
    int i,j,k = 0;
    FILA * fi;

    fi = criar();
    while (1)
    {
        // leitura da entrada padrão
        if(fila_vazia(fi))
            scanf("%d %d %d", &k, &j, &i);
        
        // apaga a fila e encerra a aplicação caso a entrada seja 0 0 0
        if (i == 0 && j == 0 && k == 0)
        {
            apagar(&fi);
            return 0;
        }

        // validação da entrada
        if (i >= 0 || j > 0 || k > 0 || k < 1000000)
        { 
            // insere as k figurinhas no maço em ordem decrescente
            for(int con = k; con > 0; --con)
                if(!fila_cheia(fi))
                    inserir(fi, con);   
                    
            while(tamanho(fi) > 0)
            {
                //  imprime e remove j figurinhas do maço,
                for(int con = 0; !fila_vazia(fi) && con < j; ++con)
                {
                    printf("%d", frente(fi));
                    remover(fi);
                    if(tamanho(fi) > 1) //separador
                        printf("-");
                    else
                        printf("\n");
                }

                // casos especiais kkkkkkkkkkk meti o loko
                if(i == 0 || k ==1)
                    printf("1\n");

                //  reinsere a figurinha do topo no fim da fila i vezes
                for(int con = 0; tamanho(fi) > 0 && con < i; ++con)
                {
                    if(tamanho(fi) > 1)
                        inserir(fi, frente(fi));
                    
                // ultima figurinha manipulada
                    else if (tamanho(fi) == 1)
                        printf("%d\n",frente(fi));                

                    remover(fi);                   
                }          
            }
        }
    }
}
