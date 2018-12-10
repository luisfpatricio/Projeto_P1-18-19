#ifndef FUNCOES_AUXILIARES_H_INCLUDED
#define FUNCOES_AUXILIARES_H_INCLUDED

#include "constantes.h"
#include "tipostruck.h"


char menu(int *quantidadeEstudantes, int *quantidadeAvaliado, float *percentagemNotas);
int lerInteiro(char mensagem[MAX_STRING], int minimo, int maximo);
float lerFloat(char mensagem[MAX_STRING], float minimo, float maximo);
void lerString(char mensagem[MAX_STRING], char vetorCaracteres[MAX_STRING], int maximoCaracteres);
void limpaBufferStdin(void);

tipoData lerData(void);

#endif // FUNCOES_AUXILIARES_H_INCLUDED
