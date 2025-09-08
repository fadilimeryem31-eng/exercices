#include <stdio.h>


int main() {
    char str[20];
    int longueur=0;
    printf("entrer les elements:");
    fgets(str,20, stdin);
    printf("afficher: %s",str);
    
    for(int i=0;i<20;i++){
        if(str[i]!= '\0' && str[i] !='\n'){
            
            longueur++;
        }else break;
    }
    printf("la longueur est :%d\n",longueur);
    
    

    return 0;
}
