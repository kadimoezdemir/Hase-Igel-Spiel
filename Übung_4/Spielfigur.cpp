#include "Spielfigur.h"

Spielfigur::Spielfigur() {
	position = 0;
	vorrat = 0;
	vorratZuvor = 0;
}

int Spielfigur::getPosition() {
	return position;
}

int Spielfigur::getVorrat() {
	return vorrat;
}

int Spielfigur::addPosition(int felder) {
	//
	if (position + felder >= 0) {
		position += felder;
		return felder;
	}
	else {
	// keine negative felder1
		int tempPosition = position;
		position = 0;
		return tempPosition;
	}
}

void Spielfigur::restoreVorrat() {
	vorrat = vorratZuvor;
}