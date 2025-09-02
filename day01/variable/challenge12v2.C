#include <stdio.h>

int main() {
    int nombre, reste, inverse = 0;

    printf("Entrer un nombre: ");
    scanf("%d", &nombre);

    while (nombre != 0) {
        reste = nombre % 10;             
        inverse = inverse * 10 + reste;   
        nombre = nombre / 10;             
    }

    printf("Le nombre inverse est: %d\n", inverse);

    return 0;
    }