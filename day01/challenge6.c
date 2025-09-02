// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float a , b;
    printf("donner a et b : ");
    scanf("%f%f", &a ,&b);
    printf("a+b=%.2f\na-b=%.2f \na*b=%.2f", a+b , a-b , a*b);
    return 0;
}