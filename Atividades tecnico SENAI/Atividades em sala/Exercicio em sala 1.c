#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main(void) {

	int chimas,terere;
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d", &chimas);
	printf("Digite um segundo n�mero: ");
	scanf("%d", &terere);
	
 if(chimas == 5 && terere == 10){
		printf("\n5 ou 10\n");
	}
	
	else if(terere > chimas){
		printf("\n\nO primeiro � menor\n");
	}
	else {
		printf("\n\n O segundo � menor\n");
	}
	
	return 0;
	
}
	
	
	
	
	
