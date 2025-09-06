#include <stdio.h>

int main() {
    
    int n,inverse=0,reste;
    printf("donner un nombre entier: ");
    scanf("%d",&n);
     
     while(n!=0){
         reste = n%10;
         inverse = inverse*10+reste;
         n=n/10;
     }
         printf("l'inverse est: %d",inverse);
     
    return 0;
}
