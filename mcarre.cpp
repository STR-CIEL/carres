#include <iostream>
#include "carre.h"


using namespace std;
int main() {
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
	carre.Afficher();
	carre.Setcote(cote);
	carre.Deplacer('n', 4);
	carre.Afficher();
	carre.Deplacer(5, 5);
	carre.Afficher();
	

	

	


}