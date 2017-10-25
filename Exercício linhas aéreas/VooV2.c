#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define Tam_Arquivo = 32


int main ()
{
    FILE *file = fopen("testeVoos.txt", "r");
    int count = 0;
    int i, x;
    char empresas[3][Tam_Arquivo];
    char linhas[Tam_Arquivo];
    int matriz[i][x];

    if(file == NULL)
    {
        printf("Não foi pssível abrir o arquivo");
        return -1;
    }

    while (fgets(linhas,Tam_Arquivo, file) > 0) {
        empresas[0][i] = linhas[0];
        empresas[1][i] = linhas[1];
        empresas[2][i] = linhas[2];
    }

    fclose(file);

   

    printf("Apareceram %d de empresas", count);

    return 0;
}