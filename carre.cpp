#include "carre.h"
#include <iostream>


using namespace std;

void CCarre::Setsx(int sx1) {
	this->sx = sx1;
	
}
void CCarre::Setsy(int sy1) {
	this->sy = sy1;
}
void CCarre::Setcote(int cote1) {
	this->cote = cote1;
}
void CCarre::Afficher() {

	cout << "x = " << sx <<endl;
	cout << "y = " << sy << endl;
	cout << " cote = " << cote << endl;
	cout << "x = " << Getsx() << endl;
	cout << "y = " << Getsy() << endl;
	cout << "cote  = " << GetCote() << endl;
	
	
}
int CCarre::Getsx() {
	return sx;
}
int CCarre::Getsy() {
	return sy;
}
int CCarre::GetCote() {
	return cote;
}
void CCarre::Deplacer(char direction, int saut) {

	switch(direction){
	case 'n':
		
		sy = sy + saut;
		break;
	case 's':

		sy = sy - saut;
		break;
	case 'o':
		sx = sx - saut;
		break;
	case 'e':
		sx = sx + saut;
		break;

	}

	

}
void CCarre::Deplacer(int dx, int dy) {
	char lettre;

	switch (lettre) {
	case 'n':

		sy = sy + dx;
		break;
	case 's':

		sy = sy - dx;
		break;
	case 'o':
		sx = sx - dy;
		break;
	case 'e':
		sx = sx + dy;
		break;

	}



}