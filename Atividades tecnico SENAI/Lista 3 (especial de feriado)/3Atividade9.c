#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

int a,b, c;
setlocale(LC_ALL,"portuguese");

printf("Digite um n�mero: ");
scanf("%d", &a);
printf("Digite um segundo n�mero: ");
scanf("%d", &b);
printf("Digite um terceiro n�mero: ");
scanf("%d", &c);

 if(a > b && b > c){
		printf("\n\n%d � maior que %d que � maior do que %d\n\n", a,b,c);
	}
 else if(a > b && a > c && c > b){
printf("\n\n%d � maior que %d que � maior do que %d\n\n", a,c,b);
 }
 else if(b > a && a > c){
 	printf("\n\n%d � maior que %d que � maior do que %d\n\n", b,a,c);
 }
  else if(b > c && c > a){
  	printf("\n\n%d � maior que %d que � maior do que %d\n\n", b,c,a);
  }
   else if(c > a && a > b){
   	printf("\n\n%d � maior que %d que � maior do que %d\n\n", c,a,b);
   }
    else if(c > b && b > a){
    	printf("\n\n%d � maior que %d que � maior do que %d\n\n", c,b,a);
    }
    
return 0;

}
