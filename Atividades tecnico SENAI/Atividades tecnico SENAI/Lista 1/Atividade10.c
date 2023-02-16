#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
float numero,numero2,divisao;
setlocale(LC_ALL,"portuguese");

printf("Digite um numero: ");
scanf("%f", &numero);
printf("Digite um numero 2: ");
scanf("%f", &numero2);

divisao = numero / numero2;

printf("A divisao e %f", divisao);

return 0;

}
