// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int an,choix;
   
   printf("donner e nombre d'anne a convertir: ");
   scanf("%d",&an);
   
   printf("--menu de converion--\n");
   printf("1.mois\n");
   printf("2.jours\n");
   printf("3.heures\n");
   printf("4.min\n");
   printf("5.sec\n");
   printf("-----------------\n");
   printf("votre choix est: ");
   scanf("%d",&choix);
     
    switch(choix){
        case 1:
        printf("conversion de l'annee en moins:%d mois",an=an*12);
        break;
        case 2:
        printf("conversion de l'annee en jours:%d jours",an=an*365);
        break;
        case 3:
        printf("conversion de l'annee en heures:%d heures",an=an*8760);
        break;
        case 4:
        printf("conversion de l'annee en min:%d min",an=an*525600);
        break;
        case 5:
        printf("conversion de l'annee en sec:%d sec",an=an*31536000 );
        break;
        default:
        printf("  ");
    }
   
   
   
    return 0;
}