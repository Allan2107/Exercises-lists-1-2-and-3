#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
float numero,RaizQuadrada;
setlocale(LC_ALL,"portuguese");

printf("Digite um número: ");
scanf("%f", &numero);


RaizQuadrada = sqrt(numero) ;
printf("A raiz quadrada é %f", RaizQuadrada);

return 0;

}
