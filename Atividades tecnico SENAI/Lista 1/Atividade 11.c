#include <stdio.h>
#include <locale.h>

int main(void) {
char nome;
double salario,cachorro;
setlocale(LC_ALL,"portuguese");

printf("Digite seu nome: ");
scanf("%s", &nome);
printf("Digite seu sal�rio: ");
scanf("%d", &salario);
printf("digite seu ano de nascimento: ");
scanf("%d", &cachorro);

printf("\n\nO seu nome � %s\n", &nome);
printf("O seu sal�rio � %d\n", salario);
printf("O seu ano de nascimento � %d", cachorro);

return 0;

}
