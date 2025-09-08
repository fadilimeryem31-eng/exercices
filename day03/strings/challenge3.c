#include <stdio.h>


int main() {
    char str[20];
    char str2 [20];
    
    int longueur=0;
    int longueur2=0;
    printf("entrer les elements:");
    fgets(str,20, stdin);
   
    
    printf("entrer les elements:");
    fgets(str2,20, stdin);
   
    
    while(str[longueur]!= '\0' && str[longueur]!= '\n') longueur++;
    while(str2[longueur2]!= '\0' && str2[longueur2]!= '\n') longueur2++;
    
    char str3 [longueur+longueur2];
    for(int i=0;i<longueur;i++){
        str3[i]=str[i];
    }
    for(int i=0;i<longueur2;i++){
        str3[longueur+i]=str2[i];
    }
    str3[longueur + longueur2] = '\0';
    printf("Concaténation de Chaînes est: %s",str3);
    

    return 0;
}
