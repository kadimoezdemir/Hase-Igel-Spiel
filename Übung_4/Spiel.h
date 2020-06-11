#pragma once

#include "Hase.h"
#include "Igel.h"
#include "FelderZur�ck.h"
#include "KostenloserZug.h"
#include "NochmalW�rfeln.h"

class Spiel {
	int ziel;
	int anz_hasen;
	int anz_igel;
	int anz_figuren;
	int gewinner;

	Ereignisfeld ereignis;
	Spielfigur* spielfiguren[32];

public:
	Spiel(int anzFelder, int anzHasen, int anzIgel);
	int getZiel();
	int wuerfle();
	void macheZug();
	bool getStand();
	void printGewinner();
};