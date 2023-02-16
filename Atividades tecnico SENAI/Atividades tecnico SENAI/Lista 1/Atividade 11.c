#include <stdio.h>
#include <locale.h>

int main(void) {
char nome;
double salario,cachorro;
setlocale(LC_ALL,"portuguese");

printf("Digite seu nome: ");
scanf("%s", &nome);
printf("Digite seu salário: ");
scanf("%d", &salario);
printf("digite seu ano de nascimento: ");
scanf("%d", &cachorro);

printf("\n\nO seu nome é %s\n", &nome);
printf("O seu salário é %d\n", salario);
printf("O seu ano de nascimento é %d", cachorro);

return 0;

}
