---
output:
  pdf_document: default
---
# SCC0652 - Projeto Final
## Visualização da rede de personagens na trilogia O Senhor dos Anéis utilizando o NER

## Objetivo
Nesta atividade, nosso objetivo é a criação de um sistema interativo de visualização analítica da rede de personagens dos livros O Senhor dos Anéis utilizando o modelo de Reconhecimento de Entidade Mencionada (NER).

## Conjunto de Dados

Os livros foram retirados do site: https://www.kaggle.com/ashishsinhaiitr/lord-of-the-rings-text. Nosso *corpus* consiste em três arquivos `.txt`, cada um contendo um volume da trilogia *The Lord of the Rings*.

Na primeira etapa deste projeto, realizamos um pré-processamento, de forma a remover pontuação, stopwords, e lematizar nosso dataset. Esse processo foi ilustrado com o auxílio de wordclouds.

Já na segunda etapa, procuramos adotar um paradigma visual em nosso conjunto pré-processado de dados. Ao decorrer do processo, notamos que era necessário adotar outros passos em nosso pré-processamento, removendo as palavras mais comuns da língua inglesa para contribuir com a acurácia do nosso modelo de Entidade Mencionada.

Ao final do processo, nossos conjuntos de dados tornaram-se grafos, em que cada um dos vértices era um personagem, e as arestas a respectiva análise, de co-ocorrência ou sentimento, das relações em cada um dos livros. Com auxílio do catálogo data-to-viz, decidimos adotar o modelo de representação visual de grafos em rede.


## Pré-processamento

## 
