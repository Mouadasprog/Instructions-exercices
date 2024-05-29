#include <stdio.h>
#include <math.h>
 int main(){
  int nbr,i;
  long n;
printf("entrer un nombre: ");
scanf("%ld",&n);
nbr = 0;
i = n;
do{
  i /= 10;
  nbr++;
}while(i != 0);
printf("%ld est composé de %d chiffres\n",n,nbr);



return 0;
 
 
 
 
 
 
 
 }