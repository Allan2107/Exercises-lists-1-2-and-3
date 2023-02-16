#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	int numero,random;
	setlocale(LC_ALL,"portuguese");
	
	srand(time(NULL));
	printf("Tente adivinhar um número aleatório de 1 a 10: \n");
	scanf("%d",&numero);
	random = rand() % 10 + 1;
	printf("\nNúmero aleatório: %d\n");

	if(random == numero){
		printf("parabéns você acertou");
	}
	else {
		printf("\nQue azar você errou");
	}
	return 0;
	
}
