#include <stdio.h>
#include <math.h>
int main(){
int i,j;
printf("x * y | ");
for(i = 1;i <= 10;i++){
   printf(" %d ",i); 
}
printf("\n"); 
for(i = 0;i <= 10;i++){
    printf("----");
}
printf("\n");
for(i = 1;i <= 10;i++){
    printf("%d   |    ",i);
    for(j = 1;j <= 10;j++){
        printf("%d  ",j * i);
    }
    printf("\n");
}
}




