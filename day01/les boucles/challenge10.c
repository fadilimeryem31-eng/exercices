#include <stdio.h>

int main() {
    
    int n,a=0,i;
    printf("donner un nombre: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        a=a+i;
    }
        printf(" la somme des %d premiers nombres est : %d",n,a);
    
    
     
    return 0;
}
