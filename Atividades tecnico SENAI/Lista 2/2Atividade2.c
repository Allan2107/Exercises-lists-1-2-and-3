#include <stdio.h>
#include <locale.h>

int main(void) {
int batata,cenora,soma;
setlocale(LC_ALL,"portuguese");

printf("Digite um número: ");
scanf("%d", &batata);
printf("Digite um segundo número: ");
scanf("%d", &cenora);

soma = batata + cenora;

printf("\n\nA soma é %d", soma);

return 0;

}
