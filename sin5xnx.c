/*6. Repita para sin(5x)η(x) e sin(5x) + η(x).

//gcc sin5xnx.c -lm e depois ./a.out dados_sin5xnx.dat
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
    FILE * dados;
    int i, m, n=1024, h;
    double x, y, y1, xmin, xmax, dx, dy, ymin, ymax;
    
    
	dados = fopen(argv[1], "w"); //argv[1] é para a main receber o nome do arquivo que eu digitar(leitura na linha de comando)
	xmin = -M_PI;
	xmax = M_PI;
    dx = (xmax-(xmin))/n;
    
    ymin = -1;
    ymax = 1;
    
    dy = (ymax - ymin)/n;
    x=xmin;
    y=ymin;
    
 	do{
 		
 			   y1 = sin(5*x)*y; 
 			   fprintf(dados, "%lf\t %lf\t \n", x, y1);
 			   x+=dx;
 			   y+=dy;
	   
	   	   
 			   
 		}while(x<xmax&&y<ymax);
	  
    fclose(dados);   
}    
       
       
