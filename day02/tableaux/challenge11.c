
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
  
    
printf("donner l'element a remplacer: ");
scanf("%d",&search);
 int trouve=0;
for(i=0;i<a;i++){
    if(T[i]==search){
    trouve=1;
     printf("nouveau element: ");
 scanf("%d",&T[i]);
 
 
    }
} if(!trouve)
printf("pas de donner");

printf("les element de tableaux sont: ");
for(i=0;i<a;i++)
printf("%d\n",T[i]);





    return 0;
}