// Algoritmos de ordenação desenvolvidos
// na disciplina MAC0121 - Algoritmos e Estruturas de Dados
// 2º Semestre de 2014 - IME-USP
// Baseado no livro Projeto de Algoritmos em C


// Esta função recebe um inteiro x e um vetor
// crescente v[0..n-1] e devolve um índice j
// em 0..n tal que v[j-1] < x <= v[j].

int buscaSequencial (int x, int n, int v[]) {
   int i = 0;
   while (i < n && v[i] < x) 
      i++;
   return i;
}

// Esta função recebe um inteiro x
// e um vetor crescente v[0..n-1]
// e devolve um índice j em 0..n 
// tal que v[j-1] < x <= v[j].

int buscaBinariaIter (int x, int n, int v[]) { 
   int e = -1, d = n;
   while (e < d-1) {  
      int m = (e + d)/2;
      if (v[m] < x) e = m;
      else d = m; 
   }
   return d;
}

// Recebe um vetor crescente v[e+1..d-1] e
// um inteiro x tal que v[e] < x <= v[d] e
// devolve um índice j em e+1..d tal que
// v[j-1] < x <= v[j].

static int 
bb (int x, int e, int d, int v[]) {
   if (e == d-1) return d;  
   else {
      int m = (e + d)/2;
      if (v[m] < x)  
         return bb (x, m, d, v);
      else  
         return bb (x, e, m, v); 
   } 
}

// Esta função recebe um vetor crescente
// v[0..n-1] e um inteiro x e devolve um
// índice j em 0..n tal que 
// v[j-1] < x <= v[j].

int buscaBinariaRecur (int x, int n, int v[]) {
   return bb (x, -1, n, v);
}

