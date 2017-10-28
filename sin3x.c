/*1. Escreva um programa que leia o nome do arquivo na linha de
comando e imprima 1024 valores de uma função, para
x ∈ [–π, π]. Use a primeira função como sin(3x).
//compilar o programa usando:
//gcc sin3x.c -lm e depois ./a.out dados_sin3x.dat (ou qualquer outro nome)
*/

#include <stdio.h>
#include <math.h>

void imprime(double *x, double *y,int n)
{  int i;

   for(i=0;i<n;i++)
   {
      printf("%lf\t %lf\t", x[i],y[i]);
      printf("\n");
      
   }

}

int main(int argc, char **argv)
{ 
    FILE *dados;
    int i, m, n=1024, h;
    double x, y, xmin, xmax, dx;
    
    
	dados = fopen(argv[1], "w"); //argv[1] é para a main receber o nome do arquivo que eu digitar(leitura na linha de comando)
	
	xmin = -M_PI;
	xmax = M_PI;
    dx = (xmax-(xmin))/n;
   
	for(x=xmin ; x<xmax ; x+=dx)
	{  
	   y = sin(3*x); 
	   
	   fprintf(dados, "%lf\t %lf\t \n", x,y);
	   printf("%lf\t %lf\t \n", x,y);
	}   
	  
    fclose(dados);   
}    
       
       

