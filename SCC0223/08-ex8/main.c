/* 
 * File:   main.c
 * Author: Francisco Rosa Dias de Miranda
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    /* opn = opção selecionada pelo usuario
        nops = numero de operaçoes requisitadas
        pos do elemento a ser inserido e chave a ser buscada */
    int opn, nops, chave, pos, i = 0;
    ITEM mov;
    LISTA *LIS = NULL;

    while (1)
    {
        //printf("Escolha a operacao:\n");
        scanf("%d", &opn);
        switch (opn)
        {
        case 1:

        // não criar uma lista sem antes apagar uma já existente, perdendo acesso a anterior
            if(LIS == NULL)
                LIS = lista_criar();
            else
            {
                lista_apagar(&LIS);
                LIS = lista_criar();
            }
            
            break;

        case 2:
            printf("%d\n", lista_apagar(&LIS));
            break;

        case 3:
            //printf("Numero de Insercoes:\n");
            scanf("%d", &nops);
            for(int i = 0; i < nops; ++i)
            {
                scanf("%d %s %d",&mov.chave, mov.titulo, &pos);

                // se posicao for invalida, insere no inicio
                /* if (pos > lista_tamanho(LIS))
                    printf("%d\n", lista_inserir_pos(LIS, mov, 1));
                else    
                 */    printf("%d\n", lista_inserir_pos(LIS, mov, pos));
            }
            break;

        case 4:
            //printf("Numero de remocoes:\n");
            scanf("%d", &nops);
            for(i = 0; i < nops; ++i)
            {
                
                scanf("%d",&chave);
                printf("%d\n",lista_remover(LIS, chave));
            }
            break;

        case 5:
            //printf("Numero de buscas:\n");
            scanf("%d", &nops);
            for(i = 0; i < nops; ++i)
            {
                scanf("%d",&chave);
                printf("%d\n",lista_buscar(LIS, chave));
            }
            break;

        case 6:
            lista_imprimir(LIS);
            break;

        case 7:
            printf("%d\n",lista_tamanho(LIS));
            break;

        case 8:
            printf("lista_cheia nao implementado.\n");
            break;

        case 9:
            printf("%d\n",lista_vazia(LIS));
            break;

        case 0:
            lista_apagar(&LIS);
            return 0;
            break;

        default:
            return 1;
            break;
        }
    }
}