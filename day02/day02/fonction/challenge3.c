#include <stdio.h>

int max(int a, int b) {
    if(a<b){
        int max = b;
        return b;
    } else {
        return a;
}
}
int main() {
    int a, b;

    printf("donner la valeur de a et b : ");
    scanf("%d%d", &a, &b);
    printf("le max est : %d",max(a,b));
   

return 0;
}
