#include <stdio.h>
#include <locale.h>

int main(void) {
int numero,numero2,multiplica��o;
setlocale(LC_ALL,"portuguese");

printf("Digite um n�mero: ");
scanf("%d", &numero);
printf("Digite um segundo n�mero: ");
scanf("%d", &numero2);

multiplica��o = numero * numero2;

printf("\n\nA multiplica��o �: %d", multiplica��o);

return 0;

}
