#include <stdio.h>
#include <stdlib.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t
#define N 1000

int main()
{
int R=20000;
double A[N]; double B[N]; double C[N]; double D[N]; double MFLOPS;
  for (int i=0; i<N; i++)
  {
    A[i]=0;
    B[i]=1;
    C[i]=2;
    D[i]=3;
  }

  clock_t S= clock();
  for (int j=0; j<R; j++)
  {
     for (int i=0; i<N; i++)
     {
       A[j]=B[j]+C[j]*D[j];
     }
  }

  clock_t E= clock();
  double tempo=(double)(E-S)/(CLOCKS_PER_SEC); //tempo em segundos
  double FLOPS=N*R*2/tempo;
  MFLOPS=FLOPS*0.000001;
  printf("Tempo de execução: %f s\n", tempo);
  printf("Flops/s: %f \n ", FLOPS );
  printf("MFlops/s: %.10f \n ", MFLOPS);
}
