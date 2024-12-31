#include <iostream>
#include "carre.h"


using namespace std;
int main() {
	/*
	int x1;
	int y1;
	int cote;
	

	cout << "le valeur de x: " << endl;
	cin >> x1;
	CCarre carre;
	carre.Setsx(x1);
	cout << "le valeur de y : " << endl;
	cin >> y1;
	carre.Setsy(y1);
	cout << "Le valeur de cote: " << endl;
	cin >> cote;
	carre.Setcote(cote);
	carre.Afficher();
	//deplace
	carre.Deplacer('n', 4);
	carre.Afficher();
	carre.Deplacer(5, 5);
	carre.Afficher();*/
	//tableau de 4 carre 

	CCarre tableau[4] = {
		CCarre(1,1), CCarre(2,2), CCarre(3,3), CCarre(4,4)
		
	};
	
	for (int i = 0; i < 4; ++i) {
		cout << "Carre " << i+1 <<endl;
		tableau[i].Afficher();
	}
	//constructeur par defaut 
	CCarre carreDefaut;
	carreDefaut.Afficher();
	//constructeur parametre 
	CCarre carreParametre(5, 5);
	carreParametre.Afficher();

	


}