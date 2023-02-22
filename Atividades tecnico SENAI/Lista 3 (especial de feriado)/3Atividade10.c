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
	printf("\n\nParabéns, você é elegível para receber o benefício!\n\n");
}
else{
	printf("\n\nInfelizmente, você não é elegível para receber o benefício.\n\n");
}

return 0;

}
