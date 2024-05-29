#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int main(){
  int nombre_aléatoire,i,n;
  const int MAX = 30, MIN = 1;
  srand(time(NULL));
  nombre_aléatoire = (rand() % (MAX - MIN + 1)) + MIN;
        printf("entrez-vous un nombre: ");
        scanf("%d",&n);
  for(i = 1; i < 5; i++){
    if(n == nombre_aléatoire){
        printf("Bravo vous avez touvé %d à partir du %d essai\n",nombre_aléatoire,i);
        break;
    }
   else if(n < nombre_aléatoire){
        printf("PLus grand !\n");
        printf("entrez-vous un nombre: ");
        scanf("%d",&n);  
    }
   else if(n > nombre_aléatoire){
        printf("PLus moins !\n");
        printf("entrez-vous un nombre: ");
        scanf("%d",&n); 
        }
        

    }   
    if(i >= 5){
        printf("Désolé vous avez dépassé le nombre de votre essais\n");
        printf("le nombre choisie était %d\n",nombre_aléatoire);

    }

  }