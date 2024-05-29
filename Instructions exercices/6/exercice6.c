#include <stdio.h>
#include <math.h>
  int main(){
 
  int s,n,i,j;
  printf("entrer un nombre: ");
  scanf("%d",&n);
  s = 0;
  j = 1;
  for(i = 1; i <= n; i++){
    s = s + pow(j,2);
    j = j + 2;
  }
  printf("la somme = %d",s);
  return 0;
 




  }