#include <stdio.h>
#include <math.h>
int main(){
  int n1,n2,pow1;
  int type_de_opération,opinion,continuer = 1;
  char nom[50];
  while(continuer == 1){
  printf("Entrez votre nom: ");
  scanf("%s",&nom);
  printf("*******************************************\n");
  printf("Bonjour MR %s , ce programme est faite pour effectuer votre opérations\n",nom);
  printf("Souhaitez-vous effectuer quelle opération ? \n");
  printf("1--> ADDITION\n");
  printf("2--> SOUSTRACTION\n");
  printf("3--> DIVISION\n");
  printf("4--> PRODUIT\n");
  printf("5--> PUISSANCE\n");
  printf("6--> RESTE D'UNE DIVISION ENTIÈRE\n");
  printf("je souhaite effectuer: ");
  scanf("%d",&type_de_opération);
                    switch (type_de_opération)
  {
                  case 1:printf("entrez-vous les deux nombres: \n");
                         printf("entrez le premier nombre: ");
                         scanf("%d",&n1);
                         printf("entrez le deuxième nombre: ");
                         scanf("%d",&n2);
                         printf("%.0d + %.0d = %.0d\n",n1,n2,(n1 + n2));
                         break;
                  case 2:printf("entrez-vous les deux nombres: \n");
                         printf("entrez le premier nombre: ");
                         scanf("%d",&n1);
                         printf("entrez le deuxième nombre: ");
                         scanf("%d",&n2);
                         printf("%d - %d = %d\n",n1,n2,(n1 - n2));
                         break;
                  case 3:printf("entrez-vous les deux nombres: \n");
                         printf("entrez le premier nombre: ");
                         scanf("%d",&n1);
                         printf("entrez le deuxième nombre: ");
                         scanf("%d",&n2);
                           if(n2 == 0){
                         printf("la division par %d est impossible\n",n2);
                            break;
                         }
                           else{
                         printf("%.0d / %.0d = %d\n",n1,n2,(n1 / n2));
                         break;
                         }
                  case 4:printf("entrez-vous les deux nombres: \n");
                         printf("entrez le premier nombre: ");
                         scanf("%d",&n1);
                         printf("entrez le deuxième nombre: ");
                         scanf("%d",&n2);
                         printf("%.0d * %.0d = %0d\n",n1,n2,(n1 * n2));
                         break;
                  case 5:printf("entrez-vous les deux nombres: \n");
                         printf("entrez le premier nombre: ");
                         scanf("%d",&n1);
                         printf("entrez le deuxième nombre: ");
                         scanf("%d",&n2);
                         pow1 = pow(n1,n2);
                         printf("pow(%.0d,%0.d) = %.0d\n",n1,n2,pow1);
                         break;
                  case 6:printf("entrez-vous les deux nombres: \n");
                         printf("entrez le premier nombre: ");
                         scanf("%d",&n1);
                         printf("entrez le deuxième nombre: ");
                         scanf("%d",&n2);
                           if(n2 == 0){
                         printf("la division par %d est impossible\n",n2);
                         break;
                         }
                           else{
                         printf("le reste d division de %d sur %d = %d\n",n1,n2,(n1 % n2));
                         break;
                         }
                 default:printf("opération invalide\n");
                         break;

  }
  printf("Voulez-vous répéter ou quitter ?\n");
  printf("1--> Répéter\n");
  printf("2--> quitter\n");
  scanf("%d",&opinion);
       if(opinion == 2 || opinion != 1){
         continuer = 0;
         break;
       }
    
  }
       return 0;

}

  
  
