#include <stdio.h>
#include <string.h>
   int nbjoueurs=10,id=11;
   char search[70];


   struct joueur{
    int idUnique;
    char nom[50];
    char prenom[50];
    int numeroMaillot;
    char poste[50];
    int age;
    int buts;
    char status[50];

};
struct joueur joueurs[900]={

    {1, "Zidane", "Zinedine", 10, "milieu", 34, 15, "titulaire"},
    {2, "Ronaldo", "Cristiano", 7, "attaquant", 36, 25, "titulaire"},
    {3, "Messi", "Lionel", 30, "attaquant", 35, 28, "remplacant"},
    {4, "Neuer", "Manuel", 1, "gardient", 33, 0, "titulaire"},
    {5, "Ramos", "Sergio", 4, "defenseur", 35, 5, "titulaire"},
    {6, "Modric", "Luka", 10, "milieu", 36, 7, "remplacem"},
    {7, "Mbappe", "Kylian", 7, "attaquant", 24, 20, "titulaire"},
    {8, "VanDijk", "Virgil", 5, "defenseur", 30, 3, "remplacant"},
    {9, "Courtois", "Thibaut", 1, "gardient", 31, 0, "titulaire"},
    {10, "Pogba", "Paul", 6, "milieu", 29, 10, "titulaire"}
};
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
        }while(choix2 < 1 || choix2 > 4 );
        printf("%s\n", joueurs[nbjoueurs].poste);

        printf("l'age du joueur %d : ",nbjoueurs+1);
        scanf("%d",&joueurs[nbjoueurs].age);
        printf("le nombre de buts du joueur %d : ",nbjoueurs+1);
        scanf("%d",&joueurs[nbjoueurs].buts);
        int choix02;
        do{
        printf("entrer le poste du joueur:\n1.titulaire \n2.remplacant ");
        printf("\nvotre choix est : ");
        scanf("%d",&choix02);
        printf("Joueur %d : ", i + 1);

        switch(choix02){
            case 1 : strcpy(joueurs[nbjoueurs].status,"titulaire");break;
            case 2 : strcpy(joueurs[nbjoueurs].status,"remplacant");break;

            default: printf("Choix invalide.\n");
        }
        }while(choix02 < 1 || choix02 > 3 );
        printf("%s\n", joueurs[nbjoueurs].status);


    }nbjoueurs++;
    id++;
}
//affichage du joueur
void affichejoueur(){
    int choixTri;
    do{
    printf("\n=== Afficher la liste de tous les joueurs ===\n");
    printf("1 - Trier les joueurs par ordre alphabétique (Nom)\n");
    printf("2 - Trier les joueurs par âge\n");
    printf("3 - Afficher les joueurs regroupés par poste\n");
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
        printf("%d. Nom: %s | Prénom: %s | Maillot: %d | Poste: %s | Âge: %d | Buts: %d  status: %s ",
               joueurs[i].idUnique,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].numeroMaillot,
               joueurs[i].poste,
               joueurs[i].age,
               joueurs[i].buts,
               joueurs[i].status);

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
        printf("%d. Nom: %s\n | Prenom: %s\n | Maillot: %d\n | Poste: %s\n | age: %d\n | Buts: %d\n | Status : %s\n",
               joueurs[i].idUnique,
               joueurs[i].nom,
               joueurs[i].prenom,
               joueurs[i].numeroMaillot,
               joueurs[i].poste,
               joueurs[i].age,
               joueurs[i].buts,
               joueurs[i].status);

    }

    }else if(choixTri==3){
    char postes[4][20] = {"Gardien", "Defenseur", "Milieu", "Attaquant"};

    for (int p = 0; p < 4; p++) {
        printf("\n= %s =\n", postes[p]);
        int trouve = 0;
printf("--- afficher les joueurs---\n\n");
// En-têtes de colonnes
printf("%-10s %-15s %-15s %-10s %-5s %-10s %-5s %-10s\n",
       "ID", "Nom", "Prenom", "Maillot", "Age", "Poste", "Buts", "Status");
printf("-------------------------------------------------------------------------------\n");

// Affichage des joueurs
  for(int i = 0; i < nbjoueurs; i++) {
    printf("%-10d %-15s %-15s %-10d %-5d %-10s %-5d %-10s\n",
           joueurs[i].idUnique,
           joueurs[i].nom,
           joueurs[i].prenom,
           joueurs[i].numeroMaillot,
           joueurs[i].age,
           joueurs[i].poste,
           joueurs[i].buts,
           joueurs[i].status);
}
        for (int i = 0; i < nbjoueurs; i++) {

            if (strcmp(joueurs[i].poste, postes[p]) == 0) {
               printf("%d. Nom: %s\n | Prenom: %s\n | Maillot: %d\n | Poste: %s\n | age: %d\n | Buts: %d\n | Status : %s\n",
                       joueurs[i].idUnique,
                       joueurs[i].nom,
                       joueurs[i].prenom,
                       joueurs[i].numeroMaillot,
                       joueurs[i].age,
                       joueurs[i].buts,
                       joueurs[i].status);
                trouve = 1;
            }
        }

        if (trouve == 0) {
            printf("Aucun joueur dans ce poste.\n");
        }
    }
}



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
                     printf("%d. Nom: %s\n | Prenom: %s\n | Maillot: %d\n | Poste: %s\n | age: %d\n | Buts: %d\n | Status : %s\n",
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
                     printf("%d. Nom: %s\n | Prenom: %s\n | Maillot: %d\n | Poste: %s\n | age: %d\n | Buts: %d\n | Status : %s\n",
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
           void statjoueur() {

    // --- 1 : Nombre total de joueurs ---
    printf("\n--- Nombre total de joueurs ---\n");
    printf("%d joueurs\n", nbjoueurs);

    // --- 2 : Âge moyen ---
    int somme = 0;
    for (int i = 0; i < nbjoueurs; i++) {
        somme += joueurs[i].age;
    }
    float moyen = (float)somme / nbjoueurs;
    printf("\n--- Âge moyen ---\n");
    printf("%.2f ans\n", moyen);

    // --- 3 : Joueurs ayant plus qu'un nombre de buts donné ---
    int seuil;
    printf("\nEntrer un nombre de buts pour filtrer : ");
    scanf("%d", &seuil);

    printf("Joueurs ayant plus de %d buts :\n", seuil);
    for (int i = 0; i < nbjoueurs; i++) {
        if (joueurs[i].buts > seuil) {
            printf("%s %s - %d buts\n",
                   joueurs[i].nom, joueurs[i].prenom, joueurs[i].buts);
        }
    }

    // --- 4 : Meilleur buteur ---
    int maxButs = joueurs[0].buts;
    int indexMax = 0;
    for (int i = 1; i < nbjoueurs; i++) {
        if (joueurs[i].buts > maxButs) {
            maxButs = joueurs[i].buts;
            indexMax = i;
        }
    }

    printf("\n--- Meilleur Buteur ---\n");
    printf("Nom: %s\n", joueurs[indexMax].nom);
    printf("Prénom: %s\n", joueurs[indexMax].prenom);
    printf("Buts: %d\n", joueurs[indexMax].buts);
    printf("Poste: %s\n", joueurs[indexMax].poste);
    printf("Age: %d\n", joueurs[indexMax].age);
    printf("Status: %s\n", joueurs[indexMax].status);

    // --- 5 : Joueur le plus jeune et le plus âgé ---
    int maxAge = joueurs[0].age, minAge = joueurs[0].age;
    int indexVieux = 0, indexJeune = 0;

    for (int i = 1; i < nbjoueurs; i++) {
        if (joueurs[i].age > maxAge) {
            maxAge = joueurs[i].age;
            indexVieux = i;
        }
        if (joueurs[i].age < minAge) {
            minAge = joueurs[i].age;
            indexJeune = i;
        }
    }

    printf("\n--- Joueur le plus âgé ---\n");
    printf("%s %s (%d ans)\n", joueurs[indexVieux].nom, joueurs[indexVieux].prenom, joueurs[indexVieux].age);

    printf("\n--- Joueur le plus jeune ---\n");
    printf("%s %s (%d ans)\n", joueurs[indexJeune].nom, joueurs[indexJeune].prenom, joueurs[indexJeune].age);
}



int main()
{
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
