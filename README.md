## Equipe StockBot:
- Gabriel Camargo - 202302539
- João Gabriel Abreu - 202302553
- Lavínia Rocha - 202406934

## Controle de Inventário Doméstico (CID)

### Sobre o Projeto
O StockBot é um sistema automatizado para controle e monitoramento de inventário doméstico, projetado para organizar e acompanhar itens essenciais como alimentos, produtos de limpeza e outros suprimentos. Integrando sensores com estruturas de dados, o robô coleta e processa informações em tempo real, destacando itens em baixa quantidade ou próximos ao vencimento. Essa solução auxilia na gestão eficiente de recursos domésticos, evitando desperdícios e otimizando o planejamento de compras.

Com o uso de listas, filas e árvores, o StockBot organiza os dados de maneira eficiente, priorizando itens críticos para que o usuário possa tomar decisões informadas. A proposta também explora conceitos de alocação dinâmica de memória, garantindo desempenho mesmo em sistemas embarcados com recursos limitados.

### Tecnologias Utilizadas
- **Linguagem C**: Para o controle do sistema e manipulação eficiente de dados
- **Sensores**: Para coleta de informações sobre o inventário
- **Estruturas de Dados**:
  - Listas: Para catalogação dos itens
  - Filas: Para priorização de ações, como reabastecimento de produtos
  - Árvores: Para busca e ordenação eficiente dos dados
- **Sistemas Embarcados**: Para integração do robô em ambientes domésticos

### Como Funciona
- **Coleta de Dados**: Sensores monitoram o status dos itens no inventário, registrando quantidade e validade
- **Processamento de Informações**: Os dados coletados são armazenados em estruturas como listas, filas e árvores
- **Classificação e Prioridade**: O sistema identifica itens críticos (em baixa quantidade ou vencidos) e destaca para o usuário
- **Interface de Usuário**: Exibição clara do inventário e emissão de alertas para facilitar o gerenciamento

### Objetivos
1) Demonstrar a aplicação prática de estruturas de dados no gerenciamento de inventário em um contexto de robótica doméstica
2) Explorar o uso de sensores para coleta de dados em tempo real
3) Apresentar um sistema funcional que utiliza métodos computacionais para resolver problemas cotidianos

### Entregas
As entregas são sempre submetidas no GitHub, no link disponível também no Classroom.
Na submissão final, serão entregues os seguintes três itens (vide cronograma):
- [X] 04/12: Relatório técnico (Documento escrito em formato Markdown, até 4 páginas)
- [X] 04/12: Código fonte (Arquivos dos códigos desenvolvidos)
- [X] 05/12: Slides (Documento editável da apresentação oral em link, PPTx ou LATEX)

### Cronograma
Os entregáveis semanais serão encaminhados nas seguintes datas:
- [X] 10/11: Formulário de validação da proposta
- [X] 22/11: Seção I (Introdução) e Seção III (Metodologia)
- [X] 29/11: Seção II (Fundamentos teóricos) e Seção IV (Resultados)
- [X] 04/12: Relatório completo, contendo a Seção V (Conclusões) e o código fonte
- [X] 05/12: Revisão entre pares (peer-review) e Slides
- [ ] 06/12: Apresentação final

### Organização do Repositório
- src/: Código-fonte do sistema e scripts relacionados
- docs/: Relatórios técnicos e documentação em formato Markdown
- slides/: Apresentação do seminário em formato editável (PPTX ou LATEX)
- assets/: Imagens, diagramas e outros materiais complementares
- build/: Diretório contendo os arquivos gerados e utilizados pela CMakeLists.txt para configurar e compilar o projeto

### Como executar
Para rodar o código, siga esses passos:

1. **Instale o CMake**:
   - Certifique-se de que você tem o CMake instalado no seu sistema. Você pode baixá-lo em [cmake.org](https://cmake.org/download/).

2. **Crie um Diretório de Build**:
   - Abra um terminal e navegue até o diretório raiz do seu projeto.
   - Crie um diretório de build e navegue até ele:
     ```sh
     mkdir build
     cd build
     ```

3. **Gere os Arquivos de Build**:
   - Execute o CMake para gerar os arquivos de build:
     ```sh
     cmake ..
     ```

4. **Compile o Projeto**:
   - Execute o seguinte comando para compilar o projeto:
     ```sh
     make
     ```

5. **Execute o Executável**:
   - Após a compilação ser concluída, você pode executar o arquivo gerado:
     ```sh
     ./stockbot
     ```

Isso irá compilar e executar o seu projeto StockBot baseado no arquivo [`src/main.c`](src/main.c).
