/* 
 * File:   main.c
 * Author: Eliane Gniech Karasawa
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "lista.c"

int main()
{
    int opn, nins, nrem, nbusc, chave, pos, i = 0;
    ITEM mov;
    LISTA *LIS = NULL;

    while (1)
    {
        scanf("%d", &opn);
        switch (opn)
        {
        case 1:
            LIS = lista_criar();
            break;

        case 2:
            lista_apagar(LIS);
            break;

        case 3:
            scanf("%d", &nins);
            for(int i = 0; i < nins; ++i)
            {
                scanf("%d %s %d",&mov.chave, mov.titulo, &pos);
                printf("%d", lista_inserir_pos(LIS, mov, pos));
            }
            break;

        case 4:
            scanf("%d", &nrem);
            for(i = 0; i < nrem; ++i)
            {
                scanf("%d",&chave);
                lista_remover(LIS, chave);
            }
            break;

        case 5:
            scanf("%d", &nbusc);
            for(i = 0; i < nbusc; ++i)
            {
                scanf("%d",&chave);
                lista_buscar(LIS, chave);
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
            lista_apagar(LIS);
            return 0;
            break;

        default:
            printf("Opção inválida.\n");
            break;
        }
    }