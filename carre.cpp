#include "carre.h"
#include <iostream>
#include <vector>

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
	sx += dx;
	sy += dy;
}
