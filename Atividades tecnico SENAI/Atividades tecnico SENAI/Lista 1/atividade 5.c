#include <stdio.h> 
#include <locale.h>

int main(void){ 
setlocale(LC_ALL,"portuguese");
printf("Cadastro de Clientes\n0 -Fim\n1 -Inclui\n2 -Altera\n3 -Exclui\n4 -Consulta\nOpção:"); 
return 0; 
}
