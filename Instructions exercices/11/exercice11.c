#include <stdio.h>
#include <math.h>
 
  int main(){
 
  int n,U,Ui,Uj,i;
  do{
    printf("entrer un entier supérieur à 2: ");
    scanf("%d",&n);
  }while(n <= 2);
  Ui = 0;
  Uj = 1;
  printf("u1 est %d\n",Uj);
  for ( i = 2; i <= n; i++)
  {
   U = Ui + Uj;
   Ui = Uj;
   Uj = U;
    printf("u%d est %d\n",n,U);
  }
  
  }