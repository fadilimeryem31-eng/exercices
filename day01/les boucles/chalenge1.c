#include <stdio.h>

int main() {
    
    int a,i;
    printf("donner un nombre: ");
    scanf("%d",&a);
      
      for(i=1;i<=10;i++)
      printf(" table de multiplication de 1 à 10 du nombre %d est: %d\n",a,a*i);
    return 0;
}
