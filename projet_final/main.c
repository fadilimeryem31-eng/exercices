#include <stdio.h>
#include <string.h>
int nbjoueurs=0,id=1;
char search[70];
struct joueur{
    int idUnique;
    char nom[50];
    char prenom[50];
    int numeroMaillot;
    char poste[50];
    int age;
    int buts;
    char dateInscription;
    char status;

};
struct joueur joueurs[900];
// Ajouter un joueur
 void ajoutjoueur(){
    int a,i;
    printf("combien de joueur tu veux ajouter? ");
    scanf("%d",&a);

    for(i=0;i<a;i++){
        joueurs[nbjoueurs].idUnique = id;
        printf("le nom du joueur %d : ",nbjoueurs+1);
        scanf("%s",joueurs[nbjoueurs].nom);
        printf("le prenom du joueur %d : ",nbjoueurs+1);
        scanf("%s",joueurs[nbjoueurs].prenom);
        printf("le numero de maillot du joueur %d : ",nbjoueurs+1);
        scanf("%d",&joueurs[nbjoueurs].numeroMaillot);
        int choix2;
        do{
        printf("entrer le poste du joueur:\n1.gardient \n2.defenseur \n3.milieu \n4.attaquant");
        printf("\nvotre choix est : ");
        scanf("%d",&choix2);
        printf("Joueur %d : ", i + 1);

        switch(choix2){
            case 1 : strcpy(joueurs[nbjoueurs].poste,"gardient");break;
            case 2 : strcpy(joueurs[nbjoueurs].poste,"defenseur");break;
            case 3 : strcpy(joueurs[nbjoueurs].poste,"milieu");break;
            case 4 : strcpy(joueurs[nbjoueurs].poste,"attaquant");break;
            default: printf("Choix invalide.\n");
        }
        }while(choix2 < 1 && choix2 > 4 );
        printf("%s\n", joueurs[nbjoueurs].poste);

        printf("l'age du joueur %d : ",nbjoueurs+1);
        scanf("%d",&joueurs[nbjoueurs].age);
        printf("le nombre de buts du joueur %d : ",nbjoueurs+1);
        scanf("%d",&joueurs[nbjoueurs].buts);

    }nbjoueurs++;
    id++;
}
//affichage du joueur
void affichejoueur(){
    int choixTri;
    do{
    printf("\nTrier les joueurs par :\n");
    printf("1 - Nom\n");
    printf("2 - Age\n");
    printf("3 - Poste\n");
    printf("Votre choix : ");
    scanf("%d", &choixTri);
    if(choixTri==1){
        struct joueur temp;
    for ( int i = 0; i < nbjoueurs - 1; i++) {
        for (int j = 0; j < nbjoueurs - 1 - i; j++) {
            if (strcmp(joueurs[j].nom, joueurs[j + 1].nom) > 0) {
                temp = joueurs[j];
                joueurs[j] = joueurs[j + 1];
                joueurs[j + 1] = temp;
            }
        }

            }printf("\n=== Liste des joueurs ===\n");
    for (int i = 0; i < nbjoueurs; i++) {
        printf("%d. Nom: %s | Prénom: %s | Maillot: %d | Poste: %s | Âge: %d | Buts: %d ",
               joueurs[i].idUnique,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].numeroMaillot,
               joueurs[i].poste,
               joueurs[i].age,
               joueurs[i].buts);

    }

    }else if (choixTri==2){
  struct joueur temp;
    for ( int i = 0; i < nbjoueurs - 1; i++) {
        for (int j = 0; j < nbjoueurs - i - 1; j++) {
            if (joueurs[j].age > joueurs[j + 1].age) {
                // échanger les joueurs
                temp = joueurs[j];
                joueurs[j] = joueurs[j + 1];
                joueurs[j + 1] = temp;
        }
    }
        }  printf("\n=== Liste des joueurs ===\n");
    for (int i = 0; i < nbjoueurs; i++) {
        printf("%d. Nom: %s | Prenom: %s | Maillot: %d | Poste: %s | age: %d | Buts: %d | D | Sta\n",
               joueurs[i].idUnique,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].numeroMaillot,
               joueurs[i].poste,
               joueurs[i].age,
               joueurs[i].buts);

    }
}
    //}else if(choixTri==3){

    }while(choixTri < 1 || choixTri > 3 );
}
//modification du joueur
void modifjoueur(){
    int choixTri2;
    do{
    printf("\nmodifier les joueurs par :\n");
    printf("1 - poste\n");
    printf("2 - Age\n");
    printf("3 - nombre de buts\n");
    printf("Votre choix : ");
    scanf("%d", &choixTri2);

        if(choixTri2==1){
       printf("Entrer le nom de joueur a modifier: ");
                scanf("%s", search);
                int trouve = 0;
                for(int i = 0; i < nbjoueurs; i++) {
                    if (strcmp(joueurs[i].nom, search) == 0) {
                        int choixPoste;
            printf("Nouveau poste :\n");
            printf("1 - Gardien\n");
            printf("2 - Défenseur\n");
            printf("3 - Milieu\n");
            printf("4 - Attaquant\n");
            printf("Votre choix : ");
            scanf("%d", &choixPoste);

            switch (choixPoste) {
                case 1:
                    strcpy(joueurs[i].poste, "Gardien");
                    break;
                case 2:
                    strcpy(joueurs[i].poste, "Defenseur");
                    break;
                case 3:
                    strcpy(joueurs[i].poste, "Milieu");
                    break;
                case 4:
                    strcpy(joueurs[i].poste, "Attaquant");
                    break;
                default:
                    printf("Choix invalide.\n");
                    return;
            }
                        printf("poste modifiee avec succes.\n");
                        trouve = 1;
                        break;
                    }
                }

                if (!trouve) {
                    printf("joueur non trouve.\n");
                }
            }else if(choixTri2==2){
            printf("Entrer le nom de joueur a modifier: ");
                scanf("%s", search);

                int trouve = 0;
                for( int i = 0; i < nbjoueurs; i++) {
                    if (strcmp(joueurs[i].nom, search) == 0) {
                    printf("entrer le nouveau age : ");
                    scanf("%d",&joueurs[i].age);
                    printf("l'age modifiee avec succes.\n");
                        trouve = 1;
                        break;
                    }
               }if (!trouve) {
                  printf("Aucun joueur trouvé avec ce nom.\n");
                }
           }else if (choixTri2==3){
           printf("Entrer le nom de joueur a modifier: ");
                scanf("%s", search);

                int trouve = 0;
                for(int i = 0; i < nbjoueurs; i++) {
                    if (strcmp(joueurs[i].nom, search) == 0) {
                    printf("entrer le nouveau nombre de buts : ");
                    scanf("%d",&joueurs[i].buts);
                    printf("le nombre de buts modifiee avec succes.\n");
                        trouve = 1;
                        break;
                    }
               }if (!trouve) {
                  printf("Aucun joueur trouvé avec ce nom.\n");
                }
           }

    }while(choixTri2 < 1 || choixTri2 > 3 );

}
//suppression
void supprimejoueur(){
int trouve=0;
    printf(" donner le mot a supprimé : ");
    scanf("%s",search);
    for(int i=0;i<nbjoueurs;i++){
    if (strcmp(joueurs[i].nom,search)==0){
        for(int j=i;j<nbjoueurs-1;j++){
        strcpy(joueurs[j].nom,joueurs[j+1].nom);
        strcpy(joueurs[j].prenom,joueurs[j+1].prenom);
        strcpy(joueurs[j].poste,joueurs[j+1].poste);
        joueurs[j].age=joueurs[j+1].age;
        joueurs[j].numeroMaillot=joueurs[j+1].numeroMaillot;
        joueurs[j].buts=joueurs[j+1].buts;

        }
        nbjoueurs--;

         printf("le joueur supprimé avec succès.\n");
            trouve = 1;
            break;
    }
}
}
//recherche
           void recherchejoueur(){
               int search2;
               int choix3;
               printf("1-recherche par nom");
               printf("1-recherche par ID");
               scanf("%d",&choix3);
               if(choix3==1){
                printf("donner le nom du joueur a rechercher ");
               scanf("%s",search);
               for(int i=0; i<nbjoueurs; i++){
               if(strcmp(joueurs[i].nom,search)==0){
                     printf("%d. Nom: %s | Prenom: %s | Maillot: %d | Poste: %s | age: %d | Buts: %d | D | Sta\n",
               joueurs[i].idUnique,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].numeroMaillot,
               joueurs[i].poste,
               joueurs[i].age,
               joueurs[i].buts);
               }
            }
               }else if(choix3==2){
               printf("donner le nom du joueur a rechercher ");
               scanf("%s",search);
               for(int i=0;i<nbjoueurs;i++){
               if(strcmp(joueurs[i].nom,search)==0){
                     printf("%d. Nom: %s | Prenom: %s | Maillot: %d | Poste: %s | age: %d | Buts: %d | D | Sta\n",
               joueurs[i].idUnique,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].numeroMaillot,
               joueurs[i].poste,
               joueurs[i].age,
               joueurs[i].buts);
               }
               }
               }
           }
           void statjoueur(){
               int choix4;
               printf("1 - affichage du nombre total du joueurs");
               printf("2 - affichage du l'age moyen du joueurs");
               printf("3 - affichage du joueurs qui ont le plus grand nombre du joueurs");
               printf("4 - affichage du meilleur buteur");
               printf("5 - affichage du joueur le plus jeune et le plus age");
               scanf("%d",&choix4);
               switch(choix4){

            case 1 : printf("le nombre total du joueurs est : %d", nbjoueurs );break;
            case 2 :
                int moyenne;
                for (i=0;i<nbjoueurs;i++){
                    somme += joueurs[i].age;
                    moyen = somme/nbjoueurs;
                }
                    printf("la moyenne est :%d ",moyen);break;
                case 3 :



                }
                printf("")
                 break;
            case 2 : break;
            case 3 : break;
            case 4 : break;
            case 5 : break;
               }

           }

int main() {
    int choix;
    do {
        printf("\n== Menu de Gestion des Equipes de Football ==\n");
        printf("1 - Ajouter un joueur\n");
        printf("2 - Afficher la liste des joueurs\n");
        printf("3 - Modifier un joueur\n");
        printf("4 - Supprimer un joueur\n");
        printf("5 - Rechercher un joueur\n");
        printf("6 - Statistiques\n");
        printf("7 - Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
            case 1: ajoutjoueur(); break;
            case 2: affichejoueur(); break;
            case 3: modifjoueur(); break;
            case 4: supprimejoueur(); break;
            case 5: recherchejoueur(); break;
            case 6: statjoueur(); break;
            case 7: printf("Au revoir!\n"); break;
            default: printf("Choix invalide.\n");
        }

    } while (choix != 7);

    return 0;
}
