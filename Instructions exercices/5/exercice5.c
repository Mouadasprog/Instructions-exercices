#include <stdio.h>
#include <math.h>
  int main(){

    int n,s,i;
 
    printf("entrer un nombre: ");
    scanf("%d",&n);
    s = 1;
    if(n>0){
     for(i = 1; i <= n ; i++){
        s = s * i;
        }
         printf("%d! = %d\n",n,s);
    }
    else if(n<0){
        printf("impossible de calculer le factorielle de %d\n",n);
    }
         
    else if(n==0){
        printf("%d! = %d\n",n,s);
    }
 
    
        
        
    
   
   return 0;
   







  
  
  
  
  
  }
     /*s = 1;
   for (i = 1 ; i <= n ; i++){
    s = s * i;

}
printf("%d! = %d\n",n,s);
   
   return 0;*/
   

