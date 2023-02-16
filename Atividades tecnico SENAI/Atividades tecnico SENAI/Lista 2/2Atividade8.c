#include <stdio.h>
#include <locale.h>

int main(void) {
char AnoDeNascimento,idade;
setlocale(LC_ALL,"portuguese");

printf("Digite seu ano de nascimento: ");
scanf("%d", &AnoDeNascimento);


idade = 2023 - AnoDeNascimento;

printf("\n\nEsse ano você faz %d anos", idade);

return 0;

}
