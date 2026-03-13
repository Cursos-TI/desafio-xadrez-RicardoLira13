#include <stdio.h>

int main(){
	
	//declaração das variaveis das peças	
	int torre, bispo = 1, rainha = 1;
	
	//movimento da torre
	printf("*Movimentação da Torre*\n\n");

	//movimento da torre usando FOR
	for(torre = 1; torre <= 5; torre++){
		printf("Movimento %d - Direita\n", torre);
	}

	printf("-----------------------\n");

	//movimentação do bispo
	printf("*Movimentação do Bispo*\n\n");

	//movimento do bispo usando WHILE
	while(bispo <= 5){
		printf("Movimento %d - Cima/Direita\n", bispo);
		
		bispo++;
	}

	printf("-----------------------\n");

	//movimentação da rainha
	printf("*Movimentação da Rainha*\n\n");

	//movimentação da rainha usando DO WHILE
	do{
		printf("Movimento %d - Esquerda\n", rainha);
		
		rainha++;
		
	}while(rainha <= 8);

	printf("-----------------------\n");

	//Movimentação do Cavalo 
	printf("*Movimentação do Cavalo*\n\n");
	
	//Declaração da variavel de controle DO WHILE
	int cavalo = 1;
	
	//DO WHILE
	do{
		//FOR
		for(int i = 1; i <= 2; i++){
			printf("Movimento %d - Baixo\n", i);
		} //<-- Fim do FOR
		
		printf("Movimento 3 - Esquerda\n");
		cavalo++;
		
	}while(cavalo <= 1);

	printf("\n");

	return 0;
}