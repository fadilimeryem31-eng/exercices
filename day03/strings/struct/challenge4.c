// Online C compiler to run C program online
#include <stdio.h>

struct point{
    int x,y;
    
};
void affichecoordonnee(struct point *p){
    printf("les coordoonee sont : (%d,%d)",p->x,p->y);
    
}
int main() {
   struct point p1;
   
   struct point *p;
   p=&p1;
   p->x=2;
   p->y=4;
   
   affichecoordonnee(p);
    return 0;
}