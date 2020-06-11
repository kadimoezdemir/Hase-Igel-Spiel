#pragma once

#include "Spielfigur.h"
#include "Ereignisfeld.h"

class Igel : public Spielfigur
{
	int salat;
public:
	Igel();
	bool ziehe(int felder);
	void addVorrat(int felder);
	int getSalat();
};
