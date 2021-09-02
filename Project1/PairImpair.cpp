//But: un programme qui determine si un chiffre entier est pair ou impair
//Auteur: Karim Dion K.
//Date: 2021-09-01

#include <iostream>; // cette ligne me permets d'utiliser les commandes de Input(clavier/souris) 
//et Output(ecran et son)
using namespace std; // cette commande me permet d'utiliser les commandes "cout" et "cin" sans que j'ai a tapper std:: devant

int chiffre; // j'etablie une variable pour que je puisse mettre un chiffre par apres
//sans que mon ordinateur l'oublie immediatement apres

int main()
{
	cout << "entrer un chiffre et je vous dirai s'il est pair ou impair\n";
	cin >> chiffre;
	if (chiffre % 2 == 0) /* ce if statement divise le chiffre avec un modulo
						  par deux. Si le restant est zero cela veux dire que c'est un chiffre pair
						  car tous les chiffres pairs, lorsqu'un modulo de deux est utiliser sur eux,
						  donnent zero*/
	{
		cout << "le chiffre " << chiffre << " est pair";
	}
	else /* ensuite si le if statement plus haut donne n'importe quoi d'autre, ca veut dire que le
		 chiffre n'est pas pair et donc impair.*/
	{
		cout << "le chiffre " << chiffre << " est impair";
	}
	return 0;
};
// avec 23, le code donne impair
//avec 25, le code donne impair
// avec 24, le code donne pair
// avec 22, le code donne pair
//avec 2250, le code donne pair
