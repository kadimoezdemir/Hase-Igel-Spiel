#pragma once
#include "Spielfigur.h"
/*#include "FelderZurück.h"
#include "KostenloserZug.h"
#include "NochmalWürfeln.h"*/

class Ereignisfeld 
{
	int _feldgroesse;
	int zählvariable;

protected:
	Spielfigur** spielfiguren;

public:

	void ereignisfelderFestlegen();
	int ereignisfeldNummer();
	bool readinFeldgröße(int anzFelder);
	bool EreignisfeldArrayCheck(int position);

	//int* Spielfeld;
	int* EreignisfeldArray = new int[_feldgroesse];
};