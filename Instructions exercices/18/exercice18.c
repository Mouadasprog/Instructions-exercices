#include <stdio.h>
#include <math.h>
int main(){
int n,inverse,i;
printf("entrez un entier: ");
scanf("%d",&n);
inverse = 0;
i = n;
do{
    i % 10;
    inverse = (inverse * 10) + (i % 10);
    i = i / 10;
}while(i != 0);
if(n == inverse){
    printf("%d est Palindrome\n",n);
}
else 
    printf("%d n'est pas Palindrome\n",n);





}