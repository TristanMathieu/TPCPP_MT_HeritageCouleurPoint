#pragma once
#include <iostream>
#include <string>

#include "cPoint.h"


class cCouleur : public cPoint
{
private:
	std::string strCoul;

public:

	//Constructeurs
	cCouleur();
	cCouleur(int nX, int nY, std::string strCoul);

	//Set & Get
	void setCoul(std::string strCoul);

	std::string getCoul();

	//Affichage
	void affCoul();
};

