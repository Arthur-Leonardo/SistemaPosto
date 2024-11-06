#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <conio.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int op, pedido[5],n = 0, i, merc = 0, quantMerc = 0, quantProd =0, mercadorias[5] = {0,0,0,0,0};
	float troco, pCombustivel, rCombustivel, valMerc, totalMerc, litragem;
	char tipo;
	printf("\n Informe o caixa troco: ");
	scanf("%f", &troco);
	do{
		printf("\n Bem Vindo aos Postos Tradição! Escolha a opção que você deseja:");
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
					scanf("%f", &rCombustivel);
				}while(rCombustivel <= 0);
				litragem = rCombustivel/pCombustivel;
			break;
		case 2:
			
			do{
				printf("\n Qual mercadoria você deseja?");
				printf("\n 1- Bala 	         R$0,20");
				printf("\n 2- Pirulito 	     R$0,50");
				printf("\n 3- Chocolate 	 R$5,00");
				printf("\n 4- Salgadinho     R$3,00");
				printf("\n 5- Refrigerante   R$6,00");
				printf("\n Opcao: ");
				scanf("%d", &merc);
			}while(merc <= 0 && merc > 5);
			do{
				printf("\n Quantas unidades desta mercadoria você deseja? ");
				scanf("%d", &quantMerc);
				if(quantMerc <= 0){
					printf("\n Quantidade inválida! Redigite.");
						}
			}while(quantMerc <= 0);
			switch(merc){
				case 1:
					valMerc = 0.20;
					break;
				case 2:
					valMerc = 0.50;
					break;
				case 3:
					valMerc = 5.00;
					break;
				case 4:
					valMerc = 3.00;
					break;
				case 5:
					valMerc = 6.00;
					break;
				}
				quantProd++;
				mercadorias[merc - 1] += 1;
				totalMerc = quantMerc * valMerc;
				break;
		case 3:
			
			pedido[n] = totalMerc + litragem;
			printf("\n Pedido %d", n+1);
			printf("\n Sua compra foi finalizada!");
			if(quantProd != 0){
				for(i=0; i<=quantProd; i++){
					printf("Produto %d:",i+1);
					
				}
			}
			printf("\n Valor de combustível total: %.2f \n", litragem);
			n++;
			totalMerc = 0;
			litragem = 0;
			quantMerc = 0;
			valMerc = 0;
			quantProd = 0;
			break;
		case 4:
			
			break;
		default:
			printf("\n Opção Inválida, favor digitar novamente.");
			}
	}while(op != 4);
	return 0;
}
