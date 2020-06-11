#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <algorithm>

class Spielfigur {
protected:
	int position;
	int vorrat;
	int vorratZuvor;
public:
	Spielfigur();
	virtual bool ziehe(int felder) = 0;
	virtual void addVorrat(int felder) = 0;
	int getPosition();
	int getVorrat();

	int addPosition(int felder);
	void restoreVorrat();
};