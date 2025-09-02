#include <math.h>
int main()
{
    float a , b , c , x1 , x2 , deltat;
    printf("donner la valeur de a et b et c: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
    printf("l'equation n'est pas de deuxieme degrés");
    }
    else {
    deltat=b*b-4*a*c;
       if(deltat>0) {
          x1=(-b+sqrt(deltat))/(2*a);
          x2=(-b-sqrt(deltat))/(2*a);
          printf("la solution est %.2f %.2f, x1,x2");
       }
       else if (deltat==0){
           x1=(-b)/(2*a);
           printf("la solution est x1=%d" ,x1);
        }else {
           printf("pas de solution");
        }
       }
    return 0;
}