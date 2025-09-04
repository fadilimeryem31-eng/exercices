// Online C compiler to run C program online
#include <stdio.h>

int main() {
   float n;
   printf("donner la note: ");
   scanf("%f",&n);
   if(n<10){
       printf("il est recale");
   }
   else if(n>=10 && n<=12) {
        printf("il obtient la mention passable");
   }else if(n>=12 && n<=14) {
        printf(" il obtient la mention assez bien");
   }else if(n>=14 && n<=16) {
        printf(" il obtient la mention bien");   
   }       if(n>16){
       printf(" il obtient la mention tres bien");
   }
   
    return 0;
}