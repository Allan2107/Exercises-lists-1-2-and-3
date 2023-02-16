#include <stdio.h>
#include <locale.h>

int main(void) {

	char nome[40],endereço[40],CEP[40],telefone[40];
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite seu endereço: ");
	scanf("%s",&endereço);
	printf("Digite seu CEP: ");
	scanf("%s",&CEP);
	printf("Digite seu telefone: ");
	scanf("%s",&telefone);
	
	printf("\n\nO seu nome é %s\n", &nome);
	printf("O seu endereço é %s\n", &endereço);
	printf("O seu CEP é % s", CEP);
	printf("      O seu telefone é %s", telefone);
	
	return 0;
}
