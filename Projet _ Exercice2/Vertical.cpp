//But: un programme qui, lorsque l'on entre un nombre a 5 chiffres, afficher les 5 chiffres verticalement
//Auteur:Karim Dion K.
//Date: 2021-09-01

#include <iostream>; // cette ligne me permets d'utiliser les commandes de Input(clavier/souris) 
//et Output(ecran et son)
using namespace std; // cette commande me permet d'utiliser les commandes "cout" et "cin" sans que j'ai a tapper std:: devant

int chiffre; // j'etablie une variable pour que je puisse mettre un chiffre par apres
//sans que mon ordinateur l'oublie immediatement apres

int main() //la fonction main est la premiere chose qui se lance lorsque nous
{		   // appuyons sur f5. c'est la fonction principale du programme.

	cout << "entrer un nombre a 5 chiffres: "; //cout me permet d'afficher un message
	cin >> chiffre;// cin me permet de demander a l'utilisateur d'entre quelque chose
					// a l'aide de son clavier
	if (chiffre < 10000)// dans ce if statement, si le chiffre que je demande avec le cin plus haut
	{					// a moins de 5 chiffres, le code reponds simplement que le nombre n'a pas le nombre de chiffre requis
	
		cout << "ce nombre n'a pas 5 chiffres"; // ici j'affiche que le nombre plutot demander n'a pas 5 chiffres
	}
	else
	{
		cout << (chiffre % 10)  << "\n";//ici j'affiche l'unite du nombre
		cout << (chiffre % 100)   << "\n";// ici j'affiche les dizaines et les unites du nombre
		cout << (chiffre % 1000)   << "\n";//ici j'affiche les centaines, les dizaines et les unites du nombre
		cout << (chiffre % 10000)  << "\n";//ici j'affiche les milliers, les dizaines et les unites du nombre
		cout << (chiffre % 100000)  << "\n";//ici j'affiche le nombre complets
	}
	return 0;
}