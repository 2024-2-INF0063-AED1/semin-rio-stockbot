# Relatório

**Gabriel Camargo - 202302539**  
**João Gabriel Abreu - 202302553**  
**Lavínia Rocha - 202406934**

---

## Seção I: Introdução

### Problema  
O problema abordado é a gestão ineficiente de inventário doméstico, que resulta em desperdício de recursos, como alimentos vencidos ou compras desnecessárias, e na falta de itens essenciais no momento de necessidade. Este problema se aplica aos seguintes contextos:  
- **Residências**: Para monitorar o estoque de alimentos, produtos de limpeza e outros suprimentos.  
- **Pequenos negócios**: Como padarias, mercadinhos e restaurantes que precisam gerenciar estoques de maneira eficiente.  

### Dataset  
- **Base de dados auxiliar**: Catálogo inicial com nome, quantidade e data de validade dos produtos.  

### Métodos  
- **Manipulação de dados**: Inserção, remoção e busca eficiente utilizando listas e listas encadeadas.  
- **Análise de prioridade**: Implementação de filas de prioridade para destacar itens em baixa quantidade ou próximos ao vencimento.  

### Avaliação  
Os resultados do sistema serão medidos utilizando as seguintes métricas:  
- **Tempo de resposta**: Verificar a eficiência das operações de busca, inserção e priorização.  
- **Usabilidade**: Avaliar a clareza da interface e sua utilidade.  

---

## Seção II: Fundamentos Teóricos

### Listas  
Estruturas lineares usadas para armazenar itens do inventário. São eficientes para inserção e remoção, adequadas para gerenciar o estoque.  

### Lista Encadeada  
É composta por várias células que estão interligadas através de ponteiros, ou seja, cada célula possui um ponteiro que aponta para o endereço de memória da próxima célula.  

### Algoritmos e Técnicas  
- **Busca**: A busca linear é utilizada para procurar itens nas listas. Podem ser aplicados algoritmos como busca em pilha, que podem simular a busca em estruturas lineares.  
- **Ordenação**: Algoritmo como Bubble Sort foi utilizado para ordenar o inventário de forma eficiente.  
- **Filas de Prioridade**: A lista encadeada foi utilizada para processar itens com maior urgência, como produtos com quantidade baixa ou próximos ao vencimento.  

### Avaliação da Solução  
- **Desempenho**: O sistema será avaliado pelo tempo de resposta das operações e pela eficiência das estruturas de dados.  
- **Escalabilidade**: O desempenho será testado com diferentes volumes de dados no inventário.  
- **Usabilidade**: A interface será avaliada quanto à clareza e facilidade de interação.  

---

## Seção III: Metodologia  
Foi utilizado um diagrama de fluxo (disponível em Apêndices I) para mostrar o passo a passo executado para chegar na solução do problema.  

---

## Seção IV: Resultados e Conclusões  

### Principais Resultados Alcançados  

#### Cadastro de Produtos  
O programa realiza o cadastro de produtos com informações como nome, quantidade e validade, verificando a conformidade do formato de data (dd/mm/aaaa).  

#### Ordenação por Validade e Quantidade  
Os algoritmos de ordenação funcionaram corretamente, organizando os produtos:  
- **Por validade**: Priorizando os itens com datas de vencimento mais próximas.  
- **Por quantidade**: Organizando do maior para o menor estoque.  

#### Tabela de Exemplo do Resultado (Ordenada pela Validade dos Produtos):  

| Produto           | Quantidade | Validade     | Dias restantes |
|-------------------|------------|--------------|----------------|
| suco de uva       | 2          | 03/09/2024   | -1             |
| vinagre           | 1          | 02/05/2024   | -1             |
| suco de laranja   | 3          | 07/12/2024   | 3              |
| chocolate         | 12         | 22/12/2024   | 18             |
| arroz             | 5          | 24/12/2024   | 20             |
| feijão            | 10         | 15/02/2025   | 73             |
| café              | 8          | 27/02/2025   | 85             |
| macarrão          | 4          | 26/07/2026   | 599            |  

---

## Seção V: Conclusões  

O projeto desenvolvido foi um sistema de gerenciamento de inventário simples, que permite o armazenamento de produtos, com a possibilidade de ordenação desses produtos por dois critérios: proximidade da validade e quantidade em estoque. Durante a implementação, foi possível aplicar conceitos importantes de estruturas de dados, como listas encadeadas, e técnicas de ordenação.  

### Lições Aprendidas  
- **Uso de Estruturas de Dados**: A implementação das listas encadeadas mostrou-se essencial para a criação de um sistema dinâmico, no qual os produtos são inseridos em tempo real e o inventário pode ser modificado facilmente.  
- **Ordenação e Eficiência**: A escolha de algoritmos de ordenação simples, como o método de ordenação por troca, ajudou a entender os princípios básicos de organização de dados. No entanto, ao lidar com grandes volumes de produtos, a eficiência do algoritmo deve ser considerada.  

### Desafios  
- **Gerenciamento de Erros**: Embora a validação do formato de entrada tenha sido aplicada, ainda existem melhorias a serem feitas, especialmente na manipulação de dados inválidos ou inesperados, o que poderia causar erros no comportamento do programa.  

### Melhorias Futuras  
- **Armazenamento Persistente**: Atualmente, os dados são perdidos quando o programa é encerrado. Implementar a funcionalidade de persistência de dados por meio de arquivos seria uma melhoria importante.  
- **Gestão de Produtos com Estoque Baixo**: A adição de uma funcionalidade para alertar os usuários sobre produtos com estoque baixo ou com validade próxima poderia ser um recurso útil no sistema.  

---

## Referências  
- **GEKSFORGEEKS**. *Data Structures*. Disponível em: [GeeksforGeeks](https://www.geeksforgeeks.org/data-structures/). Acesso em: 3 dez. 2024.  
- **TUTORIALSPOINT**. *Data Structures and Algorithms*. Disponível em: [TutorialsPoint](https://www.tutorialspoint.com/data_structures_algorithms/index.htm). Acesso em: 3 dez. 2024.  
- **WIKIPEDIA**. *Sorting algorithm*. Disponível em: [Wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm). Acesso em: 3 dez. 2024.  
- **BUENO, Gabriel**. Repositório de Estruturas de Dados e Algoritmos. Disponível em: [Repositório Gabriel Bueno](https://gabrielbueno072.github.io/rea-aed/index.html). Acesso em: 3 dez. 2024.  

---

## Apêndices  

### I. Diagrama de Fluxo  
![image](https://github.com/user-attachments/assets/84b27a32-a351-4ca5-8950-79dc1650f6d7)

