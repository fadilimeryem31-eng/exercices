#include <stdio.h>

int main()
{
    int a,min;
    printf("entrer les element du tableaux: ");
    scanf("%d",&a);
    int i,T[a];
    for(i=0; i<a ; i++){
    printf("donner les element%d\n",i+1);
    scanf("%d",&T[i]);
    }
    min=T[0];
    for(i=0; i<a; i++){
    if  (T[i]<min){
   min=T[i];
    }
    }
    printf("le min est:%d",min);

    return 0;
}
