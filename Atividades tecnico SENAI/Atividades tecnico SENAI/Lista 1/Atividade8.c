#include <stdio.h>
#include <locale.h>

int main(void) {
int numero,numero2,soma;
setlocale(LC_ALL,"portuguese");

printf("Digite um n�mero: ");
scanf("%d", &numero);
printf("Digite um segundo n�mero: ");
scanf("%d", &numero2);

soma = numero + numero2;

printf("A soma � %d", soma);

return 0;

}
