#include <stdio.h>
#include <math.h>
 int main (){
    int n,i,d;
    do{
        printf("Veuillez entrer un nombre positif: ");
        scanf("%d",&n);
    }while(n <= 0);
        for(i = 1; i <= n; i++){
            if( n % i == 0){
        printf("%d est un diviseur de %d\n",i,n);
        }
        }
    return 0;






 }