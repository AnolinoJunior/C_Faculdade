🃏 Super Trunfo de Cidades em C
Projeto prático em linguagem C para construir um jogo de Super Trunfo de Cidades, com foco na leitura de dados, cálculos matemáticos, estruturas condicionais, menus interativos e comparações complexas entre atributos. A atividade foi dividida em níveis progressivos, que simulam desafios reais de desenvolvimento em C.

🧠 Conceitos de C Abordados
Tipos de dados básicos: int, float, char, unsigned long int, char[]

Leitura de dados do teclado com scanf

Impressão de dados com printf

Operações matemáticas básicas e com ponto flutuante

Conversão de tipos (casting)

Uso de operadores relacionais (<, >, ==, etc.)

Estruturas de decisão: if, else, switch

Operador ternário (condição ? valor1 : valor2)

Estruturação do código, usabilidade e legibilidade

Tratamento de entrada do usuário (com default no switch)

🧱 Estrutura do Projeto
O projeto foi desenvolvido em etapas progressivas, cada uma com foco em um conjunto de habilidades. Veja abaixo os principais marcos do projeto:

🔰 Nível Novato – Cadastro de Cartas
✅ Conceitos: entrada/saída, variáveis, tipos primitivos

Neste primeiro desafio, desenvolvi um sistema simples para cadastrar duas cartas com os seguintes dados:

Estado (char)

Código da Carta (string)

Nome da Cidade (string)

População (int)

Área em km² (float)

PIB em bilhões (float)

Pontos turísticos (int)

📌 O foco foi praticar scanf, printf e armazenar dados corretamente em variáveis.

🧮 Nível Aventureiro – Cálculo de Indicadores
✅ Conceitos: operações aritméticas, ponto flutuante

Adicionei a lógica para calcular e exibir:

Densidade Populacional: população ÷ área

PIB per Capita: PIB ÷ população

🎯 Os resultados foram formatados com duas casas decimais. Nenhuma estrutura de repetição ou decisão foi usada.

⚖️ Nível Básico – Comparando Atributo Único
✅ Conceitos: if, else, comparação simples

Adicionei a funcionalidade para comparar um único atributo entre duas cartas (por exemplo, população ou PIB), determinando a carta vencedora. As regras são:

Para todos os atributos (exceto densidade): vence o maior.

Para densidade populacional: vence o menor.

A escolha do atributo foi feita diretamente no código.

🔘 Nível Intermediário – Menu Interativo
✅ Conceitos: switch, if-else aninhado

Implementei um menu interativo onde o jogador pode escolher o atributo para comparar. O código trata o atributo escolhido e aplica a regra correspondente:

Atributo com maior valor vence

Exceto Densidade Populacional (menor valor vence)

🧭 O menu foi feito com switch, e as comparações com if-else.

🧬 Nível Mestre – Super Poder e Comparação Geral
✅ Conceitos: conversão de tipos, comparações múltiplas, lógica composta

Implementei o cálculo do Super Poder, uma métrica baseada em:

População

Área

PIB

Pontos Turísticos

PIB per Capita

Inverso da Densidade Populacional

📊 A carta com maior Super Poder vence. Foram comparados todos os atributos, e os vencedores de cada item foram exibidos com 1 (vitória da Carta 1) ou 0 (vitória da Carta 2).

🧠 Nível Final – Comparação com Dois Atributos
✅ Conceitos: operador ternário, menus dinâmicos, lógica robusta

Este desafio final envolveu:

Escolher dois atributos diferentes via menus dinâmicos

Comparar os dois atributos

Somar os valores e determinar a carta vencedora

Tratar empates

Garantir que o segundo atributo escolhido fosse diferente do primeiro

🌟 Foi o maior desafio lógico, integrando todos os conceitos estudados.
