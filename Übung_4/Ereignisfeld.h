#pragma once
#include "Spielfigur.h"
/*#include "FelderZur�ck.h"
#include "KostenloserZug.h"
#include "NochmalW�rfeln.h"*/

class Ereignisfeld 
{
	int _feldgroesse;
	int z�hlvariable;

protected:
	Spielfigur** spielfiguren;

public:

	void ereignisfelderFestlegen();
	int ereignisfeldNummer();
	bool readinFeldgr��e(int anzFelder);
	bool EreignisfeldArrayCheck(int position);

	//int* Spielfeld;
	int* EreignisfeldArray = new int[_feldgroesse];
};