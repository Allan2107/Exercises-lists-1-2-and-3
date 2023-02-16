#include <stdio.h>
#include <locale.h>

int main(void) {
int numero,numero2,soma;
setlocale(LC_ALL,"portuguese");

printf("Digite um número: ");
scanf("%d", &numero);
printf("Digite um segundo número: ");
scanf("%d", &numero2);

soma = numero + numero2;

printf("A soma é %d", soma);

return 0;

}
