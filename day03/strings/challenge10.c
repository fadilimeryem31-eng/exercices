#include <stdio.h>
#include <string.h>


int main() {
    char chainprincipale[20];
    char souschaine[20];
    
    printf("entrer les element de la chaine principale:");
    fgets(chainprincipale,20,stdin);
    
     printf("entrer les element de la chaine principale:");
    fgets(souschaine,20,stdin);
    
    if(strstr(chainprincipale,souschaine)!= NULL){
        printf(" la sous chaine est present dans la chaine principale");
    }else {
        printf("la sous chaine n'est pas present dans la chaine principale");
    }
    
    
  
    
    
    return 0;
}
