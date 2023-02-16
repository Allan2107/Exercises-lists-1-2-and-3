#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void) {
char texto[40];
int TotalDeTexto;
setlocale(LC_ALL,"portuguese");

printf("Digite um texto: ");
scanf("%s", &texto);

TotalDeTexto = strlen(texto);

printf("\n\nO numero total de letras é: %d",  TotalDeTexto);

return 0;

}
