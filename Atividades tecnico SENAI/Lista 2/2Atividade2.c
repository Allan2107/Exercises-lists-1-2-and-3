#include <stdio.h>
#include <locale.h>

int main(void) {
int batata,cenora,soma;
setlocale(LC_ALL,"portuguese");

printf("Digite um n�mero: ");
scanf("%d", &batata);
printf("Digite um segundo n�mero: ");
scanf("%d", &cenora);

soma = batata + cenora;

printf("\n\nA soma � %d", soma);

return 0;

}
