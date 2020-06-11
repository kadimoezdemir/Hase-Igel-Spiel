#include "Hase.h"

Hase::Hase() {
	position = 0;
	vorrat = 31;
	vorratZuvor = 31;
	karotten = vorrat;
	fehlversuche = 0;
}

bool Hase::ziehe(int felder) {
	int kosten = 0;
	// berechnet wie viele Karotten der Hase braucht
	for (int i = 1; i < felder; i++) {
		kosten += i;
	}

	// Wenn der Hase 3 fehlversuche hat, dann...
	if (fehlversuche == 3) {
		karotten += felder * 10;
		fehlversuche = 0;
		position -= felder;
		return false;
	}

	// ansonsten, wenn der Hase nicht ausreichend Karotten hat, dann...
	else if (kosten > karotten) {
		fehlversuche++;
		return false;
	}

	// Hase bewegt sich normal fort
	else {
		//fehlversuche = 0;
		vorratZuvor = karotten;
		karotten -= kosten;
		position += felder;
		return true;
	}

}

int Hase::getKarotten() {
	return karotten;
}

void Hase::addVorrat(int felder) {
	vorrat += felder * 10;
}


