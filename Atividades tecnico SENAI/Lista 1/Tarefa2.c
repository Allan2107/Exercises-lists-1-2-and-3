#include <stdio.h>
#include <locale.h>

int main(void) {

	char nome[40],endere�o[40],CEP[40],telefone[40];
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite seu endere�o: ");
	scanf("%s",&endere�o);
	printf("Digite seu CEP: ");
	scanf("%s",&CEP);
	printf("Digite seu telefone: ");
	scanf("%s",&telefone);
	
	printf("\n\nO seu nome � %s\n", &nome);
	printf("O seu endere�o � %s\n", &endere�o);
	printf("O seu CEP � % s", CEP);
	printf("      O seu telefone � %s", telefone);
	
	return 0;
}
