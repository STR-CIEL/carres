#include <iostream>
#include "carre.h"


using namespace std;
int main() {
	int x1;
	int y1;
	int cote;
	char direction;
	int saut;
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
	cout << "Direction de deplacement:" << endl;
	cin >> direction;
	cout << "nombre de pixels de deplacement " << endl;
	cin >> saut;
	carre.Afficher();
	carre.Deplacer(direction, saut);
	carre.Afficher();
	carre.Deplacer(4, 5);
	carre.Afficher();
	

	

	


}