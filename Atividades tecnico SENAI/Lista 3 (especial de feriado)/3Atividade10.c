#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

int a,b;
setlocale(LC_ALL,"portuguese");

printf("Digite sua idade: ");
scanf("%d", &a);
printf("Digite sua renda mensal: ");
scanf("%d", &b);

if(a >= 18 && b <= 1500){
	printf("\n\nParab�ns, voc� � eleg�vel para receber o benef�cio!\n\n");
}
else{
	printf("\n\nInfelizmente, voc� n�o � eleg�vel para receber o benef�cio.\n\n");
}

return 0;

}
