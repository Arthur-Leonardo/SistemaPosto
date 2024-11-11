#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <conio.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int op, n = 0, p=0, i = 0, merc = 0, quantMerc [5], quantProd =0, mercadorias[5] = {0,0,0,0,0};
	float troco, pCombustivel, rCombustivel[5], valMerc[5], pedido[5], totalMerc[5], litragem[5], totalPedido =0, totalVendas=0, totalLitragem=0;
	char tipo;
	printf("\n Informe o caixa troco: ");
	scanf("%f", &troco);
	printf("\n Bem Vindo aos Postos Tradição! Escolha a opção que você deseja:");
	do{
		printf("\n 1 - Combustivel");
		printf("\n 2 - Mercadoria");
		printf("\n 3 - Finalizar Pedido");
		printf("\n 4 - Fechar Caixa");
		printf("\n Opcao: ");
		scanf("%d", &op);
		switch(op){
		case 1:
			do{
				printf("\n Qual combustivel você deseja? (digite a abreviação da sigla):");
				printf("\n C - Comum           - R$6,10 p/litro");
				printf("\n A - Aditivada       - R$6,20 p/litro");
				printf("\n D - Diesel          - R$6,00 p/litro");
				printf("\n E - Etanol          - R$4,40 p/litro");
				printf("\n Opcao: ");
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
				printf("\n Opcao: ");
				scanf("%d", &merc);
				if(merc <=0 && merc >5){
					printf("\n Opção inválida, tente novamente.");
				}
			}while(merc <= 0 && merc > 5);
			do{
				printf("\n Quantas unidades desta mercadoria você deseja? ");
				scanf("%d", &quantMerc[quantProd]);
				if(quantMerc <= 0){
					printf("\n Quantidade inválida! Redigite.");
						}
			}while(quantMerc[quantProd] <= 0);
			
			switch(merc){
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
				mercadorias[merc - 1] += 1 * quantMerc[quantProd];
				totalMerc[quantProd] = quantMerc[quantProd] * valMerc[quantProd];
				quantProd++;
				break;
		case 3:
			system("cls");
			printf("\n Pedido %d", n+1);
			printf("\n Sua compra foi finalizada!");
			if(quantProd != 0){
				for(i=0; i<quantProd; i++){
					totalPedido += totalMerc[i];
					printf("\n Produto %d:",i+1);
					printf("\n %d UN X %.2f         Total: %.2f R$", quantMerc[i], valMerc[i], totalMerc[i]);
				}
			}
			pedido[n] = totalPedido + rCombustivel[n];
			printf("\n Valor de combustível total: %.2f R$ \n", rCombustivel[n]);
			printf("\n Valor total do pedido: %.2f R$\n", pedido[n]); 
			printf("\n Bem Vindo aos Postos Tradição! Escolha a opção que você deseja:");
			n++;
			quantProd = 0;
			totalPedido = 0;
			break;
		case 4:
			for(i=0;i<n; i++){
				totalVendas += pedido[i];
				totalLitragem += litragem[i];
			}
			printf("\n Relatório de fechamento de Caixa: ");
			printf("\n Total de Pedidos: %d", n);
			printf("\n Total de Vendas: %.2f R$", totalVendas);
			printf("\n\n Quantidade de mercadorias vendidas:");
			printf("\n Bala: %d", mercadorias[0]);
			printf("\n Pirulito: %d", mercadorias[1]);
			printf("\n Chocolate: %d", mercadorias[2]);
			printf("\n Salgadinho: %d", mercadorias[3]);
			printf("\n Refrigerante: %d", mercadorias[4]);
			printf("\n Litragem vendida: %.2f", totalLitragem);
			break;
		default:
			printf("\n Opção Inválida, favor digitar novamente.");
			}
	}while(op != 4);
	return 0;
}

