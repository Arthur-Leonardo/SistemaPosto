# SistemaPosto
Trabalho de Algoritmos I, sistema de um posto feito com a linguagem C, no Dev-C++.

Este é o projeto do posto de Gasolina, neste projeto a ideia será de simular como se o operador da execução fosse um caixa
então sendo assim, na tela tem de mostrar umas boas vindas como questão Primária, exemplo:
------------------------------------------------------------------------------------------------------------------------

OBS: A primeira coisa que tem que imprimir no programa, é perguntar ao caixa, qual seria o troco para dar aos clientes

"Informe o caixa troco: (aqui tem que ser armazenado o troco que o caixa tem para dar)"

------------------------------------------------------------------------------------------------------------------------


Bem vindo aos Postos Tradição! escolha a opção que você deseja: 
1 - Combustivel
2 - Mercadoria
3 - Fechar caixa

(Qualquer numero diferente de 1 ou de 2, informe que o valor digitado é incorreto e repita a "pergunta")
---------------------------------------------------------------------------------------------------------------------------
Vamos supor que o "cliente" tenha optado pela opção 1, (Combustivel)
o programa tera de mostrar o seguinte:
---------------------------------------------------------------------------------------------------------------------------
Qual combustivel você deseja? (digite a abreviação da sigla)

GC - Gasolina Comum		- R$6,10 p/litro
GA - Gsolina Aditivada		- R$6,20 p/litro
DS - Diesel s10			- R$6,00 p/litro
ET - Etanol			- R$4,40 p/litro

(operador (caixa) assim, digitaria a sigla do cobustivel que o consumidor irá comprar)

seria legal ter a opção de "voltar", caso o consumidor não deseje combustivel e queira voltar para a primeira tela
mas pelo proprio trabalho ja ser complexo, fica seu criterio realizar esta operação, só uma ideia que tive na hora kk
---------------------------------------------------------------------------------------------------------------------------
Quantos reais de combustivel você deseja?
(o operador colocaria o suposto numero que o consumidor relatou em reais, como são reais, tem que ser float kk)
o sistema tem que fazer o seguinte calculo para descobrir a litragem comprada do combustivel:

(Reais combustivel / preço combustivel) = Litragem 

(se o numero for 0 ou menor, repetir a pergunta)
---------------------------------------------------------------------------------------------------------------------------
após isso, fazer a seguinte pergunta:

Deseja algo a mais? (S/N)
---------------------------------------------------------------------------------------------------------------------------
CASO O CLIENTE DIGITAR "S" (Sim) voltar ao inicio e repetir a pergunta inicial
---------------------------------------------------------------------------------------------------------------------------
Postos Tradição! escolha a opção que você deseja: 
1 - Combustivel
2 - Mercadoria
---------------------------------------------------------------------------------------------------------------------------
CASO O CLIENTE ESCOLHA A OPÇÃO 2 (Mercadoria)

Qual mercadoria você deseja?

1- Bala 	R$0,20
2- Pirulito 	R$0,50
3- Chocolate 	R$5,00
4- Salgadinho   R$3,00
5- Mentos	R$2,50
6- Voltar

após o operador escolher a mercadoria, realizar a pergunta:
Quantas unidades desta mercadoria você deseja? (assim, ler o numero de quantidade da mercadoria, se o numero for 0 ou menor, mostrar a mensagem

"Quantidade incorreta!" e repetir a pergunta de quantas mercadorias o cliente deseja
--------------------------------------------------------------------------------------------------------------------- 
Deseja algo a mais? (S/N)
até que a resposta seja "N" (Não)
---------------------------------------------------------------------------------------------------------------------------
SE O CLIENTE DIGITAR "N" (Não)
---------------------------------------------------------------------------------------------------------------------------
Qual a forma de pagamento?

1 - Dinheiro
2 - Debito
3 - Credito
4 - Pix

(assim o operador digita o numero na qual a forma de pagamento é aceita pelo cliente)
Nosso sistema não vai ter opção de pagar com duas formas de pagamento.... e qualquer numero diferente de 1 até 4:

"Forma de pagamento desconhecida, escolha a opção de 1 à 4! (repetir a pergunta da forma de pagamento) "
---------------------------------------------------------------------------------------------------------------------------
DESCONTO

Deseja dar desconto? (S/N)  (Se a resposta for Não, avançe a etapa, se for SIM realize a instrução da linha abaixo desta)

Qual a porcentagem de desconto na venda? (informar porcentagem de desconto para o valor total da compra, se o valor for 0 ou menor falar que o valor do desconto é incorreto)
após isso seguir
---------------------------------------------------------------------------------------------------------------------------

SE O CLIENTE ESCOLHER DINHEIRO
Quantia de dinheiro
calcular o troco a ser dado para o cliente

OBS: o certo seria o caixa ter um troco no caixa para dar, e nos teriamos de registrar isso (no caso registrar um valor para o caixa dar em dinheiro no começo deste programa para os clientes), mas como isso é muuuuita mão, aqui nos vamos supor que o caixa vá ter esse dinheiro para dar para troco
---------------------------------------------------------------------------------------------------------------------------
SE O CLIENTE ESCOLHER DEBITO OU CREDITO OU PIX:
-Aperte qualquer tecla para confirmar o pagamento
(o operador caixa, pode assim apertar qualquer tecla, insinuando que o pgamento foi feito)
---------------------------------------------------------------------------------------------------------------------------
MENSAGEM DO FINAL DA COMPRA (IMPORTANTE)

Sua compra foi finalizada!

Produtos:
Produto 1 R$ 00,00 < aqui informe o preço da mercadoria
quantidade: 2 < aqui informe a quantidade do produto
 
Produto 2 RS 00,00 
quantidade: 6
(aqui tem que ter os produtos)

Forma de pagamento
(Aqui tem que mostrar a forma de pagamento escolhida pelo cliente

Valor total: (Valor total da compra)

Desconto: (imprimir o desconto, mesmo que seja 0 ou negativo
---------------------------------------------------------------------------------------------------------------------------

SE O CAIXA ESCOLHER A OPÇÃO 3 - FECHAR CAIXA

Informe a quantia de dinheiro final do caixa: (aceitar QUALQUER VALOR, até mesmo os negativos)

a partir dessa pergunta, mostrar o relatório de fechamento de caixa

TOTAL VENDAS: (aqui a soma de todas as vendas)

QUANTIDADE DE MERCADORIAS VENDIDAS: (mostrar a quantidade das mercadorias vendidas)

LITRAGEM VENDIDA: (mostrar a quantidade de litros ao total vendido)
(Isso aqui é se quiser fazer, opcional
GC : LITRAGEM VENDAS NO GC
GA : LITRAGEM VENDAS NO GA
ET : LITRAGEM VENDAS NO ET
DS : LITRAGEM VENDA NO DS

DINHEIRO INFORMADO: (A quantia informada em dinheiro... seria a quantia de dinheiro informada no final do caixa)
DINHEIRO VENDA: (Aqui tem que mostrar o total das vendas que foram feitas em forma de pagamento dinheiro)

DEBITO: (Aqui tem que mostrar o total das vendas que foram feitas em forma de pagamento DEBITO)

CREDITO:(Aqui tem que mostrar o total das vendas que foram feitas em forma de pagamento CREDITO)

PIX: (Aqui tem que mostrar o total das vendas que foram feitas em forma de pagamento PIX)

QUEBRA: (aqui tem que fazer um calculo basico de subtração, apenas realizar o (DINHEIRO INFORMADO - DINHEIRO VENDA), que assim vai mostrar se teria uma quebra no caixa




