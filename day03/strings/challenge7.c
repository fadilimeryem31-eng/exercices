#include <stdio.h>
#include <string.h>


int main() {
    char str[20];
    
    
    
    printf("entrer les elements:");
    scanf("%s",str);
    
    
    strlwr (str);
    
    printf(" %s",strlwr(str));
    
    return 0;
}
