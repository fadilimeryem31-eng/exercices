// Online C compiler to run C program online
#include <stdio.h>
 struct rectangle{
     float longueur,largeur;
     
 };
  float calculedelair(struct rectangle t1){
   float air=t1.longueur*t1.largeur;
    return air;
}
int main() {
    struct rectangle t1;
    t1.longueur=3;
    t1.largeur=2;

float lair=calculedelair(t1);
printf("l'air est: %.2f",lair);
    return 0;
}