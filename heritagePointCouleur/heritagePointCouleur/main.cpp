#pragma once
#include <iostream>
#include <string>

#include "cPoint.h"
#include "cCouleur.h"


/*
R�aliser un programme contenant une classe Couleur qui h�rite d'une classe Point.
*/

int main()
{
	cCouleur newCoul(8, 9, "vert");

	newCoul.affCoul();
	
	
	system("pause");
	return 0;
}


//Code r�alis� par Tristan et la sueure de son front.