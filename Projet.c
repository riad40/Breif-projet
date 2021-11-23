#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


    struct utilisateurs{

        char  Nom[20];
        char  Prenom[20];
        char  CIN[20];
        int   Montant;

    }utilisateur;

    void exite(){

        int choix;

        printf("[1] Retour au menu\n[2] Quitter l'application\n");

        printf("Tapez un choix : ");
        scanf("%d", &choix);

        switch(choix){

            case 1 :
                main();
            break;

            case 2 :
                system ("cls");
            break;

            default:
            break;
         }
     }

    void databasea(){

        FILE* database = NULL;

        database = fopen("file.txt", "a");

            fprintf(database, "Nom : %s\n", utilisateur.Nom);
            fprintf(database, "Prenom : %s\n" , utilisateur.Prenom);
            fprintf(database, "CIN : %s\n" , utilisateur.CIN);
            fprintf(database, "Montant : %d\n" , utilisateur.Montant);

            fprintf(database,"\n\n");

            fclose(database);
    }

    int main(){

        int option, i, n, choix;

    system("cls");

	printf("\n\n                                                # SYSTEME DE GESTION BANCAIRE #                                 \n");
    printf("\n\n                MENU\n\n\n");
    printf("[1] Introduire un compte bancaire\n\n[2] Introduire plusieurs comptes bancaires\n\n[3] Operations\n\n[4] Affichage\n\n[5] Fidelisation\n\n[6] Quitter l'application\n\n");

	printf("Tapez une option  : ");
	scanf("%d", &option);

    switch(option){

        case 1:

	    system("cls");

            printf("Le nom : ");
            scanf("%s", &utilisateur.Nom);

            printf("Le Prenom : ");
            scanf("%s", &utilisateur.Prenom);

            printf("Le CIN : ");
            scanf("%s", &utilisateur.CIN);

            printf("Le Montant : ");
            scanf("%d", &utilisateur.Montant);

            databasea();

            printf("Felicitations votre compte a ete bien cree \n");

            exite();

        break;

        case 2:

	    system("cls");

	    printf("saisir le nombre de comptes que vous voulez cree : \n");
        scanf("%d",&n);

            for(i=1; i<=n; i++){

            printf("Le nom : ");
            scanf("%s", &utilisateur.Nom);

            printf("Le Prenom : ");
            scanf("%s", &utilisateur.Prenom);

            printf("Le CIN : ");
            scanf("%s", &utilisateur.CIN);

            printf("Le Montant : ");
            scanf("%d", &utilisateur.Montant);

            databasea();

            printf("Felicitations votre compte a ete bien cree \n");

            }

             exite();

        break;

        case 3:

	  system("cls");

	  printf("[1]Depot\n[2]Retrait\n");

          printf("tapez une choix :\n");
          scanf("%d", &choix);

           switch(choix){

            case 1:

              system("cls");

              printf("Tapez le CIN :\n");
              scanf("%s", &utilisateur.CIN);
	          printf("Tapez le montant que vous voulez deposer :\n");
              scanf("%d", &utilisateur.Montant);


              printf("l'operation a ete bien terminee\n");

            break;

            case 2:

	          system("cls");

              printf("Tapez le CIN :\n");
              scanf("%s", &utilisateur.CIN);
	          printf("Tapez le montant que vous voulez retirer :\n");
              scanf("%d",&utilisateur.Montant);

              printf("l'operation a ete bien terminee\n");

            break;

            default:
            break;
        }
            exite();

        break;

        case 4:

            system("cls");

            printf("Affichage");

            exite();
        break;
        case 5:

            system("cls");

            printf("Fidelisation");
            exite();
        break;

        case 6:
        break;

        default:

            printf("votre choix est invalid");
            exite();
        break;

    }

    return 0;
}


