#pragma once 
/// @brief Programme de gestion d'un carr�
/// @file carre.h
/// @date 2024/01/08
/// @version 1.0
/// @author Strazimiri Besim

class CCarre {
	/// @brief Classe CCarre
private:
	/// @brief Attributs de la classe CCarre
	int sx;
	int sy;
	int cote;

	/// @brief M�thodes de la classe CCarre
public:
	/// @brief 
	/// @param sx 
	/// @param sy 
	CCarre(int sx, int sy);
	/// @brief Constructeur par d�faut
	CCarre();
	/// @brief 
	/// @param sx1 
	void Setsx(int sx1);
	/// @brief 
	/// @param sy1 
	void Setsy(int sy1);
	/// @brief
	/// @param cote1 
	void Setcote(int cote1);

	/// @brief
	/// @return 
	int Getsx();
	int Getsy();
	int GetCote();
	// "D�place" le carr� sans le dessiner. Les attributs x et y  
	// sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de  
	// la direction : par ex direction nord saut=2 y=y-2 
	// Entr�es : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
	//   - saut : nombre de pixels de d�placement du carr� 
	// Sortie : Aucune 
	/// @brief 
	void Deplacer(char direction, int saut);
	void Deplacer(int dx, int dy);

	void Afficher();
};