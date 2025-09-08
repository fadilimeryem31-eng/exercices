// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct etudiant{
    char nom[50],prenom[50];
    float T[5];
};
int main() {
   struct etudiant etudiant1;
   
   strcpy (etudiant1.nom , "meryem");
   strcpy (etudiant1.prenom , "fadili");
   etudiant1.T[0]=12.3;
   etudiant1.T[1]=13.3;
   etudiant1.T[2]=14.3;
   etudiant1.T[3]=15.3;
   etudiant1.T[4]=16.3;
   
      printf("le nom du personne  1 : %s\n",etudiant1.nom);
       printf("le prenom du personne  1 : %s\n",etudiant1.prenom);
      
       for(int i=0;i<5;i++)
      
        printf("l'age du personne  1 : %.2f\n",etudiant1.T[i]);
    return 0;
}