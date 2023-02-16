#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
int raio,area,diametro;
setlocale(LC_ALL,"portuguese");

printf("Digite um raio: ");
scanf("%d", &raio);

area = raio * raio * 3,14;
diametro = raio / 2;

printf("A area é %d metros quadrados\n O diametro é %d metros quadrados", area,diametro);

return 0;

}
