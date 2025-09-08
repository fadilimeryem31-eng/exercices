// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct personne{
    char nom[50],prenom[50];
    int age;
};
int main() {
   struct personne personne1;
   
   strcpy (personne1.nom , "meryem");
   strcpy (personne1.prenom , "fadili");
     personne1.age = 22;
      printf("le nom du personne  1 : %s\n",personne1.nom);
       printf("le prenom du personne  1 : %s\n",personne1.prenom);
        printf("l'age du personne  1 : %d",personne1.age);
    return 0;
}