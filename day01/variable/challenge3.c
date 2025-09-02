#include <stdio.h>

int main() {
    float Yards , Km ;
    printf("entrer la distance en km:");
    scanf("%f",&Km);
    
    Yards = Km * 1093.61;
    printf("la distance en yards est %f",Yards);
    return 0;
}