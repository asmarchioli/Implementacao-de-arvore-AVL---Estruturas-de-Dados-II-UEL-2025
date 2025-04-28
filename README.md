# Atividade de Estruturas de Dados II - Implementação de uma Binary Search Tree (BST) do tipo AVL

**Professor: Anderson Paulo Avila Santos**  
**Aluno: Alexandre da Silva Marchioli**  
**Universidade Estadual de Londrina (UEL) - 2025 - Londrina/PR**

## Introdução

O objetivo desta atividade é desenvolver funções auxiliares que complementem a implementação de uma estrutura de dados baseada em Árvores Binárias de Busca Balanceadas do tipo AVL (Adelson-Velsky e Landis). Árvores AVL são conhecidas por manterem-se balanceadas em altura, garantindo uma complexidade eficiente para operações de busca, inserção e remoção.

O arquivo inicial, fornecido pelo professor, já inclui uma base de funções essenciais para manipulação da estrutura. A partir desta base, a tarefa propõe estender as funcionalidades da árvore, aplicando conceitos de balanceamento e operações específicas.

Com a implementação destas funções auxiliares, pretende-se aprimorar a manipulação da árvore, garantindo eficiência e flexibilidade no gerenciamento de dados hierárquicos.

Abaixo, a listagem de funções presentes originalmente no arquivo.

### Funções Básicas

- **`criarNovoNo(TIPOCHAVE ch)`**: Cria e retorna um novo nó com a chave `ch`, preenchendo valores e alocando memória.  
- **`max(int a, int b)`**: Retorna o maior valor entre os dois inteiros fornecidos.  
- **`altura(PONT p)`**: Calcula e retorna a altura da subárvore iniciada no nó `p`.  
- **`exibirArvoreEmOrdem(PONT raiz)`**: Exibe os elementos da árvore em ordem (esquerda-raiz-direita).  
- **`exibirArvorePreOrdem(PONT raiz)`**: Exibe os elementos da árvore em pré-ordem (raiz-esquerda-direita).  
- **`exibirArvorePosOrdem(PONT raiz)`**: Exibe os elementos da árvore em pós-ordem (esquerda-direita-raiz).  
- **`exibirArvore(PONT raiz)`**: Exibe os elementos da árvore com fatores de balanceamento e parênteses para os filhos.  
- **`rotacaoL(PONT p)`**: Realiza uma rotação à esquerda e retorna o novo nó raiz da subárvore.  
- **`rotacaoR(PONT p)`**: Realiza uma rotação à direita e retorna o novo nó raiz da subárvore.  
- **`inserirAVL(PONT* pp, TIPOCHAVE ch, bool* alterou)`**: Insere uma chave `ch` em uma árvore AVL, ajustando o balanceamento conforme necessário.  
- **`buscaBinaria(TIPOCHAVE ch, PONT raiz)`**: Busca recursivamente um nó com a chave `ch` na árvore e retorna seu endereço.  
- **`buscaNo(PONT raiz, TIPOCHAVE ch, PONT *pai)`**: Busca não recursivamente um nó com a chave `ch` e retorna o nó e seu pai.  
- **`maiorAEsquerda(PONT p, PONT *ant)`**: Retorna o nó com a maior chave à esquerda do nó `p` e atualiza o nó antecessor.  
- **`excluirAVL(PONT* raiz, TIPOCHAVE ch, bool* alterou)`**: Remove o nó com a chave `ch` e ajusta o balanceamento da árvore AVL.  
- **`destruirAux(PONT subRaiz)`**: Libera recursivamente a memória de uma subárvore iniciada no nó `subRaiz`.  
- **`destruirArvore(PONT *raiz)`**: Libera toda memória de uma árvore e redefine sua raiz como `NULL`.  
- **`inicializar(PONT *raiz)`**: Inicializa a árvore, definindo a raiz como `NULL`.  
---

### Funções Implementadas

- **`exibirPorNivel(PONT raiz)`**: Exibe os elementos da árvore por nível (em largura) utilizando uma fila.  
- **`impressaoGrafica(PONT raiz, int nivel, int isDir)`**: Realiza uma impressão gráfica da árvore em formato textual com indentação.  
- **`contarNos(PONT raiz)`**: Retorna o número total de nós presentes na árvore.  
- **`verificarAVL(PONT raiz)`**: Verifica se a árvore é AVL (balanceada) retornando `true` ou `false`.  
- **`nivelNo(PONT raiz, TIPOCHAVE ch)`**: Retorna o nível do nó que contém a chave `ch` ou `-1` se o nó não estiver na árvore.  
- **`listarIntervalo(PONT raiz, int a, int b)`**: Lista os elementos da árvore que estão dentro do intervalo `[a, b]`.  
- **`contarFolhas(PONT raiz)`**: Retorna o número de folhas presentes na árvore.  
- **`encontrarMinimo(PONT raiz)`**: Retorna o menor valor presente na árvore.  
- **`encontrarMaximo(PONT raiz)`**: Retorna o maior valor presente na árvore.  
- **`buscarKesimoMenor(PONT raiz, int k)`**: Retorna o k-ésimo menor valor na árvore, se existir; caso contrário, retorna `-1`.  
- **`mesmoNivel(PONT raiz, TIPOCHAVE x, TIPOCHAVE y)`**: Verifica se dois valores estão no mesmo nível na árvore, retornando `true` ou `false`.  
- **`somaValores(PONT raiz)`**: Calcula e retorna a soma de todos os valores presentes na árvore.  

### Observações Importantes

#### Fila como Estrutura Auxiliar

A implementação utiliza uma estrutura auxiliar de fila, definida nos arquivos `fila.h` e `fila.c`, para suportar operações específicas na árvore, principalmente aquelas que envolvem a navegação por nível. A fila desempenha um papel fundamental na organização dos nós da árvore e permite o processamento sequencial em largura.

As funções que utilizam essa estrutura são `exibirPorNivel` e `mesmoNivel`.

#### Função `main()`

A função `main()` contém os testes para verificar o funcionamento das funções implementadas no programa. Nela, diversas funcionalidades da árvore AVL são testadas, como inserção, contagem de nós, verificação do balanceamento e operações específicas.

Embora esses testes sejam fundamentais para validar o comportamento correto do código e da estrutura AVL, é importante destacar que a criação e utilização da função `main()` não foi solicitada no escopo original da atividade. Ela foi incluída apenas para fins de verificação e demonstração.

## Considerações Finais

Entre as funções desenvolvidas, a função de impressão gráfica textual (`impressaoGrafica`) destacou-se como a mais interessante de implementar. Durante as discussões em sala de aula, foi abordada a possibilidade de representar a árvore graficamente de forma horizontal, similar ao modo como Árvores Binárias são tradicionalmente visualizadas. Veja o exemplo abaixo:

![Exemplo de representação horizontal de árvore AVL](imagens/avl-tree-horizontal.png)

**Fonte:** [GeeksforGeeks: AVL Tree Data Structure](https://www.geeksforgeeks.org/introduction-to-avl-tree/)

Porém, após estudar as lógicas e diferentes abordagens de implementação, eu conclui que a impressão gráfica vertical, como está implementada no código, apresenta maior facilidade e simplicidade de execução por diversos motivos:

- **Menos Comparações:** A impressão vertical exige poucas comparações (como `if` e `else`), graças a uma lógica mais direta. Por exemplo, os espaços são definidos com base no nível do nó que será impresso. Isso permite a utilização de um laço de repetição `for`, com `n` sendo equivalente ao nível do nó, padronizando o processo e reduzindo a necessidade de verificações adicionais.

- **Desconsideração do Tamanho do Número:** Na impressão horizontal, números grandes, como 1389240, podem desconfigurar a representação visual da árvore. Na impressão vertical, essa preocupação não existe, já que os números são posicionados individualmente, mantendo sempre uma organização clara e consistente.

- **Clareza na Representação Visual:** A disposição vertical simplifica a visualização dos níveis da árvore, deixando evidente a hierarquia entre os nós. Cada nível é facilmente distinguível, favorecendo a compreensão da estrutura por parte do usuário.

- **Menor Complexidade de Alinhamento:** Enquanto a impressão horizontal demanda ajustes extremamente precisos para alinhar os nós, principalmente em árvores com muitos níveis ou números grandes, a abordagem vertical elimina essa dificuldade, pois cada nó ocupa sua posição em um formato fixo.

Exemplo de representação vertical:

![Exemplo de representação vertical de árvore AVL](imagens/avl-tree-vertical.png)

**Fonte:** Saída da função `main()` implementada no código `avl.c`.