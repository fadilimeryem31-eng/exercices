#include <stdio.h>
#include <string.h>


int main() {
    char str[20];
    char c;
    int count=0;
    
    printf("entrer les element :");
    fgets(str,20,stdin);
    
    printf("entrer un caractere a rechercher: ");
    scanf("%c",&c);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==c){
        count++;
    }
    }
    printf("le caractere est apparairue %d fois",count);
    
  
    
    
    return 0;
}
