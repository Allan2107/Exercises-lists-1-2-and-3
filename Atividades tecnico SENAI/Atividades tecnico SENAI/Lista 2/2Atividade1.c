#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"portuguese");
	
	srand(time(NULL));
	printf("número aleatorio:%d", rand() % 101);
	
	
return 0;
	
}
