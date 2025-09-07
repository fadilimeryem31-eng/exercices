#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    int a, b, p;

    printf("donner la valeur de a et b : ");
    scanf("%d%d", &a, &b);

    p = produit(a, b);
    printf("le produit est : %d\n", p);

    return 0;
}
