#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main(void) {

int a,b;
setlocale(LC_ALL,"portuguese");

printf("Digite um n�mero: ");
scanf("%d", &a);
printf("Digite um segundo n�mero: ");
scanf("%d", &b);


if (a >= b){
		printf("\n\n%d � maior do que %d\n\n", a,b);
	}
	else{
		printf("\n\n%d � maior do que %d\n\n", b,a);
	}
	
	return 0;
}
