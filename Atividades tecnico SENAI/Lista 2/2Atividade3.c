#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(void) {
	int n�mero, n�mero2;
	
	srand(time(NULL));
	n�mero = rand() % 990 + 10;
	n�mero2 = rand() % 990 + 10;
	
	setlocale(LC_ALL,"portuguese");
	printf("N�mero aleat�rio: %d\n", n�mero);
	printf("N�mero aleat�rio: %d\n", n�mero2);
	
	if (n�mero >= n�mero2){
		printf("\n%d � maior do que %d", n�mero,n�mero2);
	}
	else{
		printf("\n%d � maior do que %d", n�mero2,n�mero);
	}
	
	return 0;
}
