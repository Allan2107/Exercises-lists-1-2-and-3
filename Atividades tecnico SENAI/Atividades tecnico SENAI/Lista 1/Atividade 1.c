#include <stdio.h> /*A linha�#include <stdio.h>�diz ao compilador que ele deve incluir o arquivo-cabe�alho�stdio.h. Neste arquivo existem declara��es de fun��es �teis para entrada e sa�da de dados (std = standard, padr�o em ingl�s; io = Input/Output, entrada e sa�da ==> stdio = Entrada e sa�da padronizadas). Toda vez que voc� quiser usar uma destas fun��es deve-se incluir este comando. O C possui diversos arquivos-cabe�alhos.*/
#include <locale.h>


int main(void){ /*A linha�void main()�define uma fun��o de nome�main. Todos os programas em C t�m que ter uma fun��o�main, pois � esta fun��o que ser� chamada quando o programa for executado. O conte�do da fun��o � delimitado por chaves�{ }. O c�digo que estiver dentro das chaves ser� executado*/

setlocale(LC_ALL,"portuguese"); 
printf("O primeiro programa a gente nunca esquece!"); /*mostra o que esta em parenteses*/
return 0; /*retorna 0*/

}
