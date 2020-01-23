#include "cPoint.h"


//Constructeur
cPoint::cPoint()
{
	this->nX = 0;
	this->nY = 0;
}

cPoint::cPoint(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}



//Set & Get
void cPoint::setX(int nX)
{
	this->nX = nX;
}

void cPoint::setY(int nY)
{
	this->nY = nY;
}


int cPoint::getX()
{
	return this->nX;
}

int cPoint::getY()
{
	return this->nY;
}



//Affichage
void cPoint::affPoint()
{
	std::cout << "Affichage du point :" << std::endl;
	std::cout << " Coordonnee X : " << this->nX << std::endl;
	std::cout << " Coordonnee Y : " << this->nY << std::endl;
}


