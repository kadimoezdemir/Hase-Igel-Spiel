#pragma once

#include "Spielfigur.h"
#include "Ereignisfeld.h"

class Hase : public Spielfigur 
{
	int karotten;
	int fehlversuche;
public:
	Hase();
	bool ziehe(int felder);
	void addVorrat(int felder);
	int getKarotten();
};