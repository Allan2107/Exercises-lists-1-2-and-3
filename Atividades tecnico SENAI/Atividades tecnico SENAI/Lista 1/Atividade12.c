#include <stdio.h>
#include <locale.h>

int main(void) {
char produto;
int valor,valortotal,quantidade;
setlocale(LC_ALL,"portuguese");

printf("Digite um produto: ");
scanf("%s", &produto);
printf("Digite o valor do produto: ");
scanf("%d", &valor);
printf("Digite a quantidade do produto:");
scanf("%d", &quantidade);

valortotal = valor * quantidade;

printf("\n\nO valor total é %d", valortotal);

return 0;

}
