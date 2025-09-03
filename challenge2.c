#include <stdio.h>

int main()
{
    int a;
   
    printf("donner a : ");
    scanf("%d",&a);
     int T[a],i;
     for(i=0 ; i<a ;i++){
     printf("entrer les elements: ");
     scanf("%d",&T[i]);
     }
     for(i=0 ; i<a ; i++)
     printf("%d\n",T[i]);
    return 0;
}
