// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a;
   printf("donner un nombre: ");
   scanf("%d",&a);
   if(a<0){
       printf("le nombre est negatif");
   }else if(a>0){
       printf("le nombre est positif");
        }else
        printf("le nombre est null");
   
   
    return 0;
}