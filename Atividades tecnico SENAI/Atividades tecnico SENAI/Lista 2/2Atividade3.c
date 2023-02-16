#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(void) {
	int número, número2;
	
	srand(time(NULL));
	número = rand() % 990 + 10;
	número2 = rand() % 990 + 10;
	
	setlocale(LC_ALL,"portuguese");
	printf("Número aleatório: %d\n", número);
	printf("Número aleatório: %d\n", número2);
	
	if (número >= número2){
		printf("\n%d é maior do que %d", número,número2);
	}
	else{
		printf("\n%d é maior do que %d", número2,número);
	}
	
	return 0;
}
