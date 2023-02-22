#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

char chimas[88];
int idade;
setlocale(LC_ALL,"portuguese");

printf("Digite seu nome: ");
scanf("%s", &chimas);
printf("\nDigite sua idade: ");
scanf("%d", &idade);

if(idade > 18){
	printf("\n\nVocê é maior de idade\n\n");
} 
else {
	printf("\n\nVocê é menor de idade\n\n");
}

if(strcasecmp(chimas, "João")==0 || strcasecmp(chimas, "Maria")==0 || strcasecmp(chimas, "maria")==0 || strcasecmp(chimas, "joão")==0 || strcasecmp(chimas, "Joao")==0 || strcasecmp(chimas, "joao")==0){
	printf("\n\nSeu nome é João ou Maria, parabéns você é 1 em 554 pessoas que possuem o nome João ou Maria no mundo\n\n", chimas);
}
else{
	printf("\n\nSeu nome não é João ou Maria\n\n", chimas);
}

return 0;

}
