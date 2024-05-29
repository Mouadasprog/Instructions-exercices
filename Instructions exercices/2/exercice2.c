#include <stdio.h>
  int main(){

/*Programme 1 , par while*/
  printf("Par la boucle while:\n");

  int N,i;
  printf("entrer un nombre: ");
  scanf("%d",&N);
  i = N + 1;
  while(i <= N + 10){
    printf("i = %d\n",i);
     i++;
     
  }
     printf("Par la boucle for\n");

     i = N + 1;
     for (i = N + 1; i <= N+10; i++)
     {
    printf("i = %d\n",i);
     }
     

    /*Programme 2 , par do while*/
    printf("Par la boucle do...while...:\n");
    i = N + 1;
    do{
      printf("i=%d\n",i);
      i++;
    }while(i <= N + 10);




return 0;

  }