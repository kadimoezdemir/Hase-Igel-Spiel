#include "FelderZur�ck.h"

void FelderZur�ck::_felderZur�ck(Spielfigur* figur) {
	int felderZurueck = figur->addPosition(-3);
	figur->addVorrat(-felderZurueck);
}