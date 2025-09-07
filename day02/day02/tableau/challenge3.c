#include <stdio.h>

int main()
{
    int a,s=0;
    printf("entrer les element du tableaux: ");
    scanf("%d",&a);
    int i,T[a];
    for(i=0; i<a ; i++){
    printf("donner les element%d\n",i+1);
    scanf("%d",&T[i]);
    }
    for(i=0; i<a ; i++)
     s=s+T[i];
    printf("la somme est:%d",s);

    return 0;
}
