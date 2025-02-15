/**** Header especifico para funcoes relacionadas ao dicionario ****/

#ifndef BIBLIOTECADICT_H_INCLUDED
#define BIBLIOTECADICT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "formating.h"

int contaLinhas(FILE* arquivo) // Conta quatas linhas tem o arquivo
{
    char c;
    int tamanho = 0;
    while(!feof(arquivo))
    {
        c = fgetc(arquivo);
        if(c == '\n') tamanho++;
    }
    rewind(arquivo);
    return tamanho;
}

void criarDict(FILE * arq, char dict[][100]) // Cria um dicionario
{
    int i = 0;
    //char string[100];

    while(fscanf(arq, "%s", dict[i]) != EOF)
    {
        formatar(dict[i]);
        fgetc(arq);
        i++;
    }
}


#endif // BIBLIOTECADICT_H_INCLUDED

