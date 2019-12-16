
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "buffer.h"
#include "lexico.h"
#include "token.h"

using namespace std;

int main ()
{
   //Digite aqui o arquivo para leitura: ArquivoFonte1.mln  ou  ArquivoFonte2.mln .
	arquivo("ArquivoFonte2.mln");

   //Retorna os tokens
   RetornaToken ();

   return 0;

}
