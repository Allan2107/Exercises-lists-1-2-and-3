#include <stdio.h>
#include <locale.h>

int main(void) {
int numero,numero2,multiplicação;
setlocale(LC_ALL,"portuguese");

printf("Digite um número: ");
scanf("%d", &numero);
printf("Digite um segundo número: ");
scanf("%d", &numero2);

multiplicação = numero * numero2;

printf("\n\nA multiplicação é: %d", multiplicação);

return 0;

}
