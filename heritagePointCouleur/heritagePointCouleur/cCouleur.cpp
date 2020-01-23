#include "cCouleur.h"


//Constructeurs
cCouleur::cCouleur()
{
	this->setX(7);
	this->setY(6);
	this->strCoul = "blanc";
}

cCouleur::cCouleur(int nX, int nY, std::string strCoul)
{
	this->setX(nX);
	this->setY(nY);
	this->strCoul = strCoul;
}


//Set & Get
void cCouleur::setCoul(std::string strCoul)
{
	this->strCoul = strCoul;
}


std::string cCouleur::getCoul()
{
	return this->strCoul;
}



//Affichage
void cCouleur::affCoul()
{
	affPoint();
	std::cout << " Couleur : " << this->strCoul << std::endl;
}
