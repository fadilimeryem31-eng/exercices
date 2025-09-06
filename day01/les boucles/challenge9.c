#include <stdio.h>

int main() {
    int n, compteur = 0;

   printf("donner un nombre entier positif : ");
   scanf("%d",&n);
   
   if(n==0){
       compteur = 1;
    
   }else{
       while(n!=0){
           n=n/10;
           compteur++;
           
       }
   }printf(" nombre de chiffre est : %d",compteur);
   
    return 0;
}
