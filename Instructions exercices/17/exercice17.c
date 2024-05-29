#include <stdio.h>
int main(){
int n,i,inverse,dernier_chiffre;
printf("entrez un nombre: ");
scanf("%d",&n);
inverse = 0;
while(n != 0){
    n % 10;/*extraction du dernier chiffre*/
    inverse = (inverse * 10) + n % 10;/*suppression du dernier chiffre*/
    n = n / 10;

}
printf("l'inverse est: %d\n",inverse);




}