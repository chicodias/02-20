
// Esta função recebe um inteiro x e um vetor
// crescente v[0..n-1] e devolve um índice j +1
// se x \in v[] ou -1 caso contrario

int buscaSequencial (int x, int n, int v[]) {
   for (int i = 0; i < n; i++)
   {
      if (v[i] == x)
         return i + 1;
   }
   return -1;   
}


// Esta função recebe um inteiro x
// e um vetor crescente v[0..n-1]
// verifica se x esta em v e retorna
// seu indice. caso x nao esteja em v,
// a funcao retorna -1. 

int buscaBinariaIter (int x, int n, int v[]){
   int e = 0, d = n;
   int meio = d/2;

   while(e < d) {
      
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

// Esta função recebe um vetor crescente
// v[0..n-1] e um inteiro x e devolve um
// índice j em 0..n tal que 
// v[j-1] = x ou -1 caso contrario
int bb(int x, int e, int d, int v[]) {
    int meio = (e + d) / 2;
    if (v[meio] == x) return meio + 1;
    if (d == e) return -1;
    if (v[meio] > x) return bb(x, e, meio - 1, v);
    return bb(x, meio + 1, d, v);
}

// envelope para chamada da recursao
int buscaBinariaRecur (int x, int n, int v[]) {
   return bb (x, -1, n, v);
}



