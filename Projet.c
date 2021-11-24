#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

    typedef struct utilisateurs{

        char  Nom     [50];
        char  Prenom  [50];
        char  CIN     [50];
        float Montant [50];

    }utilisateur;
    
    utilisateur T[500];

     void exite(){   // cette fonction pour la possibilité de retour au menu principal après chaque opération

        int choix;

        printf("[1] Retour au menu\n[2] Quitter l'application\n");

        printf("Tapez un choix : ");
        scanf("%d", &choix);

        switch(choix){
            case 1 :
                main();
            break;
            case 2 :
                system ("clear");  // pour effacer l'écran après de tapez chaque choix ou option
            break;
            default:
            break;
         }
     }
     
    void cree1(){  // cette foction pour introduire un compte bancaire
   	
	    system("cls");

            printf("Le nom : ");
            scanf("%s", &T[50].Nom);

            printf("Le Prenom : ");
            scanf("%s", &T[50].Prenom);

            printf("Le CIN : ");
            scanf("%s", &T[50].CIN);

            printf("Le Montant : ");
            scanf("%d", &T[50].Montant);

            printf("Felicitations votre compte a ete bien cree \n");

            exite();
	}
	
	void cree2(){   // cette foction pour introduire plusieurs comptes bancaires

	    system("cls");
        
        int n, i;
        
        printf("saisir le nombre de comptes que vous voulez cree : \n");
        scanf("%d",&n);

            for(i=1; i<=n; i++){

            printf("Le nom : ");
            scanf("%s", &T[i].Nom);

            printf("Le Prenom : ");
            scanf("%s", &T[i].Prenom);

            printf("Le CIN : ");
            scanf("%s", &T[i].CIN);

            printf("Le Montant : ");
            scanf("%d", &T[i].Montant);
            
	    printf("Felicitations votre compte a ete bien cree \n");

            }

             exite();
	}
	
	void Operations(){  // cette foction pour faire les opértions bancaires

	  system("cls");

      int choix;
      float depot, retire; // depot : Montant deposé. retire : Montant retiré

	  printf("[1]Depot\n[2]Retrait\n");

          printf("tapez une choix :\n");
          scanf("%d", &choix);

           switch(choix){

            case 1:

              system("cls");
       
              printf("Tapez le CIN :\n");
              scanf("%s", &T[50].CIN);
	          printf("Tapez le montant que vous voulez deposer :\n");
              scanf("%f", &depot);
   
              printf("l'operation a ete bien terminee\n");

            break;
            case 2:

	          system("cls");
	          
              printf("Tapez le CIN :\n");
              scanf("%s", &T[50].CIN);
	          printf("Tapez le montant que vous voulez retirer :\n");
              scanf("%f", &retire);

              printf("l'operation a ete bien terminee\n");

            break;

            default:
            break;
        }
            exite();
	}
	
    int main(){

    system("cls");
    int option;
	printf("\n\n                                                # SYSTEME DE GESTION BANCAIRE #                                 \n");
    printf("\n\n                MENU\n\n\n");
    printf("[1] Introduire un compte bancaire\n\n[2] Introduire plusieurs comptes bancaires\n\n[3] Operations\n\n[4] Affichage\n\n[5] Fidelisation\n\n[6] Quitter l'application\n\n");

	printf("Tapez une option  : ");
	scanf("%d", &option);

    switch(option){
    	
        case 1:
            cree1();  
        break;
        case 2:
            cree2();
        break;
        case 3:
            Operations();
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
