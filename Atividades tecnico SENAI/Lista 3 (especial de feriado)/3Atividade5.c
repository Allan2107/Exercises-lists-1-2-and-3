#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main(void) {

float a,b,imc;
setlocale(LC_ALL,"portuguese");

printf("Digite seu peso: ");
scanf("%f", &a);
printf("\nDigite sua altura: ");
scanf("%f", &b);

imc = a / (b * b);

printf("\n\nO seu imc é: %f\n\n", imc);

if(imc < 18.6){
	printf("\n\nVocê está abaixo do peso\n\n");
}
else if(imc >= 18.6 && imc <= 24.9){
	printf("\n\nVocê está no peso ideal\n\n");
}
else if(imc >= 25 && imc <= 29.9){
	printf("\n\nVocê está com peso em excesso, fique de olho nisso...\n\n");
}
else if(imc >= 30 && imc <= 34.9){
	printf("\n\nVocê está com obesidadegrau 1, hora de ir na academia perder peso...\n\n");
}
else if(imc >= 35 && imc <= 39.9){
	printf("\n\nVocê está com obesidade grau 2, você esta num caminho quase sem volta mais com grande vontade e ajuda conseguira superar esse desafio...\n\n");
}
else if(imc >= 40){
	printf("\n\nVocê está com obesidade grau 3, você já não possui mais experança, aproveite o resto de sua vida da maneira que quiser  porém faça isso rápido, você não tem muito tempo...\n\n");
}

return 0;

}
