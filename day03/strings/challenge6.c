#include <stdio.h>
#include <string.h>


int main() {
    char str[20];

    printf("entrer les elements:");
    scanf("%s",str);
    
    strupr (str);
    
    printf(" %s",strupr(str));
    
    return 0;
}
