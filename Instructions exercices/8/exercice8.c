#include <stdio.h>
 int main(){
 int age,s,i,j;
 do{
    printf("entrer votre age: ");
    scanf("%d",&age);
 }while(age <= 0);
  j = 0;
  for(i = 1; i <= age ; i++){
    s = (500 + (i * 3));
    j = j + s;
    
  }
  printf("la somme de Amal à %déme anniversaire est : %.2dDH\n",age,j);
  
  return 0;
   




 }