#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
float numero,RaizQuadrada;
setlocale(LC_ALL,"portuguese");

printf("Digite um n�mero: ");
scanf("%f", &numero);


RaizQuadrada = sqrt(numero) ;
printf("A raiz quadrada � %f", RaizQuadrada);

return 0;

}
