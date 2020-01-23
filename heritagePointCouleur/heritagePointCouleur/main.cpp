#pragma once
#include <iostream>
#include <string>

#include "cPoint.h"
#include "cCouleur.h"


/*
Réaliser un programme contenant une classe Couleur qui hérite d'une classe Point.
*/

int main()
{
	cCouleur newCoul(8, 9, "vert");

	newCoul.affCoul();
	
	
	system("pause");
	return 0;
}


//Code réalisé par Tristan et la sueure de son front.