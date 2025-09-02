#include <stdio.h>

int main() {
    int nombre,inverse;
    int mille,centaine,dizaine,unité;
    printf("entrer un nomnre de quatre chiffre: ");
    scanf("%d" ,&nombre);
    mille=nombre/1000;
    centaine=(nombre/100)%10;
    dizaine=(nombre/10)%10;
    unité=nombre%10;
     inverse= unité*1000+dizaine*100+centaine*10+mille;
     printf("le nombre inverse est:%d",inverse);
    

     return 0;
}
