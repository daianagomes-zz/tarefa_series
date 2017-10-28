
/*Leitura o arquivo e calculo dos coeficientes ak, bk da serie de fourier e também ak**2 + bk**2*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Função que calcula os coeficientes ak e bk da série de Fourier
void coeficientes(double *x, double *y, int m, char *nome)
{  
   FILE* arquivo;
   double *a, *b, *ab, soma_cosseno=0, soma_seno=0;
   int k, j, d;
   
  
  a = malloc(m*sizeof(double));
  b = malloc(m*sizeof(double));
  ab = malloc(m*sizeof(double));
  
  d=m/2.0;
  arquivo = fopen(nome, "w");
  
  for(k=0;k<d;k++)
  {	
      
      soma_cosseno = soma_seno =0 ;
  		
  	  for(j=0;j<d-1;j++)
      {  
            
           	soma_cosseno = soma_cosseno + y[j] * cos(k * x[j]);
    		soma_seno = soma_seno + y[j] * sin(k * x[j]);
    		
      } 
       printf("Soma seno : %lf\n", soma_seno);
       printf("Soma cosseno : %lf\n", soma_cosseno);
       
       a[k] = (1.0/m)*soma_cosseno;
       b[k] = (1.0/m)*soma_seno;
       ab[k] = a[k] * a[k] + b[k] * b[k];
       
       //printf("%lf\n", a[k]);
       
       fprintf(arquivo, "%lf\t %lf \t %lf\t  \n", a[k], b[k], ab[k]);
       
  }
    
  
}

int main(int argc, char **argv)
{ 
    FILE *leitura;
    int i, m;
    double *x, *y;
    i=0;
  
 
    
//-----lendo o arquivo para o cálculo dos coeficientes
  
    leitura = fopen(argv[1], "r");
    
    printf("Funcionou\n");
    
    x = malloc(2000*sizeof(double));
    y = malloc(2000*sizeof(double)); 
    
    while( fscanf(leitura, "%lf %lf", &x[i], &y[i]) !=EOF) i++;    
    
    m=i;
    
    printf("%d\n", m);
    x=realloc(x, m*sizeof(*x));
    y=realloc(y, m*sizeof(*y));
    
    coeficientes(x,y,m,argv[2]);
    
    
}    
       
       

