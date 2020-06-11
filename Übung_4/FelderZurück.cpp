#include "FelderZurück.h"

void FelderZurück::_felderZurück(Spielfigur* figur) {
	int felderZurueck = figur->addPosition(-3);
	figur->addVorrat(-felderZurueck);
}