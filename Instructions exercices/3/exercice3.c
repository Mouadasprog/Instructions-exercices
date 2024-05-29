#include <stdio.h>
#include <math.h>
#
 int main(){
   
    int n;
    float i,s;
    printf("entrer un nombre: ");
    scanf("%d",&n);
    s = 0;
    for (i = 1/1; i <= n; i++)
    {
        s = s + (1/i);
       
    }
     printf("la somme jusqu'à %d = %f\n",n,s);
    
    
    return 0;
    






 }