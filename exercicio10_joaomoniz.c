#include <stdio.h>
#include <stdlib.h>

int tabuada;
int resultado (tabuada){
   int multiplicacao;
   multiplicacao=0;
   int resfinal;
   while (multiplicacao<=10) {
      resfinal = tabuada * multiplicacao;
      printf("\n %d x %d = %d",tabuada,multiplicacao,resfinal);
      multiplicacao++;
   }
}

int main (void) {
   printf("\nDigite um numero para ver a sua tabuada: ");
   scanf("%d", &tabuada);
   if (tabuada==0) printf ("Tem de ser apartir de 1");
   else resultado (tabuada);
   }