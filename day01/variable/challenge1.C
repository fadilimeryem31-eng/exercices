
#include <stdio.h>

int main() {
    char nom[20];
    char prenom[20];
    int age;
    char email[20];
    char sexe[1];
    printf("entrer le nom:");
scanf("%s",nom);
printf("entrer le prenom:");
scanf("%s",prenom);
printf("entrer age:");
scanf("%d",&age);
printf("entrer email:");
scanf("%s",email);
printf("entrer sexe (f/m):");
scanf("%s",sexe);
    return 0;
}