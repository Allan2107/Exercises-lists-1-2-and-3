#include <stdio.h> /*A linha #include <stdio.h> diz ao compilador que ele deve incluir o arquivo-cabeçalho stdio.h. Neste arquivo existem declarações de funções úteis para entrada e saída de dados (std = standard, padrão em inglês; io = Input/Output, entrada e saída ==> stdio = Entrada e saída padronizadas). Toda vez que você quiser usar uma destas funções deve-se incluir este comando. O C possui diversos arquivos-cabeçalhos.*/
#include <locale.h>


int main(void){ /*A linha void main() define uma função de nome main. Todos os programas em C têm que ter uma função main, pois é esta função que será chamada quando o programa for executado. O conteúdo da função é delimitado por chaves { }. O código que estiver dentro das chaves será executado*/

setlocale(LC_ALL,"portuguese"); 
printf("O primeiro programa a gente nunca esquece!"); /*mostra o que esta em parenteses*/
return 0; /*retorna 0*/

}
