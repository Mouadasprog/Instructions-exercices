#include <stdio.h>
#include <math.h>
 int main(){

  int n,i,s;
  printf("entrer un nombre: ");
  scanf("%d",&n);
  s = 0;
  for (i = 0 ; i <= n ; i++)
  {
    s = s + (pow(10,i));
  }
  printf("la somme = %d\n",s);

  return 0;








 }