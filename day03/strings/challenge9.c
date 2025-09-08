#include <stdio.h>
#include <string.h>


int main() {
    char str[20];
    char str2[20];
    int i,j=0;
    
    
    printf("entrer les elements:");
    fgets(str,20,stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str2[j]=str[i];
            j++;
        }
        
    }
    printf("%s",str2);  
  
    
    
    return 0;
}
