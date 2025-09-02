#include <stdio.h>

int main() {
    int a,b,s;
    printf(" donner a et b : ");
    scanf("%d%d" ,&a,&b);
    if(a==b)
    printf("la somme est s=%d",(a+b)*3 );
    else
    printf("la somme est s=%d" ,a+b);


    return 0;
}
