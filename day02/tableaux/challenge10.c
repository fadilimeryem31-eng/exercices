
#include <stdio.h>

int main()
{
    
 int a,search;
    printf("entrer les element du tableaux: ");
    scanf("%d",&a);
    int i,T[a];
    for(i=0; i<a ; i++){
    printf("donner les element%d\n",i+1);
    scanf("%d",&T[i]);
    }
    
printf("entrer l'element a recherecher: ");
scanf("%d",&search);
 int trouve=0;
for(i=0;i<a;i++){
    if(T[i]==search){
    printf("trouve:%d");
    trouve=1;
    }
} if(!trouve)
printf("pas de donner");

    return 0;
}