#include <stdio.h>
#include <string.h>


int main() {
    char str[20];
    char str2 [20];
    
    
    printf("entrer les elements:");
    fgets(str,20, stdin);
    
    
    printf("entrer les elements:");
    fgets(str2,20, stdin);
    
   
       int resultat = strcmp(str,str2);
            if(resultat==0){
            printf("les deux chaines sont egales");
            }else {
                printf("les deux chaines ne sont pas egales");
            }
         

    return 0;
}
