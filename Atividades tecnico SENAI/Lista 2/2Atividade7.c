#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	int numero,random;
	setlocale(LC_ALL,"portuguese");
	
	srand(time(NULL));
	printf("Tente adivinhar um n�mero aleat�rio de 1 a 10: \n");
	scanf("%d",&numero);
	random = rand() % 10 + 1;
	printf("\nN�mero aleat�rio: %d\n");

	if(random == numero){
		printf("parab�ns voc� acertou");
	}
	else {
		printf("\nQue azar voc� errou");
	}
	return 0;
	
}
