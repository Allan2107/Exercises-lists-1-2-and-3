#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main(void) {

int a;
setlocale(LC_ALL,"portuguese");


printf("Digite um n�mero: ");
scanf("%d", &a);

if(a %2 == 0){
	printf("\n\nO n�mero � par\n\n");
}
else{
	printf("\n\nO n�mero � impar\n\n");
}
return 0;

}
