#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    char linha[1051], primeiro;
    int contador, tamanho;

    while(1){

        if (linha[0] == '*') exit(0);

        fgets(linha, 1050, stdin);

        primeiro = tolower(linha[0]);
        tamanho = strlen(linha);

        for (contador = 1; contador < tamanho; ++contador){
            if (linha[contador - 1] == ' ' && tolower(linha[contador]) != primeiro) exit(0);
        }
        if(contador == tamanho) printf("Y\n");

        else printf("N\n");

    }

    return 0;

}
