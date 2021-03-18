#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>                                      
#define N 500
#define M 500
using namespace std;
                                                                        /* 
																			  le symbole (*) ==> liste_livres
                                                                              le symbole (**) ==> liste_clients
                                                                              le symbole (***) ==> liste_commandes    */  
class liste_livre{ // * class  [ liste livres ]                                                                           
	float ISBN;
	string Titre;
	string Auteur;
	string Editeur;
	float Annee;
	float Prix;
	public:
		void affiche();
		void ajout_livre(); //*      [ pour ajoute les livres  ]
		void supprimer(); //*       [ pour supprimer les livres ]
		void recherche(); //*        [ pour chercher un livre ]
		void modifier();  //*        [ pour modifier un livre ]
};


class clients{        // ** class  [ liste clients ]
	float IDC;
	string nom;
	string adresse;
	long tel;
	float anciente;
	public:
		void affiche_client();
		void ajout_client(); //**            [ pour ajoute les clients  ]
		void supprimer_client(); //**        [ pour supprimer les clients ]
		void recherche_client(); //**        [ pour chercher un client ]
		void modifier_client();  //**        [ pour modifier client ]
		
};


class commandes{        // *** class  [ liste commandes ]
	float IDCM;
	float IDCCM;
	float Date;
	float Total;
	public:
		void affiche_commande();
		void creer_commande();     //***            [ pour creer les commandes  ]
		void supprimer_commande(); //***        [ pour supprimer les commandes ]
		void recherche_commande(); //***        [ pour chercher les commandes ]
		void modifier_commande();  //***        [ pour modifier les commandes ]
};


//*** voila la fonction d'affiche les commandes
    void commandes::affiche_commande(){
    	cout<<"   $==> voila l'identifiant  du commande : ==> "<<IDCM<<endl;
    	cout<<"   $==> voila l'identifiant du client ayant passe la commande : ==> "<<IDCCM<<endl;
		cout<<"   $==> voila le prix total de la commande :  ==> "<<Total<<" Dhs"<<endl;
    	cout<<"   $==> voila la date dde la commande : ==> "<<Date<<endl;
		}


//*** voila la fonction de creer un nouvel commande
	void commandes::creer_commande(){
	cout<<"donnez l'identifiant  du commande : "<<endl;
	cin>>IDCM;
	cout<<"donnez l'identifiant du client ayant passe la commande : "<<endl;
	cin>>IDCCM;
	cout<<"donnez le prix total de la commande : "<<endl;
	cin>>Total;
	printf("donnez la date de la commande : \n\n");
	cin>>Date;
	}


 //*** voila la fonction de supprimer un commande 
	void commandes::supprimer_commande(){
		commandes co[N];
		int i,j,c,n,k=0;
		cout<<" donnez l'identifiant  du commande que vous voulez supprimer : \n\n"<<endl;
		cin>>c;
		cout<<" /*** le client est bien supprimer ***/ "<<endl;
		for(i=0;i<N;i++){
			if(co[i].IDCM == c){
				for(j=i;j<N-k;j++){
					co[j].IDCM == co[j+1].IDCM;}
					k++;
				    i--;}}
	}


//*** voila la fonction de rechercher les commandes
	void commandes::recherche_commande(){
		commandes co[N];
		int i,code,cas=0;
		cout<<" donnez l'identifiant du commande que vous voulez rechercher : \n\n"<<endl;
		cin>>code;
		for(i=0;i<100;i++){
			if(co[i].IDCM == code ){
		 cout<<" Oui ,la commande est existe : "<<endl;
		 co[i].affiche_commande();
		 cas=1;}}
		if(cas!=1){
		cout<<" Non , le commande n'est existe pas : "<<endl;
		cout<<"verifier l'identifiant du commande: "<<endl;
		}
	}


//*** voila la fonction de modifier les commandes
	void commandes::modifier_commande(){
		commandes co[N];
		int ch,i,cas=0;
		float da,pr,id,com;
		cout<<" donnez l'identifiant du commande que vous voulez modifier : "<<endl;cin>>com;
		cout<<"Que voulez-vous modifier dans la commade ? \n\n"<<endl;
		cout<<" 1) : la date de la commande  \n\n 2) : prix total de la commande \n\n 3) : l'identifiant du client \n\n "<<endl;
		cin>>ch;
		switch(ch){
			case 1: cout<<"donnez la nouvel date de la commande :  \n\n"<<endl;
			        cin>>da;
			        co[i].Date = da;
			        cout<<" \n\n//*/*/*/**la modification est reussie **/*/*/*// \n\n";
			        break;
			case 2:cout<<"donnez le nouveau prix total de la commande  :  \n\n"<<endl;
			        cin>>pr;
			        co[i].Total = pr;
			        cout<<"\n\n//*/*/*/** la modification est reussie  **/*/*/*// \n\n";
			        break;
			case 3:cout<<"donnez la nouvel l'identifiant du client  :  \n\n"<<endl;
			        cin>>id;
			        co[i].IDCCM = id;
			        cout<<" \n\n//*/*/*/**la modification est reussie  **/*/*/*// \n\n";
			        break;
			        default:cout<<"please choose numbre betwin [1 , 4] \n\n";break;}}
		


     //** voila la fonction d'affiche clients
    void clients::affiche_client(){
    	cout<<" \n   $==> voila l'identifiant  du client : ==> "<<IDC<<endl<<"   $==> voila le nom du client :  ==> "<<nom<<endl;
    	cout<<"   $==> voila l'adresse du client : ==> "<<adresse<<endl<<"   $==> voila le tel du client :  ==> "<<tel<<endl;
    	cout<<"   $==> voila la date d'inscription du client : ==> "<<anciente<<endl;}
    	
    	
    	 //** voila la fonction d'ajoute client
	void clients::ajout_client(){
	cout<<"donnez l'identifiant  du client : "<<endl;
	cin>>IDC;
	cout<<"donnez le nom du client : "<<endl;
	cin>>nom;
	cout<<"donnez l'adresse du client : "<<endl;
	cin>>adresse;
	printf("donnez le tel du client : \n\n");
	cin>>tel;
	printf("donnez la date d'inscription du client : \n\n");
	cin>>anciente;
	}


  //** voila la fonction de supprimer client 
	void clients::supprimer_client(){
		clients cl[M];
		int i,j,c,k=0;
		cout<<" donnez l'identifiantdu client que vous voulez supprimer : \n\n"<<endl;
		cin>>c;
		cout<<" /**** le client est bien supprimer ****/  "<<endl;
		for(i=0;i<N;i++){
			if(cl[i].IDC == c){
				for(j=i;j<N-k;j++){
					cl[j].IDC == cl[j+1].IDC;}
					k++;
				    i--;}}
	}
     
     
     //** voila la fonction de rechercher client
	void clients::recherche_client(){
		clients cl[M];
		int i,code,cas=0;
		cout<<" donnez l'identifiant du client que vous voulez rechercher : \n\n"<<endl;
		cin>>code;
		for(i=0;i<100;i++){
			if(cl[i].IDC == code ){
		 cout<<" Oui ,le client est existe : "<<endl;
		 cl[i].affiche_client();
		 cas=1;}}
		if(cas!=1){
		cout<<" Non , le client n'est existe pas : "<<endl;
		cout<<"verifier l'identifiant du client: "<<endl;
		}
	}
     
     
	//** voila la fonction de modifier client
	void clients::modifier_client(){
		clients cl[N];
		int ch,i,ed,p,an;
		long te,da;
		string ad,no;
		cout<<"donnez l'identifiant du client que vous voulez modifier : "<<endl;cin>>ed;
		cout<<"Que voulez-vous modifier dans le client? \n\n"<<endl;
		cout<<" 1) : le nom \n\n 2) : l'adresse \n\n 3) : le tel \n\n 4) : la date d'inscription  \n\n  "<<endl;cin>>ch;
		switch(ch){
			case 1: cout<<"donnez la nouvel nom   :  \n\n"<<endl;cin>>no;
			        //cl[i].nom = no;
			        cout<<" \n\n//*/*/*/**la modification est reussie **/*/*/*// \n\n"; break;
			case 2:cout<<"donnez la nouvel adresse  :  \n\n"<<endl;
			        cin>>ad;
			        //cl[i].adresse = ad;
			        cout<<"\n\n//*/*/*/** la modification est reussie  **/*/*/*// \n\n";break;
			case 3:cout<<"donnez le nouveau tel  :  \n\n"<<endl;
			        cin>>te;
			        //cl[i].tel = te;
			        cout<<" \n\n//*/*/*/**la modification est reussie  **/*/*/*// \n\n";break;
			case 4:cout<<"donnez la nouvele date d'inscription  :  \n\n"<<endl;
			        cin>>da;
			        //cl[i].anciente = da;
			       cout<<" \n\n//*/*/*/** la modification est reussie **/*/*/*// \n\n";break;
			        default:cout<<"please choose numbre betwin [1 , 4] \n\n";break;}}
		
     
     
    //* voila la fonction d'ajoute  livre
	void liste_livre::ajout_livre(){
		cout<<"\n\n"<<endl;
    cout<<"donnez le code du livre : "<<endl;
	cin>>ISBN;
	cout<<"donnez le prix du livre : "<<endl;
	cin>>Prix;
	cout<<"donnez l annee du livre : "<<endl;
	cin>>Annee;
	printf("donnez le titre du livre : \n\n");
	cin>>Titre;
	printf("donnez l auteur du livre : \n\n");
	cin>>Auteur;
	printf("donnez l editeur du livre : \n\n");
	cin>>Editeur;}
	
	
	//* voila la fonction de modifier 
	void liste_livre::modifier(){
		liste_livre lv[N];
		int ch,i,c,p,an;
		string e,a,t;
		cout<<"donnez le code de livre que vous voulez modifier : "<<endl;
		cin>>c;
		cout<<"Que voulez-vous modifier dans le livre? \n\n"<<endl;
		cout<<" 1) : le titre \n\n 2) : l'auteur \n\n 3) : l'editeur \n\n 4) : l'annee \n\n 5) : le prix \n\n "<<endl;
		cin>>ch;
		switch(ch){
			case 1: cout<<"donnez le nouveau titre  :  \n\n"<<endl;
			        cin>>t;
			        //lv[i].Titre = t;
			        cout<<" \n//*/*/*/**la modification est reussie **/*/*/*// \n\n";
			        break;
			case 2:cout<<"donnez le nouveau auteur  :  \n\n"<<endl;
			        cin>>a;
			        //lv[i].Auteur = a;
			        cout<<"\n//*/*/*/** la modification est reussie  **/*/*/*// \n\n";
			        break;
			case 3:cout<<"donnez le nouveau editeur  :  \n\n"<<endl;
			        cin>>e;
			        //lv[i].Editeur = e;
			        cout<<" \n//*/*/*/**la modification est reussie  **/*/*/*// \n\n";
			        break;
			case 4:cout<<"donnez le nouvele annee  :  \n\n"<<endl;
			        cin>>an;
			        //lv[i].Annee = an;
			       cout<<" \n//*/*/*/** la modification est reussie **/*/*/*// \n\n";
			        break;
			case 5:cout<<"donnez le nouveau prix  :  \n\n"<<endl;
			        cin>>p;
			        //lv[i].Prix = p;
			        cout<<" \n//*/*/*/** la modification est reussie **/*/*/*// \n\n";
			        break;
			        default:cout<<"please choose numbre betwin [1 , 5] \n\n";break;
		}
		
	}
	
	
	//* voila la fonction de supprimer
	void liste_livre::supprimer(){
		liste_livre lv[N];
		int i,j,c,n,k=0;
		cout<<" donnez le code du livre que vous voulez supprimer : \n\n"<<endl;
		cin>>c;
		cout<<" \n ******* le livre est bien supprimer ****** "<<endl;
		for(i=0;i<100;i++){
			if(lv[i].ISBN == c){
				for(j=i;j<n-k;j++){
					lv[j].ISBN== lv[j+1].ISBN;}
					k++;
				    i--;}}
	}
	
	
	//* voila la fonction de rechercher 
	void liste_livre::recherche(){
		liste_livre lv[N];
		int i,code,cas=0;
		cout<<" donnez le code du livre que vous voulez rechercher : \n\n"<<endl;
		cin>>code;
		for(i=0;i<100;i++){
			if(lv[i].ISBN == code ){
		 cout<<" Oui ,le livre est existe : "<<endl;
		 lv[i].affiche();
		 cas=1;}}
		if(cas!=1){
		cout<<" Non , le livre n'est existe pas !!!  "<<endl;
		cout<<" //** verifier le code du livre **//   "<<endl;
		}
	}
	
	
	//* voila la fonction d'affiche
	void liste_livre::affiche(){
			cout<<"  \n $==> voila le code du livre : ==> "<<ISBN<<endl<<"  $==> voila le prix du livre : ==> "<<Prix<<" DH "<<endl;
			cout<<"   $==> voila l annee  du livre : ==> "<<" Annee "<<Annee<<endl<<"  $==> voila le titre du livre : ==> "<<Titre<<"  "<<endl;
			cout<<"   $==> voila l auteur  du livre : ==> "<<Auteur<<endl<<"   $==> voila l editeur du livre : ==> "<<Editeur<<" "<<endl;}
			
			
			//**********    //* fonction principal [ main ]   ************//
			
			
    int main(){
				liste_livre lv[N];
				clients cl[M];
				commandes co[N];
				int n,nm,nml,i,livre,client,choix,commande;
				system("color 84");
				printf("\n\n\n");
  printf("       |=========================================================|   \n");
  printf("       |                       MENU                              |   \n");
  printf("       |                       ----                              |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |          Quel est votre choix?                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |      1- Gestion des livres                              |   \n");
  printf("       |      2- Gestion des clients                             |   \n");
  printf("       |      3- Gestion des commandes                           |   \n");
  printf("       |      4- Quitter                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |=========================================================|   \n");
  printf("\n\n\n");
  cout<<"votre choix est ==> ";
  cin>>choix;
  system("cls"); 
  switch(choix){
  	case 1:
			 printf("\n\n\n");
  printf("       |=========================================================|   \n");
  printf("       |                                                         |   \n");
  printf("       |                    *Gestion des livres                  |   \n");
  printf("       |                    ------------------                   |   \n");
  printf("       |                                                         |   \n");
  printf("       |          Quel est votre choix?                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |      1- Ajouter un Livre                                |   \n");
  printf("       |      2- Mettre a jour (modifier) les information (livre)|   \n");
  printf("       |      3- supprimer un Livre                              |   \n");
  printf("       |      4- rechercher un livre et afficher ses information |   \n");
  printf("       |      5- retour                                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |=========================================================|   \n");   
  printf("\n\n\n");
  cout<<"votre choix est ==> ";
  cin>>livre;	
    system("cls"); 			
	switch(livre){
		case 1:cout<<" ************ Ajouter un livre *************\n\n"<<endl;
		cout<<"combien de livres vous voulez ajouter :  "<<endl;
		cin>>n;
		for(i=0;i<n;i++){
		printf(" \n\n ***** / donnez les information du livre num %d / *****\n\n",i+1);
		lv[i].ajout_livre();
		lv[i].affiche();}
		break;
		case 2:cout<<"\n\n******* Mettre a jour (modifier) les information ******\n\n";
		lv[i].modifier();
		break;
		case 3:cout<<"****************** supprimer un livre **************** \n\n";
		lv[i].supprimer();
		break;
		case 4:cout<<"************ rechercher un livre et afficher ses information ***********\n\n";
		lv[i].recherche();
		break;
		case 5:printf("\n\n\n");
  printf("       |=========================================================|   \n");
  printf("       |                       MENU                              |   \n");
  printf("       |                       ----                              |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |          Quel est votre choix?                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |      1- Gestion des livres                              |   \n");
  printf("       |      2- Gestion des clients                             |   \n");
  printf("       |      3- Gestion des commandes                           |   \n");
  printf("       |      4- Quitter                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |=========================================================|   \n");
  printf("\n\n\n");
  cout<<"votre choix est ==> ";
  cin>>choix;
  system("cls"); 
		default:cout<<"please choose numbre betwin [1 , 4] \n\n";break;}
		printf("\n\n\n");
	case 2:
  printf("       |=========================================================|   \n");
  printf("       |                                                         |   \n");
  printf("       |                    **Gestion des clients                |   \n");
  printf("       |                    ------------------                   |   \n");
  printf("       |                                                         |   \n");
  printf("       |          Quel est votre choix?                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |      1- Ajouter un client                               |   \n");
  printf("       |      2- Mettre a jour (modifier) les information(client)|   \n");
  printf("       |      3- supprimer un client                             |   \n");
  printf("       |      4- rechercher un client et afficher ses information|   \n");
  printf("       |      5- retour                                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |=========================================================|   \n");   
  printf("\n\n\n");
  cout<<"votre choix est ==> ";
  cin>>client;
  system("cls");
  switch(client){
		case 1:cout<<" ************ Ajouter un client *************\n\n"<<endl;
		cout<<" combien du client vous voulez ajouter : \n\n"<<endl;
		cin>>nml;
		for(i=0;i<nml;i++){
		printf("\n\n donnez les information du client num %d \n\n",i+1);
		cl[i].ajout_client();
		cl[i].affiche_client();}
		break;
		case 2:cout<<"\n\n******* Mettre a jour (modifier) les information ******\n\n";
		cl[i].modifier_client();
		break;
		case 3:cout<<"****************** supprimer un client **************** \n\n";
		cl[i].supprimer_client();
		break;
		case 4:cout<<"************ rechercher un client et afficher ses information ***********\n\n";
		cl[i].recherche_client();
		break;
        case 5:printf("\n\n\n");
  printf("       |=========================================================|   \n");
  printf("       |                       MENU                              |   \n");
  printf("       |                       ----                              |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |          Quel est votre choix?                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |      1- Gestion des livres                              |   \n");
  printf("       |      2- Gestion des clients                             |   \n");
  printf("       |      3- Gestion des commandes                           |   \n");
  printf("       |      4- Quitter                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |=========================================================|   \n");
  printf("\n\n\n");
  cout<<"votre choix est ==> ";
  cin>>choix;
  system("cls");}
  case 3:
  	printf("\n\n\n");
  printf("       |=========================================================|   \n");
  printf("       |                                                         |   \n");
  printf("       |                    ***Gestion des commandes             |   \n");
  printf("       |                    -------------------------            |   \n");
  printf("       |                                                         |   \n");
  printf("       |          Quel est votre choix?                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |    1- creer un nouvel commande                          |   \n");
  printf("       |    2- Mettre a jour (modifier)les informations(commande)|   \n");
  printf("       |    3- supprimer un commande                             |   \n");
  printf("       |    4- rechercher un commande & afficher ses informations|   \n");
  printf("       |    5- retour                                            |   \n");
  printf("       |                                                         |   \n");
  printf("       |=========================================================|   \n");   
  printf("\n\n\n");
  cout<<"votre choix est ==> ";
  cin>>commande;
  system("cls");
  switch(commande){
		case 1:cout<<" ************ Creer un nouvel commande *************\n\n"<<endl;
		cout<<" combien du commande vous voulez creer : \n\n"<<endl;
		cin>>nm;
		for(i=0;i<nm;i++){
		printf("\n donnez les information du commande num %d \n\n",i+1);
		co[i].creer_commande();
		co[i].affiche_commande();}
		break;
		case 2:cout<<"\n\n******** Mettre a jour (modifier) les informations  ********\n\n";
		co[i].modifier_commande();
		break;
		case 3:cout<<"****************** supprimer une commande **************** \n\n";
		co[i].supprimer_commande();
		break;
		case 4:cout<<"************ rechercher une commande et afficher ses informations ***********\n\n";
		co[i].recherche_commande();
		break;
        case 5:printf("\n\n\n");
  printf("       |=========================================================|   \n");
  printf("       |                       MENU                              |   \n");
  printf("       |                       ----                              |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |          Quel est votre choix?                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |      1- Gestion des livres                              |   \n");
  printf("       |      2- Gestion des clients                             |   \n");
  printf("       |      3- Gestion des commandes                           |   \n");
  printf("       |      4- Quitter                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |=========================================================|   \n");
  printf("\n\n\n");
    }
    printf("\n\n\n");
  printf("       |=========================================================|   \n");
  printf("       |                       MENU                              |   \n");
  printf("       |                       ----                              |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |          Quel est votre choix?                          |   \n");
  printf("       |                                                         |   \n");
  printf("       |      1- Gestion des livres                              |   \n");
  printf("       |      2- Gestion des clients                             |   \n");
  printf("       |      3- Gestion des commandes                           |   \n");
  printf("       |      4- Quitter                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |                                                         |   \n");
  printf("       |=========================================================|   \n");
  printf("\n\n\n");
	case 4:cout<<" \n /*** Remet le programme s'il vous plait !!!!\n\n\n"<<endl;
	exit(0);
		break;
		default:cout<<"please choose numbre betwin [1 , 4] !!!!! \n\n";break;}
		cout<<" \n /*** Remet le programme s'il vous plait !!!!\n\n\n"<<endl;
		cout<<" \n Merci pour le test !!!! \n\n\n"<<endl;
		return 0;	
	}
	
	
	
	
