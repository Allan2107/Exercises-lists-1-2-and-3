#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main(void) {

int a;
setlocale(LC_ALL,"portuguese");

printf("Digite um número: ");
scanf("%d", &a);

if( a < 0 ){
	printf("\n\nO número é negativo.\n\n");
}
else if( a > 0){
	printf("\n\nO número é positivo\n\n");
}
else if( a == 0){
	printf("\n\nO número é 0\n\n");
}


return 0;

}
