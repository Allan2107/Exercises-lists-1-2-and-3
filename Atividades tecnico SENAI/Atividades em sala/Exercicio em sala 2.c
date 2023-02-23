#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

int a,b, c;
setlocale(LC_ALL,"portuguese");

printf("Digite um número: ");
scanf("%d", &a);
printf("Digite um segundo número: ");
scanf("%d", &b);
printf("Digite um terceiro número: ");
scanf("%d", &c);

if(a == b && b == c){
	printf("\n\nTodos os números são iguais\n\n");
}
else if(a > b > c || a > c > b || b > a > c || b > c > a || c > b > a || c > a > b || a < b < c || a < c < b || b < a < c || b < c < a || c < b < a || c < a < b){
	printf("\n\nTodos os números são diferentes\n\n");
    }
    if(a > b && b > c){
		printf("%d é maior que %d que é maior do que %d\n\n", a,b,c);
	}
 else if(a > b && a > c && c > b){
printf("%d é maior que %d que é maior do que %d\n\n", a,c,b);
 }
 else if(b > a && a > c){
 	printf("%d é maior que %d que é maior do que %d\n\n", b,a,c);
 }
  else if(b > c && c > a){
  	printf("%d é maior que %d que é maior do que %d\n\n", b,c,a);
  }
   else if(c > a && a > b){
   	printf("%d é maior que %d que é maior do que %d\n\n", c,a,b);
   }
    else if(c > b && b > a){
    	printf("%d é maior que %d que é maior do que %d\n\n", c,b,a);
    }
    
return 0;

}
