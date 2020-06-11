#include "Igel.h"
#include "Spiel.h"

Igel::Igel() {
	position = 0;
	vorrat = 10;
	vorratZuvor = 10;
	salat = vorrat;
}

bool Igel::ziehe(int felder) {
	// Wenn Salat nicht ausreicht, aussetzen 
	if (getSalat() < felder) {
		return false;
	}

	// Salat reicht aus
	else {
		vorratZuvor = salat;
		salat -= felder;
		position += felder;

		// Wenn Salat aufgebraucht, auffüllen
		if (getSalat() == 0) {
			salat = getVorrat();
		}
		return true;
	}

}

int Igel::getSalat() {
	return salat;
}

void Igel::addVorrat(int felder) {
	vorrat += felder;
}