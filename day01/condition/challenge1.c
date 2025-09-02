#include <stdio.h>
int main() {
    int nombre;
    printf("donner un nombre: ");
    scanf("%d",&nombre);
    if (nombre % 2 == 0)
    printf("le nombre est pair");
    else
    printf("le nombre est impaire");
  

    return 0;
}