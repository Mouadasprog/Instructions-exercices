#include <stdio.h>
#include <math.h>

   int main(){

   int nmbr_années;
   float p_ville1,p_ville2,v1_ajoutée,v2_ajoutée;
   char ville1[50],ville2[50];
   printf("entrer le nom du 1er ville: ");
   scanf("%s",&ville1);
   printf("entrer le nom du 2ème ville: ");
   scanf("%s",&ville2);
   printf("Veuillez entrer la population initiale de %s et de %s\n",ville1,ville2);
   printf("Veuillez entrer la population de %s: ",ville1);
   scanf("%f",&p_ville1);
   printf("Veuillez entrer la population de %s: ",ville2);
   scanf("%f",&p_ville2);
   printf("Combien la valeur de population ajoutée chaque année à %s ? : ",ville1);
   scanf("%f",&v1_ajoutée);
   printf("Combien la valeur de population ajoutée chaque année à %s ? : ",ville2);
   scanf("%f",&v2_ajoutée);
   for(nmbr_années = 0; p_ville1 < p_ville2 ; nmbr_années++){
    p_ville1 += v1_ajoutée * p_ville1;
    p_ville2 += v2_ajoutée;
   }
   printf("%s depassera %s dans %dans\n",ville1,ville2,nmbr_années);
   return 0;








   }