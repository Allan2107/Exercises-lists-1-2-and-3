#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <string.h>

int main(void) {

char chimas[88];
setlocale(LC_ALL,"portuguese");

printf("Digite seu nome: ");
scanf("%s", chimas);


if(strcasecmp(chimas, "Jo�o")==0 || strcasecmp(chimas, "Maria")==0 || strcasecmp(chimas, "maria")==0 || strcasecmp(chimas, "jo�o")==0 || strcasecmp(chimas, "Joao")==0 || strcasecmp(chimas, "joao")==0){
	printf("\n\nSeu nome � Jo�o ou Maria, parab�ns voc� � 1 em 554 pessoas que possuem o nome Jo�o ou Maria no mundo\n\n", chimas);
}
else{
	printf("\n\nSeu nome n�o � Jo�o ou Maria\n\n", chimas);
}

return 0;

}
