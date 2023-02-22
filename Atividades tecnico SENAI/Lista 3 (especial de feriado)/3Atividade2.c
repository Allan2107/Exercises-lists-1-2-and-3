#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main(void) {

int a;
setlocale(LC_ALL,"portuguese");

printf("Digite sua idade: ");
scanf("%d", &a);

if( a > 18){
	printf("\n\nVocê é maior de idade\n\n");
} 
else {
	printf("\n\nVocê é menor de idade\n\n");
}

return 0;

}
