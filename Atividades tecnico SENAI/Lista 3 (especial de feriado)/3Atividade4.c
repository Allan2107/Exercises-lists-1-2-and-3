#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

char chimas[88];
setlocale(LC_ALL,"portuguese");

printf("Digite uma letra: ");
scanf("%s", &chimas);


if(strcmp(chimas, "a")==0 || strcmp(chimas, "A")==0 || strcmp(chimas, "e")==0 || strcmp(chimas, "E")==0 || strcmp(chimas, "i")==0 || strcmp(chimas, "I")==0 || strcmp(chimas, "o")==0 || strcmp(chimas, "O")==0 || strcmp(chimas, "u")==0 || strcmp(chimas, "U")==0){
	printf("\n\n%s é uma vogal\n\n", chimas);
}
else{
	printf("\n\n%s é uma consoante\n\n", chimas);
}

return 0;

}
