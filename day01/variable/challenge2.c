#include <stdio.h>

int main() {
    float k , c ;
    printf("entrer la temperature:");
    scanf("%f",&c);
    k = c + 273.15;
    printf("la temperature en kelvin est %f",k);
    return 0;
}