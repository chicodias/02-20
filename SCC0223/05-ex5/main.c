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
        printf("digite k,j,i:\n");
        scanf("%d %d %d", &k, &j, &i);
        
        // validação da entrada
        if (i > 0 || j > 0 || k > 0 || k < 1000000)
        { 
            // insere as k figurinhas no maço em ordem decrescente
            for(int con = k; con > 0; --con)
                if(!fila_cheia(fi))
                    inserir(fi, con);   
            

            while(!fila_vazia(fi))
            {
            //  imprime e remove j figurinhas do maço,
                for(int con = 0; con < j; ++con)
                {
                    printf("%d", frente(fi));
                    remover(fi);
                    if(con != j-1) //separador
                        printf("-");
                }
            
            //  reinsere a figurinha do topo no fim da fila i vezes
                for(int con = 0; con < i; ++con)
                {
                    inserir(fi, frente(fi));
                    remover(fi);
                
                // ultima figurinha manipulada
                    if(con != j-1)
                        printf("%d",frente(fi));
                }   
            }

            printf("\n");
        }
    
        // apaga a fila e encerra a aplicação caso a entrada seja 0 0 0
        else if (i == 0 && j == 0 && k == 0)
        {
            apagar(&fi);
            return 0;
        }
    }
}   
