#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

       // declaration du strecture

     struct compte_bancaire{

        char  Nom     [20];
        char  Prenom  [20];
        char  CIN     [10];
        float Montant;

    };
    
  struct  compte_bancaire T[100];

  int  x = 0;
  
     void exite(){   // cette fonction pour la possibilité de retour au menu principal après chaque opération

        int choix;

        printf("1- Retour au menu\n2- Quitter l'application\n");

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
   	
	    system("clear");

            printf("Le nom : ");
            scanf("%s", T[x].Nom);

            printf("Le Prenom : ");
            scanf("%s", T[x].Prenom);

            printf("Le CIN : ");
            scanf("%s", T[x].CIN);

            printf("Le Montant : ");
            scanf("%f", &T[x].Montant);
            
            if(T[x].Montant < 0){
              printf("ce choix n'est pas valid");
              exite();
            }
            else{
            printf("Felicitations votre compte a ete bien cree \n");
            exite();
            }
	}
	
	void cree2(){   // cette foction pour introduire plusieurs comptes bancaires

	    system("clear");
        
        int n, i;
        
        printf("Tapez combien de comptes que vous voulez crée : \n");
        scanf("%d",&n);

            for(i=1; i<=n; i++){

            printf("Le nom : ");
            scanf("%s", T[x].Nom);

            printf("Le Prenom : ");
            scanf("%s", T[x].Prenom);

            printf("Le CIN : ");
            scanf("%s", T[x].CIN);

            printf("Le Montant : ");
            scanf("%f", &T[x].Montant);
            
            if(T[x].Montant < 0){
              printf("ce choix n'est pas valid \n");
              exite();
            }
            else{
            printf("Felicitations votre compte a ete bien cree \n");
            exite();
            }
	}
  }

	void Operations(){  // cette foction pour faire les opértions bancaires

	  system("clear");

      int choix, i;
      float depot, retire; // depot : Montant deposé. retire : Montant retiré
      bool r = false;
      char cin[10];
	  
        printf("Tapez le cin : ");
        scanf("%s", cin);

        for( i = 0; i < 10 ; i++){

            if( strcmp(T[i].CIN,cin) == 0 ){

                    r = true;

                    break;
       }
    }
    if ( r == true){

           printf("1 - retrait \n2 - depot \n");

          printf("entrez votre choix: ");
          scanf("%d", &choix);

            switch(choix){

            case 1: 
                    printf("tapez le montant que vous voulez retirer :\n");
                    scanf("%f", &retire);
                    T[i].Montant = T[i].Montant - retire;
                    printf("l'opération a ete bien terminée\n");
                    exite();
            break;

            case 2:
                   printf("tapez le montant que vous voulez deposée :\n");
                   scanf("%f", &depot); 
                   T[i].Montant = T[i].Montant + depot;
                   printf("l'opération a ete bien terminée\n");
                   exite();                   
            break;
            }
    }
        else{

        printf("ce cin n'existe pas \n");
        exite();
    }
}
  void affichagea(){

          system("clear");
         
          char cin[10];
          int i;
          bool r = false;

        printf("Recherche par CIN\n");

        printf("tapez le cin : ");
        scanf("%s", cin);
               
            for( i = 0; i < 10; i++){

              if( strcmp(T[i].CIN,cin) == 0){
                      
                      r = true;
                      break;
        }
    }
            if(r == true){
            
            printf("le nom : %s  | ", T[i].Nom);

            printf("le prenom : %s  | ", T[i].Prenom);

            printf("CIN : %s | ", T[i].CIN );

            printf("Montant : %.2f  \n", T[i].Montant);
    }
            else{
               printf("compte n'existe pas\n");
              }
         exite();
}
      
    int main(){

    system("clear");
   
    int option;

      printf("\n\n             # SYSTEME DE GESTION BANCAIRE #                 ");
   
      printf("\n\n                          MENU                   \n\n\n");
    
      printf("\t \t \t1- Introduire un compte bancaire \n\n");

      printf(" \t \t \t2- Introduire plusieurs comptes bancaires  \n\n");

      printf("\t \t \t3- operations \n\n");

      printf("\t \t \t4- Affichage   \n\n");

      printf("\t \t \t5- Quitter l'application  \n\n");

	printf("\t \t \tTapez une option  : ");
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
            affichagea();
        break;
        case 5:
             system("clear");
        break;
        default:
            system("clear");
            printf("votre choix est invalid\n");
            exite();
        break;
    }
    return 0;
}
