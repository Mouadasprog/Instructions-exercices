#include <stdio.h>
#include <math.h>
  int main(){
  int n,i,estPremier;
  
  printf("Veuillez entrer un nombre: ");
  scanf("%d",&n);
  estPremier = 1;
  for(i = 2;i <= n - 1;i++){
    if(n % i == 0){
      estPremier = 0;
      break;
    }
  }
  if(estPremier == 0)
  printf("%d pas premier\n",n);
  else
  printf("%d est premier\n",n);
  
  
  
  }

  
  
  
  
  
  
  
  
  