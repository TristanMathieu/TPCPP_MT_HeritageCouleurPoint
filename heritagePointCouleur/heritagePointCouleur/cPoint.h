#pragma once
#include <iostream>


class cPoint
{
private :
	int nX;
	int nY;

public:
	
	//Constructeurs
	cPoint();
	cPoint(int nX, int nY);


	//Set & Get
	void setX(int nX);
	void setY(int nY);

	int getX();
	int getY();

	//Affichage
	void affPoint();
};

