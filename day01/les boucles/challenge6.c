#include <stdio.h>

int main() {
    int n, i;
    
    printf("Donner un nombre: ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs sont :\n", n);

    for (i = 1; i <= 2*n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

