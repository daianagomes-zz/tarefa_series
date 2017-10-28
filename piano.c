/*7. Faça a transformada dos 1024 primeiros pontos do arquivo
piano.txt. Extraia os pontos pela linha de comando do Linux.
Discuta.*/

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
	FILE *arquivo;
    FILE * dados_aleatorios;
    int i, m, n=1024, h;
    double x, y, xmin, xmax, dx, dy, ymin, ymax, c1[n];
    double v[n];
    
    //Abrindo o arquivo para leitura
	arquivo = fopen("piano.txt", "r");
	//Lendo os dados do arquivo
	for(i=0; i<n; i++)
	{
		fscanf(arquivo, "%lf\t", &c1[i]);
	}
	for(i=0; i<n; i++)
	{
	  v[i] = c1[i];
	}
	
	for(i=0; i<n; i++)
	{
		printf("%f\t\n", v[i]);
	}

	
    dados_aleatorios = fopen(argv[1], "w"); //argv[1] é para a main receber o nome do arquivo que eu digitar(leitura na linha de comando)
	
    ymin = -1;
    ymax = 1;
    
    dy = (ymax - ymin)/n;
    y=ymin;
    i=0;
 	do{
 		
 		
 			   fprintf(dados_aleatorios, "%lf\t %lf\t \n", v[i],y);
			   i++;
 			   y+=dy;
 			   
 		}while(i<1024&&y<ymax);
	  
    fclose(dados_aleatorios); 
}    
       
       
