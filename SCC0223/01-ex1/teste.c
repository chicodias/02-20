#include <stdio.h>

int buscabiniter (int x, int n, int v[]){
   int e = 0, d = n-1;
   int meio = d/2;

   while(e <= d) {
      
      if(v[meio] == x) //achou
         return meio + 1;

      else if (v[meio] < x){ //x a direita do meio
         e = meio;
         meio = (e+d)/2;
      }

      else{ // x a esquerda
         d = meio;
         meio = (e+d)/2;
      }
      
      }
      return -1;
   }

int main()
{
    int pos =0;
    int v[5] = {1,2,3,4,5};
    pos = buscabiniter(4,5,v);
    printf("%d \n",pos);
    return 0;
}
