#include <stdio.h>

int main() {
    
    int a,i,n=0;
    printf("donner un nombre: ");
    scanf("%d",&a);
      
      for(i=0;i<=a;i++)
  
     n=n+i;
      printf("  la somme des %d premiers nombres naturels: %d\n",a,n);
    return 0;
}
