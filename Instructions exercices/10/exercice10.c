#include <stdio.h>
#include <math.h>
 int main(){
 int n,i,Ui,Un;
 printf("entrer l'entier n: ");
 scanf("%d",&n);
 Ui = 6;
 for(i = 1; i <=n; i++){
    Un = (Ui * 4) + 10;
    Ui = Un;
 }
 printf("U%d = %d\n",n,Ui);








 }