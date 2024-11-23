#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <conio.h>
#define MAX 5

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int op, op2, n, i=0, quantMerc[MAX], quantProd, mercadorias[MAX]={0,0,0,0,0};;
	float cTroco, troco, dinheiro, pCombustivel, rCombustivel[MAX], valMerc[MAX], pedido[MAX] = {0,0,0,0,0}, totalMerc[MAX], litragem[MAX], totalVendas, totalLitragem;
	char tipo;
	
	n = 0;  //variavel referente aos pedidos.
	quantProd = 0; //variavel referente a quantidade de produtos em um pedido.
	totalVendas = 0;  //variavel que armazena o total de valor recebido no dia de todos os pedidos, somando mercadorias e combustivel.
	totalLitragem = 0; //variavel que armazena o total de litragem vendida em um dia em L.
	
	printf("\n Informe o caixa troco: ");
	do{	
		scanf("%f", &cTroco);
		if(cTroco < 0){
			printf("\n Valor inválido, favor digitar um número maior ou igual a 0. \n");
		}
	}while(cTroco < 0);
	printf("\n Bem Vindo aos Postos Tradição! Escolha a opção que você deseja:");
	do{
		printf("\n 1 - Combustivel");
		printf("\n 2 - Mercadoria");
		printf("\n 3 - Finalizar Pedido");
		printf("\n 4 - Fechar Caixa");
		printf("\n Opção: ");
		scanf("%d", &op);
		switch(op){
		case 1:
			do{
				printf("\n Qual combustivel você deseja? (digite a abreviação da sigla):");
				printf("\n C - Comum           - R$6,10 p/litro");
				printf("\n A - Aditivada       - R$6,20 p/litro");
				printf("\n D - Diesel          - R$6,00 p/litro");
				printf("\n E - Etanol          - R$4,40 p/litro");
				printf("\n Opção: ");
				tipo = toupper(getche());
				if(tipo == 'C'){
					pCombustivel = 6.10;
				}else if(tipo == 'A'){
					pCombustivel = 6.20;
				}else if(tipo == 'D'){
					pCombustivel = 6.00;
				}else if(tipo == 'E'){
					pCombustivel = 4.40;
				}else{
					printf("\n Combustível inválido, por favor, redigite.");
				}
			}while(tipo != 'C' && tipo !='A' && tipo !='D' && tipo !='E');
				do{
					printf("\n Quantos reais de combustível você deseja? ");
					scanf("%f", &rCombustivel[n]);
					if(rCombustivel <= 0){
						printf("\n Valor inválido, favor digitar novamente.");
					}
				}while(rCombustivel <= 0);
				litragem[n] = rCombustivel[n]/pCombustivel;
			break;
		case 2:
			do{
				printf("\n Qual mercadoria você deseja?");
				printf("\n 1- Bala 	         - R$0,20");
				printf("\n 2- Pirulito 	     - R$0,50");
				printf("\n 3- Chocolate 	 - R$5,00");
				printf("\n 4- Salgadinho     - R$3,00");
				printf("\n 5- Refrigerante   - R$6,00");
				printf("\n Opção: ");
				scanf("%d", &op2);
				if(op2 <=0 && op2 >5){
					printf("\n Opção inválida, tente novamente.");
				}
			}while(op2 <= 0 && op2 > 5);
			do{
				printf("\n Quantas unidades desta mercadoria você deseja? ");
				scanf("%d", &quantMerc[quantProd]);
				if(quantMerc <= 0){
					printf("\n Quantidade inválida! Redigite.");
						}
			}while(quantMerc[quantProd] <= 0);
			
			switch(op2){
				case 1:
					valMerc[quantProd] = 0.20;
					break;
				case 2:
					valMerc[quantProd] = 0.50;
					break;
				case 3:
					valMerc[quantProd] = 5.00;
					break;
				case 4:
					valMerc[quantProd] = 3.00;
					break;
				case 5:
					valMerc[quantProd] = 6.00;
					break;
				}
				mercadorias[op2 - 1] += quantMerc[quantProd];
				totalMerc[quantProd] = quantMerc[quantProd] * valMerc[quantProd];
				quantProd++; //adiciona mais um produto no pedido atual.
				break;
		case 3:
			do{
				for(i=0; i<quantProd; i++){
					pedido[n] += totalMerc[i];
				}
				pedido[n] += rCombustivel[n];
				printf("\n Valor total do pedido: %.2f R$\n", pedido[n]);
				printf("\n Qual a forma de pagamento?");
				printf("\n 1 - Dinheiro");
				printf("\n 2 - Débito");
				printf("\n 3 - Crédito");
				printf("\n 4 - Pix");
				printf("\n Opção: ");
				scanf("%d", &op2);
				if(op2 < 1 && op2 > 4){
					printf("\n Opção inválida, favor digitar novamente.");
				}
			}while(op2 < 1 && op2 > 4);
			switch(op2){
				case 1:
					do{
					printf("\n Quantia em dinheiro recebida: ");
					scanf("%f", &dinheiro);
					if(dinheiro > pedido[n]){
						troco = dinheiro - pedido[n];
						printf("\n Valor do troco: %.2f \n", troco);
						cTroco += dinheiro - troco;
						system("pause");
					} else if(dinheiro < pedido[n]){
						printf(" valor inválido, favor redigitar.");
					}
					}while(dinheiro < pedido[n]);
					break;
				case 2:
				case 3:
				case 4:
					system("pause");
					break;
			}
			system("cls");
			printf("\n Pedido %d", n+1);
			printf("\n Sua compra foi finalizada!");
			if(quantProd != 0){
				for(i=0; i<quantProd; i++){
					printf("\n Produto %d:",i+1);
					printf("\n %d UN X %.2f         Total: %.2f R$", quantMerc[i], valMerc[i], totalMerc[i]);
				}
			}
			printf("\n Valor de combustível total: %.2f R$", rCombustivel[n]);
			printf("\n Total de litros abastecidos: %.2f L", litragem[n]);
			printf("\n Valor total do pedido: %.2f R$\n", pedido[n]); 
			printf("\n Bem Vindo aos Postos Tradição! Escolha a opção que você deseja:");
			n++; //após finalizar um pedido, é somado na váriavel de pedido, para começar um novo.
			quantProd = 0; //a quantidade de produtos é zerada, pois agora vamos começar um outro pedido
			break;
		case 4:
			system("cls");
			for(i=0;i<n; i++){
				totalVendas += pedido[i];
				totalLitragem += litragem[i];
			}
			printf("\n Relatório de fechamento de Caixa: ");
			printf("\n Total de Pedidos: %d", n);
			printf("\n Total de Vendas: %.2f R$", totalVendas);
			printf("\n Valor final do Caixa Troco: %.2f", cTroco);
			printf("\n\n Quantidade de mercadorias vendidas:");
			printf("\n Bala: %d", mercadorias[0]);
			printf("\n Pirulito: %d", mercadorias[1]);
			printf("\n Chocolate: %d", mercadorias[2]);
			printf("\n Salgadinho: %d", mercadorias[3]);
			printf("\n Refrigerante: %d", mercadorias[4]);
			printf("\n Litragem vendida: %.2f L", totalLitragem);
			break;
		default:
			printf("\n Opção Inválida, favor digitar novamente.");
			}
	}while(op != 4);
	return 0;
}
