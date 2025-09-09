#include <stdio.h>
#include <string.h>

struct personne{
    char nom[100];
    char email[100];
    char telephone[100];
};
struct personne contact[9999];
int nbContacts = 0;
int a,i;
char recherche[50];
//Ajouter un Contact
void ajoutcontact(){

    printf("donner le nombre de contact: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){

    printf("le nom %d :",nbContacts+1);
    scanf("%s", contact[nbContacts].nom);

    printf("l'email %d :",nbContacts+1);
    scanf("%s", contact[nbContacts].email);
    
    printf("le telephone %d :",nbContacts+1);
    scanf("%s", contact[nbContacts].telephone);
    
   nbContacts++;
    }
}  
//Afficher Tous les Contacts
void affichagecontact(){
    
    
    for (int i=0;i<nbContacts;i++){
        printf("liste de contact est : \n");
    printf("%d.%s | %s | %s\n",i+1,contact[i].nom,contact[i].email,contact[i].telephone);
     }
     if(nbContacts==0)
    printf("la liste est vide\n");
}
    
//Modifier un Contact
void modifiercontact(){
    int trouve=0;
    printf(" donner le mot a modifier : ");
    scanf("%s",recherche);
    for(i=0;i<nbContacts;i++){
    if (strcmp(contact[i].nom,recherche)==0){
        printf("le nouveau nom : ");
        scanf("%s",contact[i].nom);
         printf("contact modifié avec succès.\n");
            trouve = 1;
            break;
    }
}
}
//Supprimer un Contact
void suppressioncontact(){
    int trouve=0;
    printf(" donner le mot a supprimé : ");
    scanf("%s",recherche);
    for(i=0;i<nbContacts;i++){
    if (strcmp(contact[i].nom,recherche)==0){
        for(int j=i;j<nbContacts-1;j++){
        strcpy(contact[j].nom,contact[j+1].nom);
        strcpy(contact[j].email,contact[j+1].email);
        strcpy(contact[j].telephone,contact[j+1].telephone);
        }
        nbContacts--;
         printf("contact suprimé avec succès.\n");
            trouve = 1;
            break;
    
    
    }
}
}
//recherche d'un contact
void recherchecontact(){
    
    printf(" donner le mot a rechercher : ");
    scanf("%s",recherche);
    int trouve=0;
    
    for(int i=0;i<nbContacts;i++){
    if (strcmp(contact[i].nom,recherche)==0){
        printf("le contact est trouvé  :%d.%s | %s | %s\n",i+1,contact[i].nom,contact[i].email,contact[i].telephone );
        trouve = 1;
            break;
    }
    if(!trouve){
    printf("pas de contact");
    }
}
}
int menu(){
    int choix;
    printf("--gestion de menu de contact--\n");
    printf("1. Ajouter un Contact\n");
    printf("2. Modifier un Contact\n");
    printf("3. Supprimer un Contact\n");
    printf("4. Afficher Tous les Contacts\n");
    printf("5. Rechercher un Contact\n");
    printf("6. quitter\n");
    printf("veulliez entrer votre choix: ");
    scanf("%d",&choix);
return choix;
}
int main() {
    
    
    int choix;



    do {
        choix=menu();
        switch(choix){
            case 1: ajoutcontact();
            break;
            case 2:modifiercontact();
            break;
            case 3:suppressioncontact();
            break;
            case 4:affichagecontact();
            break;
            case 5:recherchecontact();
            break;
            case 6:
            printf("l'option 6 : Quitter \n");
            break;
            default:
            printf("votre choix est invalid");
            break;
        }
    } while(choix!=6);
    return 0;
}