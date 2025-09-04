#include <stdio.h>
int main (){
    
    char c;
    printf("donner un caracter: ");
    scanf("%c",&c);
     if (c>='a' && c<='z'){
         printf("le caractere est miniscule");
       } else if(c>='A' && c<='Z'){
             printf("le caractere est majiscule ");
    }else{
        printf("c'est pas un caractere"); 
    }
      return 0;
      }
      
