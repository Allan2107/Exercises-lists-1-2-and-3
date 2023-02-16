#include <stdio.h>
#include <locale.h>

int main(void) {
char nome;
setlocale(LC_ALL,"portuguese");

printf("Digite seu nome: ");
scanf("%s", &nome);

printf("\n\nSaudações %s", &nome);

return 0;

}
